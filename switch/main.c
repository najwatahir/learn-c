#include <stdio.h>

int main()
{

    char grade;

    printf("\nEnter your grade: ");
    scanf("%c", &grade);

    switch (grade){
    case 'A':
        printf("perfect!\n");
        break;
    case 'B':
        printf("good!\n");
        break;
    case 'C':
        printf("okay!\n");
        break;
    case 'D':
        printf("failed\n");
        break;
    default:
        printf("please enter valid grade\n");
    }
}