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
	printf("请输入您猜的数字:");
	scanf("%d",&guess);
	int i;
	for(i=1;guess!=magic;i++)
	{
		if(guess>magic)
		{
			printf("笨蛋，你猜大啦！");
		} else
		{
			printf("笨蛋，你猜小啦！");
		} 
		printf("试着再猜一猜吧:");
		scanf("%d",&guess);
	}
	printf("太好啦，你猜对了呢！猜了%d次。",i);
	printf("那么小可爱你还想继续猜吗？（Y or N）\n");
	char reply;
	scanf(" %c",&reply);
	if(reply=='Y')
	   goto starding;
	else
	   printf("看来你不想玩啦，那好吧，下次见。") ;
	return 0;
 } 
