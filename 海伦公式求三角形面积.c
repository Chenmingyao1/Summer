#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,area,t;
    sacnf("%f%f%f",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a)
    {
        t=(a+b+c)/2;
        area=sqrt(t*(t-a)*(t-b)*(t-c));//海伦公式
        printf("%f\n",area);

    }
    else{
        printf("输入错误！\n");
    }
    return 0;
}