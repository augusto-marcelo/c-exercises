/*
1. Write a program in C to show the basic declaration of pointer. 

Expected Output :

 Pointer : Show the basic declaration of pointer :                                                            
-------------------------------------------------------                                                       
 Here is m=10, n and o are two integer variable and *z is an integer                                          
                                                                                                              
 z stores the address of m  = 0x7ffd40630d44                                                                  
                                                                                                              
 *z stores the value of m = 10                                                                                
                                                                                                              
 &m is the address of m = 0x7ffd40630d44                                                                      
                                                                                                              
 &n stores the address of n = 0x7ffd40630d48                                                                  
                                                                                                              
 &o  stores the address of o = 0x7ffd40630d4c                                                                 
                                                                                                              
 &z stores the address of z = 0x7ffd40630d50    
*/
#include <stdio.h>

int
main() {
    int m = 10;
    int n, o;

    int *z = &m;

    printf("int m = 10 \n\n");
    printf("z stores the address of m = %#010x \n", z);
    printf("*z store the value of m = %d \n", *z);
    printf("&m is the address of m = %#010x \n", &m);
    printf("&n stores the address of n = %#010x \n", &n);
    printf("&o stores the address of o = %#010x \n", &o);
    printf("&z stores the address of z = %#010x \n", &z);


    puts("\n");
}