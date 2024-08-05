#include <stdio.h>
#include <omp.h>

int main() {
   
    int num_threads = 5; 

    #pragma omp parallel num_threads(num_threads)
    {
        
        printf("Hello, World from thread %d\n", omp_get_thread_num());
    }

    return 0;
}
