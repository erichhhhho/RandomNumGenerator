#include<stdlib.h>
#include<stdio.h>
#define a 22695477
#define c 1
#define m 2^32
int main()
{
int number[99999] = {0};
int number1[99999] = {0};
int i;
unsigned int seed=0;
//scanf("%d",&seed);/*�ֶ���������*/
seed=time(NULL);
srand(seed);
number1[0]=(a*seed+c)%m;
printf("��ǰ����Ϊ��%d\n",seed);
printf("rand()���ɵ�10���������\n");
for(i = 0; i < 10; i++)
{

number[i] = rand() % 100;/*����100���ڵ��������*/
printf("%d\n",number[i]);

}
printf("\n");
printf("��������ͬ���㷨���ɵ�10���������\n");
for(i=0;i<10;i++)
{
   if(i==0)
    number1[0]=(a*seed+c)%m;
   else number1[i] = (a*number1[i-1]+c)%m;
printf("%d\n",number[i]);


}
printf("\n");

return 0;
}
