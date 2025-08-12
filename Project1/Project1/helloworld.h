#include <stdio.h>
#include <omp.h>

void fn_helloworld_serial() {
    printf("Hello world serial \n");
}

void fn_helloworld_parallel() {
#pragma omp parallel
    printf("Hello world parallel\n");
}

void fn_thread_id_serial() {
    printf("Thread ID: 0 (serial execution)\n");
}

void fn_thread_id_parallel() {
#pragma omp parallel
    printf("Thread ID: %d\n", omp_get_thread_num());
}