#include<stdio.h>
int main()
{    unsigned  int seed=0,temp;
     int i,number1[99999] = {0};
    printf("Enter the seed:");
    scanf("%d",&seed);
    for(i=0;i<20;i++,temp=0)
{
   if(i==0)
    {temp=(seed%10000)*(seed%10000);
    number1[0]=(temp/100)%10000;}
   else
    {temp=(number1[i-1]%10000)*(number1[i-1]%10000);
        number1[i] = (temp/100)%10000;}

printf("%d\n",number1[i]);

   /*temp=seed/10;
   printf("%d",temp);
   return 0;*/


}
}
