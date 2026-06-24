// SPDX-License-Identifier: GPL-2.0
/*
 * Test file for demonstrating patch application failures
 */
#include <stdio.h>
#include <stdlib.h>

#define MAX_BUFFER 256
#define DEBUG_MODE 1

struct test_data {
	int id;
	char name[64];
	void *ptr;
	int status;
};

int process_data(struct test_data *data)
{
	if (!data)
		return -1;
	
	printf("Processing: %s (status: %d)\n", data->name, data->status);
	return 0;
}

int main(void)
{
	struct test_data test = {
		.id = 1,
		.name = "test",
		.ptr = NULL,
		.status = 0,
	};
	
	return process_data(&test);
}

// Made with Bob
