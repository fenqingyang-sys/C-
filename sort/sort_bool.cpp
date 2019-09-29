# include <iostream>
using namespace std;
int main ()
{
	int a[5]={7,5,9,2,3};
	int t;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				
			}
		}
	}
	for(int j=0;j<5;j++)
	{
		cout<<a[j]<<"\t";
	}
	
}

