#include<stdio.h>
void main()
{
    char *book[4]={"C Programming Language","Assembly Language","Java Language","Natural Language"};
    int n=4;
    int row;
    char *arrayPtr;
    for(row=0;row<n;row++)
        printf("%d:%s\n",row+1,book[row]);
    for(arrayPtr=book[0],row=0;row<n;arrayPtr=book[row])
    {
        printf("%d:%s\n",row+1,arrayPtr);
        row++;
    }
}
