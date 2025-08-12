/*#include "stdio.h"
#include "helloworld_srl.h"
#include "helloworld_prl.h" // Ensure this header declares fn_helloworld_parallel
#include "helloworld.h"

int main() {
    // Call the serial version of the hello world function
    fn_helloworld_serial();
    
    // Call the parallel version of the hello world function
    fn_helloworld_parallel();
    
    // Call the serial version of the thread ID function
    fn_thread_id_serial();
    
    // Call the parallel version of the thread ID function
    fn_thread_id_parallel();
    
    return 0;
}*/


/*ex1#include<stdio.h>
#include<omp.h>
#include "mnudrvprg_helloworld.h"

int main()
{
    fn_mnudrvprg_helloworld();
    return 0;
}*/














//#include "040_wsc_sections_pp1.h"
//#include "ret_et_helloworld.h"
//#include "ret_tid_helloworld.h"
//#include "ret_practice.h"
//#include "031_wsc_for_num_square.h"

//#include "mnudrvprg_010_parallel_construct.h"
//#include "fn_mnudrvprg_020_runtime_enviornment_routines.h"

//int main() {
    //fn_num_Square();

    //fn_wsc_for_2constructs();
    //fn_wsc_for_1construct();
//    //omp_set_num_threads(2);
  //  fn_helloworld_srl();
    //printf("\n\n\n");
    //fn_helloworld_prl();
    //    //fn_ret_et_helloworld_srl();
    //    //fn_ret_et_helloworld_prl()
    //    //fn_ret_tid_helloworld_srl();
    //    //fn_ret_tid_helloworld_prl();
        //fn_ret_practice_srl();
        //fn_ret_practice_prl();
    //    //fn_rer_practice3_speed_ef();
    //    //printf("hello world");
      //fn_mnudrvprg_020_runtime_enviornment_routines();
   // return 0;
//}

//int main() {
  //  fn_wsc_sections_pp1_srl();
    //fn_wsc_sections_pp1_prl();
    //return 0;}

#include <stdio.h>
#include<omp.h>
#include "031_wsc_for_num_square.h"

int main() {
    int choice;

    do {
        printf("\n==============================\n");
        printf("Menu: Number Square using Work-Sharing Construct (OMP)\n");
        printf("==============================\n");
        printf("1. Serial Execution\n");
        printf("2. Parallel Execution\n");
        printf("3. Compare Execution Time, Speedup, and Efficiency\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf_s("%d", &choice);

        switch (choice) {
        case 1:
            fn_num_square_srl();
            break;
        case 2:
            fn_num_square_prl();
            break;
        case 3:
            fn_num_square_speedup_efficiency();
            break;
        case 4:
            printf("Exiting program...\n");
            break;
        default:
            printf("Invalid choice. Please enter 1–4.\n");
        }
    } while (choice != 4);

    return 0;
}
