#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <time.h>

#define JUNCTIONS 20
#define SECONDS_PER_DAY 86400  // simulate 1 day of traffic (can be reduced for testing)

void fn_traffic_analyser() {
    int vehicle_counts[JUNCTIONS][1000];  // sample 1000 seconds of traffic
    float speeds[JUNCTIONS][1000];
    float avg_count[JUNCTIONS];
    float avg_speed[JUNCTIONS];
    float congestion_index[JUNCTIONS];
    float min_speed[JUNCTIONS];
    float max_speed[JUNCTIONS];

    srand(time(NULL));

    // Simulated traffic data
    for (int i = 0; i < JUNCTIONS; i++) {
        for (int j = 0; j < 1000; j++) {
            vehicle_counts[i][j] = rand() % 200;     // 0–199 vehicles per second
            speeds[i][j] = (rand() % 80) + 20;       // 20–100 km/h
        }
    }

    double start_time = omp_get_wtime();

#pragma omp parallel for
    for (int i = 0; i < JUNCTIONS; i++) {
        float sum_speed = 0.0, sum_count = 0.0;
        float min_v = speeds[i][0];
        float max_v = speeds[i][0];

        for (int j = 0; j < 1000; j++) {
            float spd = speeds[i][j];
            sum_speed += spd;
            sum_count += vehicle_counts[i][j];
            if (spd < min_v) min_v = spd;
            if (spd > max_v) max_v = spd;
        }

        avg_speed[i] = sum_speed / 1000.0;
        avg_count[i] = sum_count / 1000.0;
        congestion_index[i] = avg_count[i] / avg_speed[i];
        min_speed[i] = min_v;
        max_speed[i] = max_v;

        printf("Junction %2d handled by Thread %d | AvgCount: %.2f | AvgSpeed: %.2f | CI: %.3f | MinSpd: %.2f | MaxSpd: %.2f\n",
            i + 1, omp_get_thread_num(), avg_count[i], avg_speed[i], congestion_index[i], min_v, max_v);
    }

    double end_time = omp_get_wtime();

    printf("\nTraffic Analysis Completed in %.3f seconds using %d threads.\n",
        end_time - start_time, omp_get_max_threads());
}
#pragma once
