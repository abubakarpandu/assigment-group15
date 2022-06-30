#include<stdio.h>
void exchange(int *p,int *q);

int main()
{
int c,d;
printf("enter c and d\n");
scanf("%d%d",&c,&d);
exchange(&c,&d);
printf("c=%d and d=%d",c,d);
return 0;
}
void exchange(int *p,int *q){
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}

