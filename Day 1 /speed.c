#include <stdio.h>
#include <unistd.h>   // for sleep()
#include <time.h>     // for clock_gettime()
#include <linux/time.h>

#define MAX_SIZE 100

int main() {
    struct timespec ts;
    double last_time[MAX_SIZE];
    int count = 0;

    while (1) {
        sleep(1);

        clock_gettime(CLOCK_REALTIME, &ts);
        double current_time = ts.tv_sec + ts.tv_nsec / 1e9;

        last_time[count++] = current_time;

        if (count > 2) {
            double avg_time = (last_time[count - 1] - last_time[count - 2]) * 1000;
            printf("Average time between prints: %f ms\n", avg_time);
        }

        // prevent overflow
        if (count >= MAX_SIZE) {
            count = 2;
            last_time[0] = last_time[count - 2];
            last_time[1] = last_time[count - 1];
        }
    }

    return 0;
}