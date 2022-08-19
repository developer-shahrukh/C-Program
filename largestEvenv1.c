#include<stdio.h>
int main()
{
int x[10],y,largestEven;
for(y=0;y<=9;y++)
{
printf("Enter a number :");
scanf("%d",&x[y]);
}
for(y=0;y<=9;y++)
{
if(x[y]%2==0)
{
largestEven=x[y];
break;
}
}
largestEven=x[y];
y++;
for(y=0;y<=9;y++)
{
if(x[y]%2==0 && x[y]>largestEven)
{
largestEven=x[y];
}
}
printf("Largest even is %d\n",largestEven);
return 0;
}