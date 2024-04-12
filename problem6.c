#include<stdio.h>
void main()
{
    int arr[6]={2,5,3,6,1,8};
    int count=0;
    int x=10;
    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<6;j++)
        {
            for(int k=j+1;k<6;k++)
            {
                if((arr[i]+arr[j]+arr[k])==x)
                {
                    count=count+1;
                    printf("%d,%d,%d\n",arr[i],arr[j],arr[k]);
                }
            }
        }
    }
    printf("%d",count);
}