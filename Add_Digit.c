#include <iostream>

using namespace std;

int main()
{
	//Variable initiation
   int n, sum = 0, remainder;
 
   printf("Enter an integer\n");
   scanf("%d",&n);
    //Loop for finding sum of digits
   while(n != 0)
   {
   	if(n<0)
   	{
   		if(n/10 < 0)
   			remainder = -(n % 10);
   		else
   			remainder = n % 10;
   	}
   	else
      	remainder = n % 10;
	  printf("The Remainder is %d\n", remainder);
      sum = sum + remainder;
      cout<<"The Sum is "<<sum<<"\n";
      n = n / 10;
	  cout<<"The n is "<<n<<"\n";
   }
 //printing sum f digits
   printf("Sum of digits of entered number = %d\n",sum);
 
   return 0;
}
