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
    for(int i=0;i<strlen(s);i++)//s[i]表示里面的字符
    {
        c[s[i]]++;//用指针数字符串中每一个字符出现的次数
    }
    for(int j=0;j<128;j++)
    {
       ret+=c[j]-c[j]%2;//c[j]%2=1或0，奇偶回文字符串
    }
    return ret+(ret!=strlen(s));//若等于总字符长度，就加0，否则加1
}