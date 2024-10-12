#include <stdio.h>

void hello(char[], int); // function prototype. simply like a table of content so that's why it is written before the main function. so the compiler will know what are the functions. it also helps with debugging and avoid unexpected behaviour

int main() {

    char name[] = "anne";
    int age = 20;

    hello(name, age);

    return 0;
}

void hello(char name[], int age) {
    printf("\nhello %s", name);
    printf("\nyou are %d y.o", age);
}