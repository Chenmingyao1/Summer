//��һ�������ζԳ���1��������֮�������������ȡ�࣬���û����������������Ϊ0������ô�������������
#include<stdio.h>
int main()//��ٷ�
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
int main()//ֱ�ӹ��˵�ż����������������ٷ�
{
    int n,i,j,f;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(i==2)
        {
            printf("2\n");//2Ҳ������
        }
        if(i%2!=0)//��Ϊ����
        {
            f=0;
            for(j=2;j<i;j++)
            {
               if(i%j==0)
               {
                   f++;
               }
            }
            if(!f)//��ͬ��f==0
            {
            printf("%d\n",i);
            }
            
        }
    }
}