# include <iostream>
using namespace std;
//时间复杂度o(n^2) 
int main()
{
	int a[5]={4,9,3,2,7};
	int i ,j;
	for(j=0;j<4;j++)//循环n-1次 
	{
		int min=j;//将第一个数设置为最小 
		for(i=j+1;i<5;i++)
		{
			if(a[i]<a[min])//记录最小的位置 
			min=i;
		}
		if(j!=min)//如果设定的不是最小值交则换让你设定的那个数为最小 
		{
			int temp;
			temp=a[j];
			a[j]=a[min];
			a[min]=temp;
		}
	}
	for(int k=0;k<5;k++) 
	{
		cout<<a[k]<<"\t";
	}
}
