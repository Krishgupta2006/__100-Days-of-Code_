#include <stdio.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    enum TrafficLight signal;

    for (signal = RED; signal <= GREEN; signal++) {
        if (signal == RED)
            printf("RED: Stop\n");
        else if (signal == YELLOW)
            printf("YELLOW: Wait\n");
        else if (signal == GREEN)
            printf("GREEN: Go\n");
    }

    return 0;
}
