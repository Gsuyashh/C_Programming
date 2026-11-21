#include<stdio.h>
#include<stdlib.h>

int CountChar(char *str,char ch)
{
    int icount =0;
    while(*str !='\0')
    {
        if((*str==ch))
        {
            
            icount = icount+1;

        }
        str++;
    }
    return icount;
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

    iRet=CountChar(arr,chh);

    printf("Toatal character are : %d",iRet);


    return EXIT_SUCCESS;
}