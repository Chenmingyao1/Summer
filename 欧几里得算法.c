//�ֽ�շת���������������������a,b�����Լ��
//�㷨������gcd(a,b)=gcd(b,a%b)
//ֱ����ߵ�����ɷ�����,��Ϊ����һ����������0�����Լ��һ�����Ƿ���������
//���⣺��ŷ������㷨�����Լ��
#include<stdio.h>
int gcd(int a,int b);
int main(void)
{
    int x,y;
    printf("please put in x��y��ֵ��\n");
    scanf("%d,%d",&x,&y);
    int gongyue=gcd(x,y);
    printf("%d",gongyue);
    return 0;
    
}

int gcd(int a,int b)//�ݹ��
{
    if(b==0)
    return a;
    else return gcd(b,a%b);
}
int gcd(int a,int b)//�ǵݹ��
{
    if(!a)
    return b;
    int c;
    while(b)
    {
        c=b;
        b=a%b;
        a=c;
    }
    return a;
}
