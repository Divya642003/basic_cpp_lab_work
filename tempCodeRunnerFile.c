#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=25;i++)
    {
        int series=0;
        series=1/i*i;
        printf("%d",series);
        printf("+");
    }
}