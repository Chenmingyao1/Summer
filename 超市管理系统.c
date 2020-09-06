#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Good
{
    int group_number;
    char group_name[10];
    int number;
    char name[10];
    char place[10];
    int kind;//商品种类编号，用来分类的
    double cost;
    double price;
    int sale_number;
    struct Good *next;
};
int main()
{
    
    return 0;
}
