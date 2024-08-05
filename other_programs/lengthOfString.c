#include<stdio.h>
#include<string.h>

int main() {
    char name[100]; // Buffer to store the string

    printf("Enter a string: ");
    fgets(name, sizeof(name), stdin);
    printf("length of %s is %d ", name, strlen(name));
    return 0;
}