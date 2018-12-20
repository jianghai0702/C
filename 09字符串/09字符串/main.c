//
//  main.c
//  09字符串
//
//  Created by FCNA01 on 2018/12/18.
//  Copyright © 2018年 FCNA01. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {

    
    //创建
    char str1[20] = {'H','e','l','l','o'};
    char str2[20] = {'W','o','r','l','d'};
    
    
    
    //连接字符串
    strcat(str1,str2);
    printf("%s \n",str1);
    

    //字符串长度
    unsigned long size = strlen(str1);
    printf("%lu \n",size);
    
    
    //字符串比较
    //如果 s1 和 s2 是相同的，则返回 0；如果 s1<s2 则返回小于 0；如果 s1>s2 则返回大于 0。
    int cmp = strcmp(str1, str2);
    printf("%i \n",cmp);
    
    
    
    //截取‘W’第一次出现的后部分的字符串
    char *chr = strchr(str1, 'W');
    printf("%s \n",chr);
    //World
    
    
    //截取‘or’第一次出现的后部分的字符串
    char *str11 = "World";
    char *str22 = "or";
    char *str33 = strstr(str11, str22);
    printf("%s \n",str33);
    //orld
    
    
    
    return 0;
}
