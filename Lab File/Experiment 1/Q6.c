#include <stdio.h>
int main()
{
    int n,i,a[100],pos,val;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d%d",&pos,&val);
    for(i=n-1;i>=pos;i--)
        a[i+1]=a[i];
    a[pos]=val;
    n++;
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}