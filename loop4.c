#include <stdio.h>
#include<math.h>
int main() 
{



int n,digit,sum=0,avg=0,product=1,count=0,reverse=0;
scanf("%d" ,&n);
while(n!=0)
{
   digit=n%10;
   sum=sum+digit;
   count++;
   avg=sum/count;
   product=product*digit;
   reverse=reverse*10+digit;
    

   n=n/10;
   printf("%d\n",digit);
   

}
printf("all digit= %d ",reverse);
printf("sum=%d avg=%0.1d product=%d  ",sum,avg,product);


    return 0;
}
/*
 Question B80: WAP to input a number and find out the sum,average,product of its digits
. Question B81: WAP to find out the count of the digits of a given integer. 

*/