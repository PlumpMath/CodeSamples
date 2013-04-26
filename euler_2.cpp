#include <iostream>
using namespace std;
/*
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/

int evenFibSum(int n)
{
	int fnm		= 1;
	int fn		= 1;
	int temp	= 0;
	int sum		= 0;
	
	while(true)
	{
		temp = fn;
		fn += fnm;
		fnm = temp;

		if(fn > n)
			break;
		if (fn%2 == 0)
			sum+= fn;
	}

	return sum;
}

void main()
{
	cout << evenFibSum(40) << endl << evenFibSum(4000000);
	while(cin);
}