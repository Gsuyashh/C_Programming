#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;
    if(iNo = -iNo)
    {
        iNo = -iNo;
    }
    if(iNo<=50)
    {
        printf("It is small number: \n");
    }
    else if((iNo>50) &&(iNo<=100))
    {
        printf("It is medium number : \n");
    }
    else
    {
        printf("It is large number : \n");
    }
    
}

int main()
{
    int iValue = 0;
    printf("Enter Number :");
    scanf("%d",&iValue);
    Display(iValue);

    return EXIT_SUCCESS;
}