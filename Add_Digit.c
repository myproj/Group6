#include <iostream>

using namespace std;

int main()
{
	//Initialisation of variables.
   int n, sum = 0, remainder;
 	//Input from user.
   cout<<"Enter an integer\n";
   cin>>n;

   //Loop to find sum of all digits.
   while(n != 0)
   {
      remainder = n % 10;
	  cout<<"The Remainder is "<<remainder<<"\n";
      sum = sum + remainder;
      cout<<"The Sum is "<<sum<<"\n";
      n = n / 10;
	  cout<<"The n is "<<n<<"\n";
   }

   //Display output to user.
	cout<<"Sum of digits of entered number = "<<sum<<"\n";
    return 0;
}
