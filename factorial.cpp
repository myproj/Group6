#include "functions.h"
using namespace std;
int factorial(int n){
	if(n<0) // check for a negative number 
		cout<<"Please enter a positive no ";
	else{    
	if(n!=1){// checking if the no is positive  or 0 but not 1
	return(n * factorial(n-1));
    }
    //else return 1;}
	return 1;
}
