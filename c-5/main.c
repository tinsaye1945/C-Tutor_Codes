#include <stdio.h>
// User defined functions
/* the order is 
1-Declarations like "void new_fun();" before main funtions
2-definition the statements of "void new_fun(){ ... }" before main or belowit
3-calling call it to use maily in main function like "new_fun();"
*/
void new_fun(); //without return type
int add(int,int); //with return type
int main()
{
    new_fun();
    int answer = add(5,6);
    printf("%d \n",answer);
    return 0;
}
void new_fun(){
       printf("Hello World \n");
}
int add(int i,int j){
    int k=i+j;
    return k;
}