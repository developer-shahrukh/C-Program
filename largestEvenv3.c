#include<stdio.h>
#include<stdlib.h>
void findLargestEven(int *x,int size)
{
int largestEven,y;
for(y=0;y<size;y++)
{			
if(x[y]%2==0)
{
largestEven=x[y];
break;
}
}
if(y==size)
{
printf("All are odd number largest even cannot find\n");
return;
}
else
{
largestEven=x[y];
y++;
for(y=0;y<size;y++)
{
if(x[y]%2==0 && x[y]>largestEven)
{
largestEven=x[y];
}
}
printf("Largest even is %d\n",largestEven);
}
}
int main()
{
int *x,y,req;
printf("Enter a requirement :");
scanf("%d",&req);
if(req<=0)
{
printf("Invalid requirement\n");
return 0;
}
x=(int *)malloc(sizeof(int)*req);
if(x==NULL)
{
printf("Unable to allocate memory for numbers %d\n",req);
return 0;
}
for(y=0;y<req;y++)
{
printf("Enter a number :");
scanf("%d",&x[y]);
}
findLargestEven(x,req);
free(x);
return 0;
}