#include<stdio.h>
#include<string.h>
#define MAX_BOOKS 50 

typedef struct {
    char name[50];
    char author[50];
    char ISBN[20];
    float price;
    int stock;
} Book;  

Book books[MAX_BOOKS];
int bookCount = 0;  

void addBook() {
    if (bookCount >= MAX_BOOKS) {
        printf("图书库已满！\n");
        return;
    }
    
    printf("请输入书名: ");
    scanf("%49s", books[bookCount].name);
    
    printf("请输入作者: ");
    scanf("%49s", books[bookCount].author);
    
    printf("请输入价格: ");
    scanf("%f", &books[bookCount].price);
    
    printf("请输入库存数量: ");
    scanf("%d", &books[bookCount].stock);
    
    bookCount++;
    printf("图书添加成功！\n");
}

Book* selectBook() {
    int index;
    printf("请输入书籍编号 (1-%d): ", bookCount);
    scanf_s("%d", &index);
    
    if (index < 1 || index > bookCount) {
        printf("选择无效! 有效范围: 1-%d\n", bookCount);
        return NULL;//返回空指针
    }
    
    return &books[index - 1];//返回有效指针
}
//取消全局指针，使用selectBook返回的局部指针，避免指针状态混乱和误用
void printBook() {
    Book* selectedBook = selectBook();
    if (selectedBook == NULL) {
        return;
    }
    
    printf("\n========== 图书信息 ==========\n");
    printf("书名: %s\n", selectedBook->name);
    printf("作者: %s\n", selectedBook->author);
    printf("ISBN: %s\n", selectedBook->ISBN);
    printf("价格: %.2f\n", selectedBook->price);
    printf("库存: %d\n", selectedBook->stock);
    printf("==============================\n");
}

void modifyPrice() {
    Book* selectedBook = selectBook();
    if (selectedBook == NULL) {
        return;
    }
    
    float newPrice;
    printf("当前价格: %.2f\n", selectedBook->price);
    printf("请输入修改后价格: ");
    scanf_s("%f", &newPrice);
    
    if (newPrice < 0) {
        printf("价格不能为负数！\n");
        return;
    }
    
    selectedBook->price = newPrice;
    printf("修改成功！新价格: %.2f\n", selectedBook->price);
}

void listAllBooks() {
    if (bookCount == 0) {
        printf("暂无图书信息。\n");
        return;
    }
    
    printf("\n========== 所有图书 ==========\n");
    for (int i = 0; i < bookCount; i++) {
        printf("%d. %s (作者: %s)\n", i + 1, books[i].name, books[i].author);
    }
    printf("==============================\n");
}

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    int choice;
    
    do {
        printf("\n========== 图书管理系统 ==========\n");
        printf("1. 添加图书\n");
        printf("2. 浏览所有图书列表\n");
        printf("3. 查看图书详细信息\n");
        printf("4. 修改价格\n");
        printf("0. 退出系统\n");
        printf("请选择功能: ");
        
        if (scanf_s("%d", &choice) != 1) {
            clearInputBuffer();
            printf("输入错误，请重新输入！\n");
            continue;
        }
        
        switch(choice) {
            case 1:
                addBook();
                break;
            case 2:
                listAllBooks();
                break;
            case 3:
                printBook();
                break;
            case 4:
                modifyPrice();
                break;
            case 0:
                printf("感谢使用图书管理系统！\n");
                break;
            default:
                printf("无效选择，请重新输入！\n");
                break;
        }
        
        clearInputBuffer();  // 清除输入缓冲区
        
    } while(choice != 0);
    
    return 0;
}
