#include <stdio.h>
#include <string.h>

int main() {

    char string1[20] = "Anne";
    char string2[] = "Arcksdhfskdj";
  
    strncat(string1, string2, 1); // -> concatenate 1 word from string2 to string1

    printf("%s", string1);


    return 0;
}