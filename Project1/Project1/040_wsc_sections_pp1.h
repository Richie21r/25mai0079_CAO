#include "stdio.h"
#include "040_calculator_functions_pp1.h"
#include "omp.h"
void fn_wsc_sections_pp1_srl() {
	int a = 5, b = 3, sum,difference;
	
	double start_time = omp_get_wtime();

		fn_calculator_add(a, b);
	printf("sum is %d by thhread id %f", sum,omp_get_thread_num());

	fn_calculator_substract(a, b);
	printf("ramins=%d by thhread id %f", difference, omp_get_thread_num());
	double end_time = omp_get_wtime();
	printf("execution time = " + end_time - start_time);
}

void fn_wsc_sections_pp1_prl() {
#pragma omp parallel section
	{
		int a = 5, b = 3, sum, difference;
		double start_time = omp_get_wtime();
		
#pragma omp section{
		fn_calculator_add(a, b);
		printf("sum is %d by thhread id %d", sum, omp_get_thread_num());
		}
		
#pragma omp section{
		fn_calculator_substract(a, b);
		printf("ramins=%d by thhread id %d",, omp_get_thread_num());
		}
	}
}
