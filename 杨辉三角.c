#include<stdio.h>
int main()
{
    int n;
    printf("������ڼ��У�\n");
    scanf("%d",&n);
    int a[n+1][n+1];
    for(int i=1;i<=n;i++)//��һ�к����һ�ж���1
    {
       a[i][i]=1;
       a[i][1]=1;//��������
    }
    for(int i=3;i<=n;i++)
    {
        for(int j=2;j<=i-1;j++)
        {
           a[i][j]=a[i-1][j]+a[i-1][j-1];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%d ",a[i][j]);
        }
    
    printf("\n");
    }
    
    return 0;

}