#include "functions.h"

int factorial(int n){
	if(n<0)
	{
		std::cout << "Enter number again :\n";
		std::cin >> n;
		factorial(n);
	} 
    if(n!=1){
	cout << "Please wait.....";
	cout << "test\n";
	return(n * factorial(n-1));
    }
    else return 1;
}
