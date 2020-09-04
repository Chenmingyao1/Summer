//如果a和b除以一个m余数相同，则称a与b同余（ab均为正数）
//a,b,q1,q2,r,m;//m为除数，q1q2为商，r为余数
// a=q1*m+r,b=q2*m+r;
//本题题目：除以3余1，除以5余2，除以7余3，求1000内所有解
#include<stdio.h>
int main()//不用函数
{
    int i,count=0;
    for(i=1;i<=1000;i++)
    {
        if(i%3==1&&i%5==2&&i%7==3)
        {
            printf("%5d",i);
            count++;//结果每5个一排
            if(count%5==0)printf("\n");
        }
    }
    return 0;
}
