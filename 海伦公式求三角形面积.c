#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,area,t;
    sacnf("%f%f%f",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a)
    {
        t=(a+b+c)/2;
        area=sqrt(t*(t-a)*(t-b)*(t-c));//���׹�ʽ
        printf("%f\n",area);

    }
    else{
        printf("�������\n");
    }
    return 0;
}