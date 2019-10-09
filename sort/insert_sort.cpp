# include <iostream>
using namespace std;
int main ()
{
    int a[5]={5,2,8,6,0};
    for(int i=1;i<5;i++)
    {
        int key=a[i];//待插入的数据
        int j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];//待插入数据比已经排序好的数据小，已经排序好的数据
            j--;        //往后移动一位，为找到合适的位置时便于待插入数据key的插入
        }
        /*if(i!=j)
        {
            a[j+1]=key;
           
        }*/
        a[j+1]=key;//这种比if更容易理解循环结束说明j<0，或者不满足条件也就是待插入数据比它前面的大可以直接插入在后面
    }
    for(int k=0;k<5;k++)
    {
        cout<<a[k]<<"\t";
    }
}