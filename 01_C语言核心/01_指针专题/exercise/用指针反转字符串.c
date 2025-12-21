 #include<stdio.h>

int main()
{
    char str[]="hello";
    char *p=str;
    char *r=NULL;
    
    printf("Ô­×Ö·û´®:%s\n",str);
    printf("Ö¸ÕëpµÄ³õÊ¼Î»ÖÃ:%c\n",*(p+4));
    printf("µ¹ÖÃ×Ö·û´®:");
    
    // ÕÒµ½×Ö·û´®½áÎ²
    while(*p != '\0') p++;
    
    // ´ÓºóÍùÇ°
    for(r = p-1; r >= str; r--)
    {
        printf("%c", *r);
    }
    
    return 0;
}