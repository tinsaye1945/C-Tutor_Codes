#include <stdio.h>

int main()
{
    /*while loop structures
    int var_name; initialization
    while(conditions)
    {
        statements and increment;
    } */
    
    int a = 0;
    while(a<=5){
    printf("Hello World");
    a++;
    }
   
    /* int var_name; initializations
    do 
    {
      statements and increment;
    }
    while(conditions);
    */ 
    do
    {
        printf("Hello World");
        a++
    }
    while(a<5);
    
    
     /*for loop structures
    int var_name; declaration
    for(initialization; condition; increment)
    {
        statements;
    } */
    
    int b;
    for(b=0;b<4;b++)
    {
        printf("Hello World");
    }
    
    /* for loop with two variables*/
    int c,d;
    for(c=0;c<4;c++)
    {
        for(d=0;d<4;d++)
           {
        printf("Hello World");
           }
    }
    return 0;
    
    
}
