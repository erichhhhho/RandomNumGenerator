#define m 4
#include <math.h>
#include<stdio.h>
int main()
{    unsigned  int seed=0,temp;
     int i,j,first,number1[5000][100] = {0};
FILE *fp;
fp=fopen("d:\\a.txt","w");
    for(j=0;j<5000;j++)
    {  if(j==0){printf("Enter the seed:");
       scanf("%d",&seed);
       first=seed;}
       else seed++;
        printf("The seed is :%d\n",seed);
        for(i=0;i<100;i++,temp=0)
{
   if(i==0)
    {temp=pow(seed%(int)(pow(10,m)),2);
   // printf("temp is %d\n",temp);
    number1[j][0]=(temp/pow(10,m/2))%(int)pow(10,m);}
   else
    {temp=(number1[j][i-1]%(int)pow(10,m))*(number1[j][i-1]%(int)pow(10,m));
        number1[j][i] = (temp/pow(10,m/2))%(int)pow(10,m);}

//printf("%d\n",number1[j][i]);

   /*temp=seed/10;
   printf("%d",temp);
   return 0;*/
}printf("\n");
    }
    for(j=0;j<5000;j++)
      {
        printf("The seed is :%d\n",first);
        fprintf(fp,"The seed is %d\n",first);
        for(i=0;i<100;i++)
          {
        printf("%d\t",number1[j][i]);
        fprintf(fp,"%d\t",number1[j][i]);
        }fprintf(fp,"\n\n");
        first++;

      }

fclose(fp);
return 0;
}
