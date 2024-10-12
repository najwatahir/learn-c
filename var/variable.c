#include <stdio.h>
#include <stdbool.h> // for boolean

int main()
{
    /*variable = allocated space in memory to store a value*/
    int x;       // declaration
    x = 23;      // initialization
    int y = 354; // declaration + initialization

    int age = 18;                  // integer
    float gpa = 3.9;               // floating point number. 4 bytes (32 bits of precision) 6-7 digits
    double ratio = 3.347589353487; // 8 bytes (64 bits of precision) 15-16 digits. double is more precise
    char grade = 'B';              // for single character
    char b = 124;                  // 1 byte. char can also store integer between -128 to +127. it can use %d or %c
    // also try refer to ASCII Table
    unsigned char g = 255; // 1 byte. 0 to +255. use %d or %c
    char name[] = "omi";   // array of characters
    bool e = false;        // 1 byte (true or false)

    // %d to display integer
    printf("you are %d age years old\n", age);
    // %c to display char
    printf("your grade is %c\n", grade);
    // %f to display float
    printf("your gpa is %f\n", gpa);
    // %lf to display double (long float). use 0.15lf to add the mount of zero point
    printf("your gpa ratio is %lf\n", ratio);
    // %s to display array of characters (string)
    printf("your name is %s\n", name);
    // use %d to display boolean
    printf("%d\n", e);
    printf("%c\n", b); // if it called with %c, then it will refer to ASCII Table. 124 representation in char on ASCII Table is l(L).

    // format specifier
    // %c = char
    // %s = string (array of characters)
    // %f = float
    // %lf = double
    // %d = integer

    // %.1 = decimal precision
    // %1 = minimum field width
    // %- = left align

    float item1 = 5.75;
    printf("Item 1 = $%.2f", item1); // the .2f means we only want 2 digits after dot (.)

    return 0;
}

/*the difference between integers and unsigned char:
1. integer
int takes up to 16 bytes. and accepted values are between -32767 and 32767
2. unsigned char
*/
// im a big fan big fan. signature pls