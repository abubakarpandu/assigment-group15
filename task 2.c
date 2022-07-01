#include<stdio.h>
void comparison(int*P,int*Q);	

int main()

{int i;
int P[10]={1,2,3,4,5,6,7,89,9,23};
int Q[10]={1,3,2,4,7,6,5,89,23,34};
comparison(&P[i],&Q[i]);
return 0;	

}
void comparison(int*P,int*Q){
	int i;
	for(i=0;i<10;i++){
		if(P[i]==Q[i])
		printf("%d compare and %d=true\n",P[i],Q[i]);
		else
		printf("%d compare and %d=false\n",P[i],Q[i]);
		
	}
}

