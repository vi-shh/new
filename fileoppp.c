#include<stdio.h>
int main()
{
    FILE *src,*des;
    char ch;
    char srcf[30],desf[30];
    printf("Enter the source file name eith extentions:");
    scanf("%s",srcf);
    printf("Enter the destination file name eith extentions:");
    scanf("%s",desf);
    src = fopen(srcf,"r");
    des = fopen(desf,"w");
    if(!src)
        printf("sourcefile doesnot exist\n");
    else
    {
        while((ch=fgetc(src))!=EOF)
            fputc(ch,des);

        fclose(src);
        fclose(des);
        printf("file is copied");
        

    }
}