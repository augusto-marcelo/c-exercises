/*
3. Write a C program to print a block F using hash (#), where the F has a height
 of six characters and width of five and four characters. And also to print a big 'C'. 

Expected Output:

######
#
#
#####
#
#
#
    ######
  ##      ##
 #
 #
 #
 #
 #
  ##      ##
    ######
*/
#include <stdio.h>



void print_chars(c, n) {

    for(int i = 0; i < n; i++) {
        printf("%c", c);
    }

    printf("\n");

}

int main() {
    char c = '#';

    // Print letter F
    print_chars(c, 6);
    print_chars(c, 1);
    print_chars(c, 1);
    print_chars(c, 5);
    print_chars(c, 1);
    print_chars(c, 1);
    print_chars(c, 1);

    printf("\n\n");

    // Print letter C
    print_chars(c, 6);
    print_chars(c, 1);
    print_chars(c, 1);
    print_chars(c, 1);
    print_chars(c, 1);
    print_chars(c, 1);
    print_chars(c, 1);
    print_chars(c, 6);
}