#include<stdio.h>
int main()
{    unsigned  int seed=0,temp;
     int i,number1[99999] = {0};
    printf("Enter the seed:");
    scanf("%d",&seed);
    for(i=0;i<15;i++,temp=0)
{
   if(i==0)
    {temp=(seed%10000)*(seed%1000000);
    number1[0]=(temp/1000)%10000;}
   else
    {temp=(number1[i-1]%1000000)*(number1[i-1]%1000000);
        number1[i] = (temp/1000)%1000000;}

printf("%d\n",number1[i]);

   /*temp=seed/10;
   printf("%d",temp);
   return 0;*/


}
}
