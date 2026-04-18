#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <windows.h> // for sleepy on windows

int main(void) {
    int braincells = 5;
    bool alive = true;

    if (alive == false) {
        printf("rest in peace");
        Sleep(1000);
        return 1;
    }
    if (braincells == 0) {
        printf("yeah u dead");
        Sleep(1000);
        return 1;
    }
    if (braincells < 10) {
        printf("you are very dumb but alive");
    }
    else if (braincells > 30) {
        printf("kind of smart");
    }
    else if (braincells > 20) {
        printf("middle land smarts");
    }
    return 0;
}