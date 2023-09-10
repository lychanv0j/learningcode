#include<stdio.h>
// function test
int check(int x, int y)
{
	if(x==y)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void test(int x, int y)
{
	if(check(x,y)== 1)
	{
		printf("dcmm\n");
	}
	else
	{
		printf("ERROL\n");
	}
}
void number(int a[], int b, int c)
{
	printf("nhap value b:");
	scanf("%d",&b);
	int d = 2345;
	for(int i = 0; i < b; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("------------\n");
	for(int i = 0; i < b; i++)
	{
		if(d==c)
		printf("%d",a[i]);
	}
}
int main()
{
	int a[100], b, c, x, y;
	printf("nhap :");
	scanf("%d",&x);
	printf("nhap :");
	scanf("%d",&y);
	test(x,y);
	printf("\nnhap password:");
	scanf("%d",&c);
	printf("------------\n");
	number(a,b,c);
	//tyuii
}
