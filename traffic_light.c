#include <stdio.h>
#include <unistd.h>
int main() {
    while (1) {
        printf("RED Light ON\n");
        sleep(30);

        printf("GREEN Light ON\n");
        sleep(15);

        printf("YELLOW Light ON\n");
        sleep(5);
    }
    return 0;
}
