#include<stdio.h>
void printFibonacci(int n)
{
static int n1=0,n2=1,n3; if(n>0)
{
n3 = n1 + n2; n1 = n2;
n2 = n3; printf("%d ",n3);
printFibonacci(n-1);
}

//add main
