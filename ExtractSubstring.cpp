//Program to extract the substring of given dimension from given string
#include<iostream>
#include<string.h>
using namespace std;
class extra
{
	public:	char str[20],substr[20];
			int start,length,len,endlen;
			void substring();
};
void extra::substring()
{
	int i,j;
	cout<<"Enter a string(don't use spaces): ";
	cin>>str;
	len=strlen(str);
	cout<<"\nEnter starting index: ";
	cin>>start;
	cout<<"\nEnter a length of the substring: ";
	cin>>endlen;
	i=start;
	if(start>=0 && start<len && endlen<len)
	{
		for(j=0;str[i]!='\0' && endlen>0;i++,j++)
		{
			substr[j]=str[i];
			endlen--;
		}
		substr[j]='\0';
		cout<<"\nSubstring: ";
		for(int k=0;substr[k]!='\0';k++)
			cout<<substr[k];
	}
	else
	{
		cout<<"\nPlease enter properly";
	}
}
int main()
{
	extra ob;
	ob.substring();
	return 0;
}
