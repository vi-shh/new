#include<stdio.h>
int main()
{
    FILE *src,*des;
    char ch;
    int re,flag=0;
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
        printf("file is copied\n");
        flag =1;
    }
    if(flag==1)
    {
        re = remove(srcf);
        if(re==0)
            printf("spurce file is deleted");
        else
            printf("file access issue");
    }
}