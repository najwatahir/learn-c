#include <stdio.h>

// function is used to avoid duplicate code and to have efficient code
void birthday(char name[], int age) // -> parameters 
{
    printf("\nhappy birthday ^_^");
    printf("\nbest wishes for u xD\n");
}

int main() {

    char name[] = "Bro";
    int age = 21;

    birthday(name, age); /*-> arugement*/

    return 0;
}