#include<stdio.h>
void exchange(int *p,int *q);

int main(){
int a,b;
printf("enter a and b\n");
scanf("%d%d",&a,&b);
exchange(&a,&b);
printf("a=%d and b=%d",a,b);
return 0;
}
void exchange(int *p,int *q){
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}

