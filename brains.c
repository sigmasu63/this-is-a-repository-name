#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#ifdef _WIN32
#include <windows.h>
#define SLEEP(ms) Sleep(ms)
#else
#include <unistd.h>
#define SLEEP(ms) usleep((ms) * 1000)
#endif
int main(void) {
    printf("hi");

    bool alive = true;

    if (alive == false) {
        printf("rest in peace");
        SLEEP(1000);
        return 0;
    }

}
