#include <stdio.h>
#include <string.h>

// Strings I am working with
int main(int argc, char **argv) {
    char str[] = "Hello";
    char newstring[500];

    reverse_string(str, newstring);
    printf("Oldstring = %s\n", str);
    printf("Newstring = %s\n", newstring);
}
