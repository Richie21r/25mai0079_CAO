#include"stdio.h"
#include"omp.h"

void fn_ret_tid_helloworld_srl()
{
	printf("Hello World Serial printed by thread ID: %d \n", omp_get_thread_num());
}

void fn_ret_tid_helloworld_prl()
{
#pragma omp parallel
	printf("Hello World Parallel printed by thread ID: %d \n", omp_get_thread_num());
}