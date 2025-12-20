#include<stdio.h>
 char *fruits[]={"apple","banana","grape","pear","peach","orange",NULL};//用NULL标记结尾

 int main()
 {
    for(int  i=0;fruits[i]!=NULL;i++)
    {
        printf("%s\n",fruits[i]);
    }
 
printf("%c\n",fruits[0][0]);
return 0;

}
