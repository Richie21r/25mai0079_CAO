#pragma once
#include <stdio.h>
#include <omp.h>
#include "helloworld.h"

int fn_mnudrvprg_helloworld() {
    int choice;
    while (1) {
        printf("\nMenu:\n");
        printf("1. Hello World Serial\n");
        printf("2. Hello World Parallel\n");
        printf("3. Thread ID Serial\n");
        printf("4. Thread ID Parallel\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf_s("%d", &choice);

        switch (choice) {
        case 0:
            printf("Exiting program...\n");
            return 0;
        case 1:
            fn_helloworld_serial();
            break;
        case 2:
            fn_helloworld_parallel();
            break;
        case 3:
            fn_thread_id_serial();
            break;
        case 4:
            fn_thread_id_parallel();
            break;
        default:
            printf("Invalid choice. Try again.\n");
        }
    }
}