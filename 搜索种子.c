#include<stdio.h>
int main()
{    unsigned  int seed=0,temp;
     int i,j,first,count1=0,count2=0,count3=0,number[5000][100] = {0},number1[100]={0},number2[100]={0},number3[100]={0};
//FILE *fp;
//fp=fopen("d:\\a.txt","w");
    for(j=0;j<5000;j++)
    {  if(j==0){printf("Enter the seed:");
       scanf("%d",&seed);
       first=seed;}
       else seed++;
        printf("The seed is :%d\n",seed);
        for(i=0;i<100;i++,temp=0)
{
   if(i==0)
    {temp=(seed%10000)*(seed%10000);
   // printf("temp is %d\n",temp);
    number[j][0]=(temp/100)%10000;}
   else
    {temp=(number[j][i-1]%10000)*(number[j][i-1]%10000);
        number[j][i] = (temp/100)%10000;}

//printf("%d\n",number[j][i]);

   /*temp=seed/10;
   printf("%d",temp);
   return 0;*/
}printf("\n");
    }
    for(j=0;j<5000;j++)
      {
        printf("The seed is :%d\n",first);
        //fprintf(fp,"The seed is %d\n",first);
        for(i=0;i<100;i++)
          {
        printf("%d\t",number[j][i]);
        if(number[j][i]==100)
        {
          number1[count1]=first;
          count1++;
            break;}
            if(number[j][i]==2500)
        {number2[count2]=first;
            count2++;
            break;}
            if(number[j][i]==7600)
        {
            number3[count3]=first;
            count3++;
            break;}
        //fprintf(fp,"%d\t",number[j][i]);
        }//fprintf(fp,"\n\n");
        first++;

      }
   printf("������100��������%d��\n",count1);
   for(i=0;i<count1;i++)
    printf("������Ϊ%d\n",number1[i]);
   printf("������2500��������%d��\n",count2);
    for(i=0;i<count2;i++)
    printf("������Ϊ%d\n",number2[i]);
   printf("������7600��������%d��\n",count3);
    for(i=0;i<count3;i++)
    printf("������Ϊ%d\n",number3[i]);
//fclose(fp);
return 0;
}
