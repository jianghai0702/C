//
//  main.c
//  10-string
//
//  Created by FCNA01 on 2018/12/21.
//  Copyright © 2018年 FCNA01. All rights reserved.
//

#include <stdio.h>
#include <string.h>


/**
 
 memchr(const void *str, int c, size_t n)               字符串在前size个字节中，字符char第一次出现的位置
 memcmp(const void *str1, const void *str2, size_t n)   str1和str2前n个字符比较
 memcpy(void *dest, const void *src, size_t n)          从src赋值n个字符到dest
 memmove(void *dest, const void *src, size_t n)    
 memset(void *str, int c, size_t n)                     将str的前n字符设置为char
 
 
 strcat(char *dest, const char *src)                   拼接
 strncat(char *dest, const char *src, size_t n)        拼接：将src拼接到dest后面，限制追加长度n
 strchr(const char *str, int c)                        分隔字符串：取字符‘c’后面的字符串
 
 strcmp(const char *str1, const char *str2)            比较
 strncmp(const char *str1, const char *str2, size_t n) 比较：比较前n位
 
 strcpy(char *dest, const char *src)                   复制
 strncpy(char *dest, const char *src, size_t n)        复制：src复制到dest，限制复制长度n
 
 strlen(const char *str)                               长度
 strtok(char *str, const char *delim)                  分隔字符串
 strstr(const char *haystack, const char *needle)      子字符串位置
 
 */



void strcat_demo(void);
void strncat_demo(void);
void strchr_demo(void);

void strcmp_demo(void);
void strncmp_demo(void);

void strcpy_demo(void);
void strncpy_demo(void);

void strtok_demo(void);
void strstr_demo(void);


int main(int argc, const char * argv[]) {
    strcat_demo();
    strncat_demo();
    strchr_demo();
    
    strcmp_demo();
    strncmp_demo();
    
    strcpy_demo();
    strncpy_demo();
    
    strtok_demo();
    strstr_demo();
    
    return 0;
}

//拼接：
void strcat_demo()
{
    char str1[50] = "jiang hai";
    
    char str2[50] = "jiang hai";
    
    strcat(str1, str2);
    
    printf("%s \n",str1);
}

//拼接：限制添加长度
void strncat_demo()
{
    char str1[50] = "123456789";
    
    char str2[50] = "123456789";
    
    //3字节
    strncat(str1, str2, 1);
    
    printf("%s \n",str1);
}




//分隔字符串：取前面(字符分隔)
void strtok_demo(void)
{
    char str1[50] = "123450000";
    
    strtok(str1, "3");
    
    printf("%s \n",str1);
}

//分隔字符串：取后面
void strchr_demo()
{
    char str1[50] = "123456789";
    
    char *str2 = strchr(str1, '3');
    
    printf("%s \n",str2);
}

//分隔字符串：取后面(字符串分隔)
void strstr_demo(void)
{
    char str1[50] = "123456789";
    
    char str2[50] = "34";
    
    char *ret = strstr(str1, str2);
    
    printf("== %s \n",ret);
}







//字符串比较
void strcmp_demo(void)
{
    char str1[50] = "123456789";
    
    char str2[50] = "123456789";
    
    int ret = strcmp(str1, str2);
    
    printf("%i \n",ret);
}
//字符串比较:比较前n位
void strncmp_demo(void)
{
    char str1[50] = "123450000";
    
    char str2[50] = "123456789";
    
    int ret = strncmp(str1, str2, 6);
    
    printf("%i \n",ret);
}

//复制
void strcpy_demo(void)
{
    char str1[50] = "";
    
    char str2[50] = "123456789";
    
    strcpy(str1, str2);
    
    printf("%s \n",str1);
}

//复制,限制个数
void strncpy_demo(void)
{
    char str1[50] = "";
    
    char str2[50] = "123456789";
    
    strncpy(str1, str2, 5);
    
    printf("%s \n",str1);
}













