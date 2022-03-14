#include<stdio.h>
#include<stdlib.h>

struct list
{
	char data;
	struct list *node;
}*head;

void main()
{
	char a[5]={'a','e','i','o','u'};
	int i=0,j=0;
	struct list *p,*q,*r,*c;
	for(i=0;i<5;i++)
	{
		if(head==NULL)
		{
			p=(struct list*)malloc(sizeof(struct list));
			c=p;
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
			q=(struct list*)malloc(sizeof(struct list));//dynamic memory allocation
			q->data=a[i];
			p->node=q;
			p=p->node;
		}
	}
	p->node=c;//assigning the last node to first node address for circular link list
//	printf("head = %d\n",&head);//printing the address of head
//	printf("head* = %d\n",*head);//printing the value containing by head
//	printf("&p = %d\n",&p);//printing the address of last node
//	printf("*p = %d\n",*p);//printing the value of p
//	printf("&c = %d\n",&c);//printing the addrecc of first memory block
	r=head;//assign the head address to r
	while(r!=p)
	{
		printf("%c\t",r->data);//printing the data
//		printf("&r->data = %d\n",&r->data);//data address
//		printf("&r_node = %d\n",&r->node);// node it self address
//		printf("r_node = %d\n",r->node);//node containing the address
		r=r->node;//increment node
	}
//	printf("&r_node = %d\n",&r->node);
//        printf("r_node = %d\n",r->node);////last node address == first node address
	free(head);
}

