#include<stdio.h>
 
int main()
{
   int n, sum = 0, remainder;
 
   printf("Enter an integer\n");
   scanf("%d",&n);
    
   while(n != 0)
   {
      remainder = n % 10;
	  printf("The Remainder is %d\n", remainder);
      sum = sum + remainder;
	  printf("The Sum is %d\n", sum);
      n = n / 10;
	  printf("The n is %d\n", n);
   }
 
   printf("Sum of digits of entered number = %d\n",sum);
 
   return 0;
}
