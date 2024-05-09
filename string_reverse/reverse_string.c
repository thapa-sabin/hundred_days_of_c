#include <stdio.h>
#include <string.h>

void reverse_string(char *from, char *to) {
    int offset = 0;
    int length = strlen(from) - 1;
    while (from[offset] != 0) {
        to[offset] = from[length];
        offset++;
        length--;
    }
    to[offset] = 0; // Making it NULL terminated
}

// Strings I am working with
int main(int argc, char **argv) {
    char str[] = "Hello";
    char newstring[500];

    reverse_string(str, newstring);
    printf("Oldstring = %s\n", str);
    printf("Newstring = %s\n", newstring);
}
