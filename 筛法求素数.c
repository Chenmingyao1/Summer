//让一个数依次对除了1和它本身之外的所有数进行取余，如果没有能整除（即余数为0），那么这个数就是素数
#include<stdio.h>
int main()//穷举法
{
    int n,i,j,f;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        f=0;
        for(j=2;j<i;j++)
        {
            if(!(i%j))
            {
                f++;
            }
        }
        if(f!=0)
        {
            printf("%d\n",i);
        }
    }
}
#include<stdio.h>
#include<math.h>
int main()//直接过滤掉偶数，对奇数采用穷举法
{
    int n,i,j,f;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(i==2)
        {
            printf("2\n");//2也是素数
        }
        if(i%2!=0)//即为奇数
        {
            f=0;
            for(j=2;j<i;j++)
            {
               if(i%j==0)
               {
                   f++;
               }
            }
            if(!f)//等同于f==0
            {
            printf("%d\n",i);
            }
            
        }
    }
}