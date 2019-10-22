#include <iostream>
using namespace std;

void serial(int a[],int n)
{    
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
                int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	
}

int main()
{
	int a[5];
	for(int i=0;i<5;i++)
	{
		a[i]=5-i;
	}
	
	serial(a,5);
	return 0;
}