//
//  main.c
//  14错误处理
//
//  Created by FCNA01 on 2018/12/19.
//  Copyright © 2018年 FCNA01. All rights reserved.
//

#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>



int main(int argc, const char * argv[]) {
    
    
    
#if 0
    
#pragma mark - 错误编号errno
    /**
     错误处理
     
     
     errno       错误代码【全局变量】
     perror()    打印：‘自定义字符串’+‘:’+'空格'+errno + '\n'
     strerror()
     stderr      您应该使用 stderr 文件流来输出所有的错误。
     */
    FILE * pf;
    pf = fopen ("unexist.txt", "rb");
    if (pf == NULL)
    {
        //您应该使用 stderr 文件流来输出所有的错误。
        fprintf(stderr, "错误号: %d\n", errno);
        
        
        perror("错误");
        
        //您应该使用 stderr 文件流来输出所有的错误。
        fprintf(stderr, "错误: %s\n", strerror(errno));
    }
    else
    {
        fclose (pf);
    }
    
#endif
    
    
    
    
    
    
    
    
#if 1
    
#pragma mark - EDOM
    
    /**
     
     在输入参数超出数学函数定义的域时发生，errno 被设置为 EDOM。
     */
    
    
    int num[3] = {1,2,3};
    
    int a = num[7];

    if (errno == EDOM)
    {
        printf("参数无效");
    }
    else
    {
        printf("参数有效");
    }
    
    
    
    
    
    double val;
    errno = 0;
    val = sqrt(-10);
    if(errno == EDOM)
    {
        printf("Invalid value\n");
    }
    else
    {
        printf("Valid value\n");
    }
    
#endif
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
