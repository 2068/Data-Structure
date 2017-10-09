#include<stdio.h>
int Sum(int m,int n)
{
    return m+n;
}
void main()
{
    int a,b;
    int (*fun)(int ,int);
    scanf("%d%d",&a,&b);
    printf("%d+%d=%d\n",a,b,Sum(a,b));
    fun=Sum;
    printf("%d+%d=%d\n",a,b,(*fun)(a,b));
}
