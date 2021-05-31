#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter=0;
    int number;
    int check;
    printf("\n\nEnter -1 to exit the loop\n\n ");
    do
    {

    check=0;
    printf("\n Enter a Number ");
    scanf("%d",&number);


    if(number==1)
    {
        continue;
    }
if (number>2)
    {

     int i=2;
     do
   {
       if (number%i==0)
            {
                check=1;
                break;
            }
            i++;


   }while(i<((number)/2));
    }

if (number==2)
{
    check=0;
}
   printf("%d",check);

    if (check==0)
    {
        counter++;
    }
    }while(number!=-1);


counter--;  // We should not increment counter for -1
printf("\nTotal Number of prime Numbers are %d ",counter);
    return 0;
}
