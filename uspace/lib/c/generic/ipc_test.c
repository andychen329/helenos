/*
 * Copyright (c) 2018 Jiri Svoboda
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the distribution.
 * - The name of the author may not be used to endorse or promote products
 *   derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/** @addtogroup libc
 * @{
 */
/** @file IPC test service API
 */

#include <abi/ipc/interfaces.h>
#include <errno.h>
#include <ipc/services.h>
#include <ipc/ipc_test.h>
#include <loc.h>
#include <stdlib.h>
#include <ipc_test.h>

/** Create IPC test service session.
 *
 * @param rvol Place to store pointer to volume service session.
 * @return     EOK on success, ENOMEM if out of memory, EIO if service
 *             cannot be contacted.
 */
errno_t ipc_test_create(ipc_test_t **rtest)
{
	ipc_test_t *test;
	service_id_t test_svcid;
	errno_t rc;

	test = calloc(1, sizeof(ipc_test_t));
	if (test == NULL) {
		rc = ENOMEM;
		goto error;
	}

	rc = loc_service_get_id(SERVICE_NAME_IPC_TEST, &test_svcid, 0);
	if (rc != EOK) {
		rc = ENOENT;
		goto error;
	}

	test->sess = loc_service_connect(test_svcid, INTERFACE_IPC_TEST, 0);
	if (test->sess == NULL) {
		rc = EIO;
		goto error;
	}

	*rtest = test;
	return EOK;
error:
	free(test);
	return rc;
}

/** Destroy IPC test service session.
 *
 * @param test IPC test service session
 */
void ipc_test_destroy(ipc_test_t *test)
{
	if (test == NULL)
		return;

	async_hangup(test->sess);
	free(test);
}

/** Simple ping.
 *
 * @param test IPC test service
 * @return EOK on success or an error code
 */
errno_t ipc_test_ping(ipc_test_t *test)
{
	async_exch_t *exch;
	errno_t retval;

	exch = async_exchange_begin(test->sess);
	retval = async_req_0_0(exch, IPC_TEST_PING);
	async_exchange_end(exch);

	if (retval != EOK)
		return retval;

	return EOK;
}

/** @}
 */
