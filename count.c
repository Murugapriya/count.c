#include<stdio.h>
int main()
{
int n;
int count;
    printf("Enter the integer");
    scanf("%d",&n);
while(n!=0)
{
n/=10;
count++;
}
printf("Number of digits:%d",count);
return 0;
}            
