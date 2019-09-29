# include <iostream>
using namespace std;
int main()
{
    int a[5]={4,8,3,1,7};
    for(int i=1;i<5;i++)
    {
        int key=a[i];
        int j=i-1;
        while(j>=0 && key<a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    for(int j=0;j<5;j++)
    {
        cout<<a[j]<<"\t";

    }
    return 0;
}
