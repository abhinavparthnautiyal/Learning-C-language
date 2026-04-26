#include <stdio.h>
int main()
{
    int n,i,a[100],val;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&val);
    for(i=n-1;i>=0 && a[i]>val;i--)
        a[i+1]=a[i];
    a[i+1]=val;
    n++;
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}