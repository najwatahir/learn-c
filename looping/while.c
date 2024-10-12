#include <stdio.h>

int main() {

    int A = 10;
    int B;

    printf("B: ");
    scanf("%d", &B);

    while(B > A) {
        printf("oh it's bigger\n");
        printf("B: ");
        scanf("%d", &B);
    }


    return 0;
}