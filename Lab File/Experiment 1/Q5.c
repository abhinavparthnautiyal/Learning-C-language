#include <stdio.h>
int main()
{
    int n,i,j,a[100],flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j] && i!=j)
            {
                flag=1;
                printf("%d %d\n",i,j);
            }
        }
    }
    if(flag==0)
        printf("No duplicates");
    return 0;
}