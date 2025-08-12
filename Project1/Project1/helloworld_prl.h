#include<stdio.h>
#include<omp.h>

void fn_helloworld_prl()
{
#pragma omp parallel
	// The printf function is used to print the message "hello world parallel" to the console.
	// The message will be printed by each thread in the parallel region.
	// Each thread will execute this line independently, resulting in multiple outputs.
	// The output may appear in any order depending on the scheduling of threads.	
	printf("hello world parallel\n");
}