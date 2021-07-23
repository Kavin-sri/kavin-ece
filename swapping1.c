#include<stdio.h>
int main()
{
     int x,y;

     printf("input numbers to be swapped");
     scanf("%d %d",&x,&y);
     //5 6

     x=x+y;//11
     y=x-y;//5
     x=x-y;//6
     printf("numbers swapped are  x=%d  y=%d ",x,y);
     return 0;

}
