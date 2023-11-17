#include<stdio.h>
int main()
{
    int tm,h=0,m;
    scanf("%d",&tm);
    while(tm>60)
    {
        h=h+1;
        tm=tm-60;
    }
    m=tm;
    printf("%d Hour(s) %d Minute(s)",h,m);
}