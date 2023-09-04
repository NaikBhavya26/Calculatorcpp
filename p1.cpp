#include <iostream>
using namespace std;

int main()
{
	char op;
	float no1, no2;
    
    cin>>no1>>op>>no2;
	
    

	
	 

	switch (op)
	{	
		// If user enter +
		case '+':
			cout << "The sum of the numbers is ="<< no1 + no2;
			break;
		
		// If user enter -
		case '-':
			cout <<"The subtraction of the numbers is ="<< no1 - no2;
			break;
		
		// If user enter *
		case '*':
			cout <<"The multiplication of the numbers is ="<< no1 * no2;
			break;
		
		// If user enter /
		case '/':
			cout <<"The division of the numbers is ="<< no1 / no2;
			break;
		
		// If the operator is other than +, -, * or /,
		// error message will display
		default:
			cout << "Error! operator is not correct";
			
	}
	// switch statement ends

	return 0;
}
