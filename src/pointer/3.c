/*
3. Write a program in C to demonstrate the use of &(address of) and *(value at address) operator. 

Expected Output :

Pointer : Demonstrate the use of & and * operator :                                                          
--------------------------------------------------------                                                      
 m = 300                                                                                                      
 fx = 300.600006                                                                                              
 cht = z                                                                                                      
                                                                                                              
 Using & operator :                                                                                           
-----------------------                                                                                       
 address of m = 0x7ffda2eeeec8                                                                                
 address of fx = 0x7ffda2eeeecc                                                                               
 address of cht = 0x7ffda2eeeec7                                                                              
                                                                                                              
 Using & and * operator :                                                                                     
-----------------------------                                                                                 
 value at address of m = 300                                                                                  
 value at address of fx = 300.600006                                                                          
 value at address of cht = z                      

Using only pointer variable :                                                                                
----------------------------------                                                                            
 address of m = 0x7ffda2eeeec8                                                                                
 address of fx = 0x7ffda2eeeecc                                                                               
 address of cht = 0x7ffda2eeeec7                                                                              
                                                                                                              
 Using only pointer operator :                                                                                
----------------------------------                                                                            
 value at address of m = 300                                                                                  
 value at address of fx= 300.600006                                                                           
 value at address of cht= z  
*/
#include <stdio.h>

int
main() {
    int a;
    float b;
    char c;

    a = 300;                                                                                                    
    b = 300.600006;                                                                                            
    c ='z';
    
    int *m = &a;
    float *fx = &b;
    char *cht = &c;


    puts("Pointer : Demonstrate the use of & and * operator : ");
    puts("--------------------------------------------------------");

    printf("m = %d \n", *m);
    printf("fx = %.6f \n", *fx);
    printf("cht = %c \n", *cht);

    puts("");
    puts("Using & operator : ");
    puts("--------------------------------------------------------");
    
    printf("address of m = %p \n", &m);
    printf("address of fx = %p \n", &fx);
    printf("address of cht = %p \n", &cht);

    puts("");
    puts("Using & and * operator: ");
    puts("--------------------------------------------------------");
    printf("value at address of m = %d \n", *m);
    printf("value at address of fx = %d \n", *fx);
    printf("value at address of cht = %d \n", *cht);

    puts("");
    puts("Using only pointer variable : ");
    puts("--------------------------------------------------------");
    printf("address of m = %p \n", m);
    printf("address of fx = %p \n", fx);
    printf("address of cht = %p \n", cht);

    puts("");
    puts("Using only pointer operator : ");
    puts("--------------------------------------------------------");
    printf("value at address of m = %d \n", *m);
    printf("value at address of fx = %.6f \n", *fx);
    printf("value at address of cht = %c \n", *cht);

    puts("\n");

}