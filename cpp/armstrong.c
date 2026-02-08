#include<stdio.h>
#include<math.h>
int main()
{
int n,copy,digit=0,sum=0;
printf("enter n: ");
scanf("%d",&n);
copy=n;

while(copy>0)
{
    copy=copy/10;
    digit++;
}
copy=n;
while(copy>0)
{
    int rem= copy % 10;
    sum = sum + pow(rem,digit);
    copy = copy / 10;
    
    if (sum==n)
    {
        printf("armstrong number");

    }
    else
    {
      printf("not armstron number");

    }
}

return 0;


}