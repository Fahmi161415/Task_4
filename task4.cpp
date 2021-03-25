// Expressing in terms in Prime numbers
#include <iostream>
using namespace std;

// check prime number
bool checkPrime(int n)
{
	int i;
	bool isPrime=true;
	
	if(n==0||n==1)
	{
		isPrime=false;
	}
	else
	{
		for (i=2;i<=n/2;++i)
		{
			if(n%i==0)
			{
				isPrime=false;
				break;
			}
		}
	}
	return isPrime;
	
}

int main()
{
	int n,i;
	bool flag=false;
	
	cout<<"Enter a positive number :"<<endl;
	cin>>n;
	
	for (i=2;i<n;++i)
	{
		if(checkPrime(i))
		{
			if(checkPrime(n-i))
			{
				cout<<n<<"="<<i<<"+"<<n-i<<endl;
				flag=true;
			}
		}
	}
	if(!flag)
	{
		cout<<n<<"Cant be expressed in term of two prime numbers"<<endl;
		
	}
	return 0;
}


