#include <stdio.h>

int main() {
    int age;

    printf("\n Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("you are legal");
    } else {
        printf("you are minor");
    }

    return 0;
}