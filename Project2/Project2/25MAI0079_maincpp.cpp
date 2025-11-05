#include <stdio.h>
#include <omp.h>
#include "040_card_game.h"
#include "050_bakery_order_system.h"
#include "060_Data_env_constructs.h"
#include "060_Data_env_critical.h"
#include "060_Data_env_reduction.h"
#include "traffic_analyser.h"

int main() {
	//fn_card_game_simul();
	//fn_bakery_order_system();
	//fn_run_vector_addition();
	//fn_run_dot_prod();
	//fn_calc_dot_prod();
	printf("=== REAL-TIME TRAFFIC FLOW ANALYZER USING OPENMP ===\n\n");
	fn_traffic_analyser();
	return 0;
}