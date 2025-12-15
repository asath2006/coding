#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int compare( const void *a,const void *b)
{
    char ab[20];
    char ba[20];
    sprintf(ab,"%d%d",*(int*)a,*(int*)b);
     sprintf(ba,"%d%d",*(int*)b,*(int*)a);

     return strcmp(ba,ab);
}
int main()
{
    int n;
    printf("Enter the size:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    qsort(a,n,sizeof(int),compare);

    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;

}