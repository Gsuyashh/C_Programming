#include<stdio.h>
#include<stdlib.h>

int FirstChar(char *str,char ch)
{
    int icount =-1;
    while(*str !='\0')
    {
        icount = icount + 1;
        if((*str==ch))
        {
            return icount;
            break;
        }
        str++;
    }
    return -1;
    
}

int main()
{
    char arr[20];
    char chh = 0;
    int iRet = 0;

    printf("Enter String \n");
    scanf("%[^'\n']s",arr);

    printf("Enter Character \n");
    scanf(" %c",&chh);

    iRet=FirstChar(arr,chh);

    printf("Toatal character are : %d",iRet);


    return EXIT_SUCCESS;
}