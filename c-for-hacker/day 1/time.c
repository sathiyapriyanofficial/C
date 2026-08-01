#include <stdio.h>
#include <time.h>

int main() {
    struct timespec start, current;

    clock_gettime(CLOCK_MONOTONIC, &start);

    while (1) {
        clock_gettime(CLOCK_MONOTONIC, &current);

        double diff =
            (current.tv_sec - start.tv_sec) +
            (current.tv_nsec - start.tv_nsec) / 1e9;

        printf("Elapsed: %.3f seconds\n", diff);

        struct timespec ts = {1, 0};
        nanosleep(&ts, NULL);
    }

    return 0;
}