#include <stdio.h>
int main()
{
    int n,i,a[100],key,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("%d",i);
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("Not found");
    return 0;
}