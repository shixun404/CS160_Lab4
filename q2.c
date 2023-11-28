#include <omp.h>
#include <stdio.h>

static long num_steps = 10000000;
double step;

int main() {
    int i;
    double x, pi, sum = 0.0;
    step = 1.0 / (double) num_steps;
    double timee = omp_get_wtime();
	
	//////////////////////////////////////////////////////////////////////////////////////
	// please change this into a parallel version using loop construct
    
    for (i = 0; i < num_steps; i += 1) {
            x = (i + 0.5) * step;
            sum = sum + 4.0 / (1.0 + x * x);
    }

    //////////////////////////////////////////////////////////////////////////////////////

    timee = omp_get_wtime() - timee;
    pi = step * sum;

    printf("%lf\nTime elapsed: %g\n", pi, timee);
    return 0;
}