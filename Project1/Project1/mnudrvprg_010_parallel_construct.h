#include "stdio.h"
#include "omp.h"
#include "helloworld_srl.h"
#include "helloworld_prl.h"

int fn_mnudrvprg_010_parallel_construct() {
	int choice;



	while (1) {
		printf("########################################################################################\n");
		printf("List of choices\n");
		printf("0:Exit\t 1:Hello World serial program output\t 1:Hello World parallel program output\t\n");
		printf("########################################################################################\n");
		printf("Enter your choice\n");
		scanf_s("%d", &choice);
		switch (choice) {
		case 0: {
			printf("You opted to exit program\n");
			return 0;
		}
		case 1: {
			printf("this is the output of hello world serial program\n");
			helloworld_srl();
			break;
		}
		case 2: {
			printf("this is the output of hello world parallel program\n");
			helloworld_prl();
			break;
		}
		default: {
			printf("Opted wrong choice\n");
			break;
		}
		}
	}
}