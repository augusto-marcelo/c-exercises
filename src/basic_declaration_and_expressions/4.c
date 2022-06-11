/*
4. Write a C program to print the following characters in a reverse way.

Test Characters: 'X', 'M', 'L'
Expected Output:
The reverse of XML is LMX
*/

#include <stdio.h>
#include <string.h>

void print_reverse(char text[]) {

    int str_size = strlen(text);
    char reverted[str_size];

    for(int i = 0; i < str_size; i++) {
        int idx = str_size - (i + 1);
        reverted[i] = text[idx];
    }

    reverted[str_size] = '\0';

    printf("The reverse of %s is: %s \n\n", text, reverted);

}

int main() {
    char text[] = "Hello World";
    print_reverse(text);
}

