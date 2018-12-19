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

int main(int argc, const char * argv[]) {

    
    
#if 0
    
#pragma mark - 错误处理
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
    
#pragma mark - 程序退出状态
    
    /**
     
     EXIT_SUCCESS: 0
     EXIT_FAILURE: 1
     */
    int i = 0;
    
    if (i) {
        
        exit(EXIT_SUCCESS);
    }
    else{
        
        perror("错误");
        
        exit(EXIT_FAILURE);
    }
    
    
    
#endif
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
