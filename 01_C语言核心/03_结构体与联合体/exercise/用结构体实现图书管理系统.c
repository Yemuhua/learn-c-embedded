#include<stdio.h>
#include<string.h>
#define maxbooks 50

typedef struct{
    char name[50];
    char author[50];
    char ISBN[20];
    float price;
    int stock;
}book;

book books[maxbooks];
int bookcounts=0;
book *currentbook=NULL;

void addbook()
{
    if(0<=bookcounts&&bookcounts<=100)
        {
            printf("请输入添加图书信息\n");
            printf("name:\n");
            scanf_s("%49s",books[bookcounts].name,50);
            printf("author:\n");
            scanf_s("%49s",books[bookcounts].author,50);
            printf("ISBN:\n");
            scanf_s("%19s",books[bookcounts].ISBN,20);
            printf("price:\n");
            scanf_s("%f",&books[bookcounts].price);
            printf("stock:\n");
            scanf_s("%d",&books[bookcounts].stock);
            bookcounts++;
            return;
        }      
    else printf("库存已满！\n");
}

void selectbook()
{
    int i= 0;
    printf("请输入书籍编号\n");
    scanf_s("%d",&i);
    if(i>=1&&i<=100)
        {
            currentbook=&books[i-1];
        }
    else printf("选择无效!");
    return;
}

void printbook()
{
    selectbook();
    printf("name=%s\n",currentbook->name);
    printf("author=%s\n",currentbook->author);
    printf("ISBN=%s\n",currentbook->ISBN);
    printf("price=%.2f\n",currentbook->price);
    printf("stock=%d\n",currentbook->stock);
    currentbook=NULL;
    return;
}

void modprice()
{
    int jiage;
    selectbook();
    printf("请输入修改后价格:\n");
    scanf_s("%f",&jiage);
    currentbook->price=jiage;
    printf("修改成功\n");
    currentbook=NULL;
    return;
}

int main()
{
    int func;
    do{
        printf("\n==========图书管理系统==========\n");
        printf("使用以下功能需输入对应数字\n");
        printf("添加图书:1\n");
        printf("浏览图书信息:2\n");
        printf("修改价格:3\n");
        scanf_s("%d",&func);
        switch(func)
        {
            case 1:addbook();break;
            case 2:printbook();break;
            case 3:modprice();break;
            default:printf("无效选择\n");break;
        }
        }while(func!=0);
        return 0;
}