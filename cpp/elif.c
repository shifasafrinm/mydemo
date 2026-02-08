#include <stdio.h>
int main()
{
     int mark;
     printf("enter the mark ");
     scanf("%d",&mark);
     if(mark>=50)
     printf("pass - your mark is %d",mark);
     else
     printf("fail - your mark is %d",mark);
     return 0;
}
