#include <stdio.h>
#include<math.h>
int main() 
{
int a,b,sum=0;
scanf("%d %d",&a,&b);
for(int i=a+1;i<b;i++)
{
    printf("%d ",i);
    if((i%2==0||i%3==0)&&i%5!=0)
    {
        sum=sum+i;
        
    }
    
}
printf("%d\n",sum);



/*
WAP to input 2 numbers and find out the sum of 
all the even numbers which are not divisible by 5 but divisible 
by 3 and lies between the given two numbers. */













    return 0;
}