#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define true 1
#define false 0
bool CHKChar(char *str,char ch)
{
    while(*str !='\0')
    {
        if((*str==ch))
        {
            return true;
        }
        str++;
    }
}

int main()
{
    char arr[20];
    char chh = 0;
    bool bRet = false;

    printf("Enter String \n");
    scanf("%[^'\n']s",arr);

    printf("Enter Character \n");
    scanf(" %c",&chh);

    bRet=CHKChar(arr,chh);

    if(bRet == true)
    {
        printf("True \n");
    }
    else
    {
        printf("False \n");
    }
    return EXIT_SUCCESS;
}