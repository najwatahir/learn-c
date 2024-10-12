#include <stdio.h>
#include <ctype.h>

int main() {
    char unit; // F (fareinhet), C (celcius)
    float temp;

    printf("\nIs the temperature in (F) or (C)?: ");
    scanf("%c", &unit);

    unit = toupper(unit); /*toupper is used to capitalize a small character*/

    if (unit == 'C') {
        printf("Enter the temp in Celcius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temp in Farenheit is: %.1f", temp);
    } else if (unit == 'F') {
        printf("Enter the temp in Farenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe temp in Celcius is: %.1f", temp);
    } else {
        printf("\n%c is not a valid of unit measurement", unit);
    }

    return 0;
}