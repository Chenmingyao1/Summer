#include<stdio.h>
#include<string.h>
int longestPalindrome(char *s);
int main()
{
    char a[100];
    int i;
    gets(a);
    printf("%d",longestPalindrome(a));
}
int longestPalindrome(char*s)
{
    int c[128]={0},ret=0;
    for(int i=0;i<strlen(s);i++)//s[i]��ʾ������ַ�
    {
        c[s[i]]++;//��ָ�����ַ�����ÿһ���ַ����ֵĴ���
    }
    for(int j=0;j<128;j++)
    {
       ret+=c[j]-c[j]%2;//c[j]%2=1��0����ż�����ַ���
    }
    return ret+(ret!=strlen(s));//���������ַ����ȣ��ͼ�0�������1
}