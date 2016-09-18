#include<stdio.h>
 
int main()
{
	//Initialising variables.
   int n, sum = 0, remainder;
 
 //Getting input from user
   printf("Enter an integer\n");
   scanf("%d",&n);
   
    //Loop for getting sum of all digits.
   while(n != 0)
   {
      remainder = n % 10;
	  printf("The Remainder is %d\n", remainder);
      sum = sum + remainder;
	  printf("The Sum is %d\n", sum);
      n = n / 10;
	  printf("The n is %d\n", n);
   }
 
 	//printing sum of all digits.
   printf("Sum of digits of entered number = %d\n",sum);
 
   return 0;
}
