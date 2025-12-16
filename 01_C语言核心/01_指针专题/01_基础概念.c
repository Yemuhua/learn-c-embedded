#include<stdio.h>

int main()
{
	int num = 123;
	float f = 3.14;
	char c = 'A';

	int *p_num = &num;	//&取地址运算符 *解引用运算符
	float* p_f = &f;
	char* p_c = &c;

	printf("num的值和地址：%d,%p\n", num, &num);
	printf("f的值和地址：%3.2f,%p\n",f,&f);
	printf("c的值和地址：%c,%p\n", c, &c);

	printf("三个指针存储的地址和自己的地址\n");
	printf("%p,%p\n",p_num,&p_num);
	printf("%p,%p\n", p_f, &p_f);
	printf("%p,%p\n", p_c, &p_c);

	int** pp_num = &p_num;
	printf("通过pp_num访问的值，pp_num指向的地址，其自己地址\n");
	printf("%d,%p,%p\n", **pp_num, pp_num, &pp_num);

	//二级指针指向的地址是一级指针的地址，通过二级指针访问的值是一级指针指向的值
	//NULL是空指针
	
	//经AI提示后，添加的内容

	//通过指针修改值

	printf("修改前num的值：%d\n", num);
	*p_num = 456;
	printf("修改后num的值：%d\n", num);

	getchar();




	
}