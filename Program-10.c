//INPUT: 12
//OUTPUT: Square root of 12.00 = 3.46
#include <stdio.h>
#include<math.h>
int main()
{
   float num, root;
   printf("enter a number : ");   
   scanf("%f", &num);
   root = sqrt(num);
   printf("Square root of %.2f = %.2f",num ,root );  
   return 0;
}
   
