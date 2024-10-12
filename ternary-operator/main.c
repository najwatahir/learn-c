#include <stdio.h>

int findMax(int x, int y)
{
    return (x > y) ? x : y;
    // this is actually same like if/else, but this one is shorter and simpler. but it's only for 2 condition only.
    // if the condition is true, it will return x value. if it false, then it will return value.
}

int main() {
    // ternary operator = shortcut to if/else when assigning/rturning a value
    // (condition) ? value if true : value if false

    int max = findMax(3, 4);
    printf("%d", max);


    return 0;
}