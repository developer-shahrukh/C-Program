#include<stdio.h>
#include<stdlib.h>
int main()
{
int *x,y,largestEven,req;
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
for(y=0;y<req;y++)
{
if(x[y]%2==0)
{
largestEven=x[y];
break;
}
}
if(y==req)
{
printf("All are odd number largest even cannot find\n");
return 0;
}
else
{
largestEven=x[y];
y++;
for(y=0;y<req;y++)
{
if(x[y]%2==0 && x[y]>largestEven)
{
largestEven=x[y];
}
}
printf("Largest even is %d\n",largestEven);
}
free(x);
return 0;
}