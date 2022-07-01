/* A program to Compute Statistics for a set of numbers
(average, maximum, minimum and Standard deviation)
*/
#include<stdio.h>
#include<math.h>
int main()
{
//variable declaration
int i,n;
int x[50]={3,1,4,6,21,5,76,43,9,87,4,56,23,76,53,13,25,64,69,85},max,min,sum=0,sum1=0;
float average,SD;
printf("Enter number of numbers to process:\n");
scanf("%d",&n);

//Displaying numbers entered by the User
printf("Numbers entered by the User are:\n");
for(i=0;i<n;i++){
printf("%4d",x[i]);
}
//computing Average value
for(i=0;i<n;i++)
{
sum=sum+x[i];
}
average=sum/n;
//computing maximum number
max=min=x[0];
for(i=0;i<n;i++)
{
if(x[i]>max){
max=x[i];}
}
//computing minimum number
for(i=0;i<n;i++)
{
if(x[i]<min){
min=x[i];} 
}
//For computing Standard deviation
for(i=0;i<n;i++){
sum1=sum1+pow((x[i]-average),2);
}
SD=sqrt(sum1/n);
//Printing the Output 
printf("\nStatistics Computed are:\n");
printf("Average=%f\n", average);
printf("Maximum number=%d\n",max);
printf("Minimum number=%d\n",min);
printf("Standard deviation=%f",SD);
return 0;
}

            


