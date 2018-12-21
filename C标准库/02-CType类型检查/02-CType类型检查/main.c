//
//  main.c
//  02-CType类型检查
//
//  Created by FCNA01 on 2018/12/21.
//  Copyright © 2018年 FCNA01. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>

int main(int argc, const char * argv[]) {

    /**
     CType类型检查
     
     
     int isalnum(int c)  是字母和数字
     int isalpha(int c)  是字母
     int iscntrl(int c)  是控制字符
     int isdigit(int c)  是十进制数字
     int isgraph(int c)  有图形表示法
     int islower(int c)  是小写字母
     int isprint(int c)  是可打印的
     int ispunct(int c)  是标点符号
     int isspace(int c)  是空白字符
     int isupper(int c)  是大写字母
     int isxdigit(int c) 是十六进制数字
     */
    
    
    /*
     1.[字符]是字母和数字,返回非0
     2.[字符]非字母和数字，返回0
     */
    int a = '2';
    
    int b = 'a';
    
    if (isalnum(a) == 0) {
        printf("非字母和数字 \n");
    }
    else{
        printf("是字母和数字 \n");
    }
    
    
    
    
    return 0;
}
