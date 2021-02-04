#include <stdio.h>

int main() //data types before a function is called return type

{                
                   /* Printf() variables and Arthimatic operation */
    printf("************************ #1-Task C-0 : Printf() variables and Arthimatic operation ************************ \n");
    int a=1; //data types eg int,char,float
    int b=2; 
    int c=a+b;//addition
    int g=a-b;//subtraction
    int h=a*b;//multiplication
    int i=a/b;//division
    int j;    // if we didn't specify a vlue for one variable it gives a value called a garbage value like 0 but it usually gives a very big number 

    printf("The addition of %d and %d is %d \n\n",a,b,c);   // we can use %d for integer, %c for char, %f for float, %lf for double
    printf("The difference of %d and %d is %d \n",a,b,g); 
    printf("The product of %d and %d is %d \n",a,b,h); 
    printf("The quotient of %d and %d is %d \n\n",a,b,i); 
                  
                   /* User Inputs */
    printf("************************ Task C-1 : User Inputs ************************ \n\n");
    int d,e,f;
    
    printf("Enter the first number: ");
    scanf("%d",&d);
    printf("Enter the second number: ");
    scanf("%d",&e);
    f=d*e;
    printf("The product of the two number is: %d",f);
    
     //#what is the difference between double and float?
    //The difference between float and double is precision, double has 2x the precision of float
    
    return 0; // because of the return type u can choose any number for return
}

