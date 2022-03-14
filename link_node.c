#include<stdio.h>
#include<stdlib.h>

struct list
{
	int data;
	struct list *node;
}*head;

void main()
{
	int a[3]={100,200,300};
	int i=0,j=0;
	struct list *p,*q,*r;
	for(i=0;i<3;i++)
	{
		if(head==NULL)
		{
			p=(struct list*)malloc(sizeof(struct list));
			if(p==NULL)
				exit(0);
			else
			{
				p->data=a[i];
				p->node=NULL;
				head=p;
			}
		}
		else
		{	
			q=(struct list*)malloc(sizeof(struct list));
			q->data=a[i];
			p->node=q;
			p=p->node;
		}
	}
	r=head;
	while(r!=NULL)
	{
		printf("%d\t",r->data);
		r=r->node;
	}
	free(head);
}

