# include <iostream>
using namespace std;
//ʱ�临�Ӷ�o(n^2) 
int main()
{
	int a[5]={4,9,3,2,7};
	int i ,j;
	for(j=0;j<4;j++)//ѭ��n-1�� 
	{
		int min=j;//����һ��������Ϊ��С 
		for(i=j+1;i<5;i++)
		{
			if(a[i]<a[min])//��¼��С��λ�� 
			min=i;
		}
		if(j!=min)//����趨�Ĳ�����Сֵ���������趨���Ǹ���Ϊ��С 
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
