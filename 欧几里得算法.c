//又叫辗转相除法：计算两个正整数a,b的最大公约数
//算法描述：gcd(a,b)=gcd(b,a%b)
//直到左边的数变成非零数,因为对于一个非零数和0的最大公约数一定就是非零数本身
//本题：用欧几里得算法求最大公约数
#include<stdio.h>
int gcd(int a,int b);
int main(void)
{
    int x,y;
    printf("please put in x和y的值：\n");
    scanf("%d,%d",&x,&y);
    int gongyue=gcd(x,y);
    printf("%d",gongyue);
    return 0;
    
}

int gcd(int a,int b)//递归版
{
    if(b==0)
    return a;
    else return gcd(b,a%b);
}
int gcd(int a,int b)//非递归版
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
