#include <stdio.h>
#define x 5
#define hello printf("hello world")
int main()
{
//Branching statement
    int a,b;
    printf("Enter the number : ");
    scanf("%d",&a);
    b=a%2;
    if(b==0){
    printf("The number is even\n");
    }
    if(b!=0){
    printf("The number is odd\n");
    }
//#define - it is preprocessor used to create constant macros
   int x_1 = x;
   printf("The defined value of x is %d then it assigned to x_1 \n",x_1);
   // we can print hello world with out semicolon
   //method-1 :#define
   printf("We can print hello world with out semicolon by #define preprocessor : ");hello;
   //method-2 :if statement
   printf("We can print hello world with out semicolon by if statement : ");
   if(printf("hello world \n")){
       
   }
//switch statement
   int o = 1; 
   switch(o)
   {
       case 0:
       printf("Zero \n");
       break;
       case 1:
       printf("One \n");
       break;
       case 2:
       printf("Two \n");
       break;
       default :
       printf("Not a valid number \n");
   }
   
//Ternary operator
//conditions?exp1:exp2;
   int i=1,j=0;
   j = i==1?5:6;
 
//swapping numbers without third variable
 //u can Use z=z*(+)y; y=z/(-)y; z=z/(-)y; or b = a+b-(a=b);
 int z=1,y=2;
 z=z^y; // XOR format : if 1 1 -> 0 and 1 0 -> 1 the numbers gets from their binary format
 y=z^y;
 z=z^y;
 printf("z: %d,y : %d\n",z,y)
   return 0;
}
