#include <stdio.h>
int main()
{
    int n,i,a[100],min,pos=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            pos=i;
        }
    }
    printf("%d",pos);
    return 0;
}