#include<stdio.h>

void main()
{
	int a[5]={100,200,300,400,500};
	int i=0;
	for(i=0;i<5;i++)
	printf("index no= %d data= %d address=%p\n",i,a[i],&a[i]);
}
