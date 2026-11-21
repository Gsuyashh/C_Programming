#include<stdio.h>
#include<stdlib.h>

int LastChar(char *str,char ch)
{
    int icount =-1;
    int iindex = -1;
    while(*str !='\0')
    {
        icount = icount + 1;
        if((*str==ch))
        {
            iindex = icount;
            
        }
        str++;
        
    }
    return iindex;
    
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

    iRet=LastChar(arr,chh);

    printf("Toatal character are : %d",iRet);


    return EXIT_SUCCESS;
}