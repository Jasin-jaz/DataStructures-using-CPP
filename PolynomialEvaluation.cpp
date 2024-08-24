//Program to evaluate polynomial
#include<iostream>
#include<math.h>
using namespace std;
class polynomial
{
	private: int a[10],n,x;
	public: void read();
			void eval();
};
void polynomial::read()
{
	cout<<"Enter highest power of polynomial: ";
	cin>>n;
	cout<<"Enter coefficients of polynomial\n";
	for(int i=0;i<=n;i++)
		cin>>a[i];
	cout<<"Enter the value of x: ";
	cin>>x;
	cout<<"\n";
}
void polynomial::eval()
{
	int result=0;
	for(int i=0;i<=n;i++)
	{
		result=result+a[i]*pow(x,i);
	}
	cout<<"Given polynomial is ";
	for(int i=n;i>0;i--)
		cout<<a[i]<<"X^"<<i<<" + ";
	cout<<a[0]<<"X^0"<<"\n";
	cout<<"Result: "<<result<<"\n";
}
int main()
{
polynomial p;
p.read();
p.eval();
return 0;
}
