#include <stdio.h>

int
main ()
{
//shorthand operator 
  int a = 0, b = 0;
  printf ("the initial value of a is 7 \n");
  a += 7;
  printf ("the shorthand addition operator 'a+=7' %d \n", a);
  a *= 7;
  printf ("the shorthand product operator 'a*=7' %d \n", a);

//increment and decrement
  b++;				//post increment - it increment a after finishing the opertion
  printf ("post increment 'b++' %d \n", b);
  ++b;				//preincrement - it increment the value of a before the operation
  printf ("pre increment '++b' %d \n", b);
//Realational operator
  int result = 5 > 3;
  printf ("%d \n", result);
//Logical operator
  int result_2 = 5 != 2 && 5 > 2;
  printf ("%d \n", result_2);
//Bitwise operator
  //it works by binary format like 
  /*eg -1 if we have 25 | 15 then in binary 25 will be -1 1 0 0 1 and 15 will be - 0 1 1 1 1 
     then the result will be 1 1 1 1 1 and its value is 31 */
  int result_3 = 25 | 15;
  printf ("%d \n", result_3);
  /*eg -1 if we have 25 & 15 then in binary 25 will be -1 1 0 0 1 and 15 will be - 0 1 1 1 1 
     then the result will be 0 1 0 0 1 and it value is 9 */
  int result_4 = 25 & 15;
  printf ("%d \n", result_4);
//left and right shift operator
  int result_5 = 16;
   /* the purpose of this right shift operator is 
   it will delete the last two binary numbers of 16 1 0 0 0 0 and it become 1 0 0 it is 4*/
  int resultShift = result_5 >> 2;	
  printf("%d \n",resultShift);
  /* the purpose of this eftshift operator is 
   it will delete the last two binary numbers of 16 1 0 0 0 0 and it become 1 0 0 0 0 it is 64*/
  int resultShift_2 = result_5 << 2;
   printf("%d \n",resultShift_2);
  
 

  return 0;

}
