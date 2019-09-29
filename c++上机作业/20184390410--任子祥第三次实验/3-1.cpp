# include <iostream>
using namespace std;
# include <cmath>
int main ()
{
	int i,j,k,flag;
	i=2;
	while(i<=100)
	{
		flag=1;
		k=sqrt(i);
		j=2;
		while(j<=k)
		{
			if(i%j==0)
			{
				flag=0;
				break;
			}
			j++;
		}
		if(flag)
		cout<<i<<"\t";
		i++;
	}
}
