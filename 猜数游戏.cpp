6#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int main()
{
	starding:
	int magic;
	int guess;
	srand(time(NULL));
	magic=rand()%100+1;
	printf("���������µ�����:");
	scanf("%d",&guess);
	int i;
	for(i=1;guess!=magic;i++)
	{
		if(guess>magic)
		{
			printf("��������´�����");
		} else
		{
			printf("���������С����");
		} 
		printf("�����ٲ�һ�°�:");
		scanf("%d",&guess);
	}
	printf("̫��������¶����أ�����%d�Ρ�",i);
	printf("��ôС�ɰ��㻹��������𣿣�Y or N��\n");
	char reply;
	scanf(" %c",&reply);
	if(reply=='Y')
	   goto starding;
	else
	   printf("�����㲻���������Ǻðɣ��´μ���") ;
	return 0;
 } 
