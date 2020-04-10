#include<stdio.h>;
#include<string.h>;
#include<stdlib.h>;
#define N 100 //图书容纳量为100 

struct BOOK //定义结构体 
{
	char BookName[20];
	char Author[20];
	int PerPrice;
};
struct BOOK books[N];
struct BOOK book;

void return_confirm();
void InputBook();
int Show();
void Sort();
void BookName_up();
void BookName_down();
void Author_up();
void Author_down();
void PerPrice_up();
void PerPrice_down();

int main() //主菜单 
{
	printf("\t\t\t************欢迎使用图书管理系统************\n\n");
	printf("\t\t\t******************操作选单******************\n");
	printf("\t\t\t*************请用数字键选择操作*************\n\n");
	printf("\t\t\t1 录入图书信息\t\t\t2 显示图书信息\n");
	printf("\t\t\t3 分类排序图书\t\t\t4 退出图书系统\n");
	printf("请按数字键：\n");
	switch(getchar())
{
	case '1' : InputBook();	    break;
	case '2' : Show();			break;
	case '3' : Sort();			break;
	case '4' : exit(0);
}
	system("cls");
	return 0;
} 

void return_confirm() //返回主菜单 
{
	printf("\n按任意键返回主菜单...\n");
	getchar();
	getchar();
	system("cls");
	main();
}

void InputBook() //录入图书信息 
{
	int n;
	int flag = 1;
	system("cls");
	for(n == 0; flag == 1 && n < 100; n++)
	{
	printf("录入图书信息\n");
	printf("书名：");
	scanf("%s", books[n].BookName); 
	printf("作者：");
	scanf("%s", books[n].Author);
	printf("单价：");
	scanf("%d", &books[n].PerPrice);
	printf("成功录入图书信息.\n");
	printf("是否继续录入图书信息？(继续请按1退出请按0):");
	scanf("%d", &flag); 
	}
	return_confirm();
}

int Show() //显示图书信息 
{
	int n, i = 1;
	system("cls");
	for(n = 0; n < N; n++)
	{
		if(books[n].PerPrice != 0)
		{
			printf("书名：%s\t", books[n].BookName);
			printf("作者：%s\t", books[n].Author);
			printf("单价：%d\n", books[n].PerPrice);
			i = 0;
		}
	}
	if(i == 1)
		printf("\n没有找到相关记录.\n");
	return_confirm();
}


void Sort() //对图书进行分类排序 
{
	system("cls");
	printf("\t\t\t******************分类排序********************\n");
	printf("\t\t\t******************操作选单********************\n");
	printf("\t\t\t*************请用数字键选择操作***************\n\n");
	printf("\t\t\t1 按照书名升序\t\t\t2 按照书名降序\n");
	printf("\t\t\t3 按照作者升序\t\t\t4 按照作者降序\n");	
	printf("\t\t\t5 按照单价升序\t\t\t6 按照单价降序\n");
	printf("\t\t\t7 返回主菜单\n");
	printf("请按数字键：\n");
	getchar();
	switch(getchar())
{
	case '1' : BookName_up();	 	    break;
	case '2' : BookName_down();		break;
	case '3' : Author_up();			break;
	case '4' : Author_down();		break;
	case '5' : PerPrice_up();	    break;
	case '6' : PerPrice_down();		break;
	case '7' : main();
}
}

void BookName_up() //按照书名升序 
{   
	int i, j;
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < N-i-1; j++)
		{
			if(strcmp(books[j].BookName,books[j+1].BookName) > 0)
			{
				book = books[j+1];
				books[j+1] = books[j];
				books[j] = book;
			}
		}
	}
	Show();
} 

void BookName_down() //按照书名降序 
{
	int i, j;
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < N-i-1; j++)
		{
			if(strcmp(books[j].BookName,books[j+1].BookName) < 0)
			{
				book = books[j+1];
				books[j+1] = books[j];
				books[j] = book;
			}
		}
	}
	Show();
} 

void Author_up() //按照作者升序 
{
	int i, j;
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < N-i-1; j++)
		{
			if(strcmp(books[j].Author,books[j+1].Author) > 0)
			{
				book = books[j+1];
				books[j+1] = books[j];
				books[j] = book;
			}
		}
	}
	Show();
} 

void Author_down() //按照作者降序 
{
	int i, j;
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < N-i-1; j++)
		{
			if(strcmp(books[j].Author,books[j+1].Author) < 0)
			{
				book = books[j+1];
				books[j+1] = books[j];
				books[j] = book;
			}
		}
	}
	Show();
} 

void PerPrice_up() //按照单价升序 
{
	int i, j;
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < N-i-1; j++)
		{
			if(books[j].PerPrice > books[j+1].PerPrice)
			{
				book = books[j+1];
				books[j+1] = books[j];
				books[j] = book;
			}
		}
	}
	Show();
} 

void PerPrice_down() //按照单价降序 
{
	int i, j;
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < N-i-1; j++)
		{
			if(books[j].PerPrice < books[j+1].PerPrice)
			{
				book = books[j+1];
				books[j+1] = books[j];
				books[j] = book;
			}
		}
	}
	Show();
} 
