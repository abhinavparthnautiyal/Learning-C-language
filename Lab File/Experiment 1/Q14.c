#include <stdio.h>
int main()
{
    int n,a[100],i,key,low,high,mid,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            printf("%d",mid);
            flag=1;
            break;
        }
        else if(a[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }
    if(flag==0)
        printf("Not found");
    return 0;
}