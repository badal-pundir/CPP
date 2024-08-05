#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello, World!";
    char destination[50]; // Ensure this is large enough to hold the source string

    strcpy(destination, source);

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}
