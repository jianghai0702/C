//
//  main.c
//  16内存管理
//
//  Created by FCNA01 on 2018/12/19.
//  Copyright © 2018年 FCNA01. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc, const char * argv[]) {

    
    
    /**
     void *calloc(int num, int size)
     在内存中动态地分配 num 个长度为 size 的连续空间,初始化为 0
     
     void free(void *address)
     释放 address 所指向的内存块,释放的是动态分配的内存空间。
     
     void *malloc(int num)
     在堆区分配一块指定大小的内存空间,不会被初始化
     
     void *realloc(void *address, int newsize)
     重新分配内存，把内存扩展到 newsize
     
     */
    
    
    
    //分配内存
    char *str;
    
    str = malloc(100 * sizeof(char));
    
    if (str == NULL) {
        
        perror("错误");
    }
    else{
        
        strcpy(str, "dqwuyrtdfwuykascghjxziuyqedfkasgjvxb");
    }
    
    printf("%s \n", str);
    
    printf("%lu \n",sizeof(str));
    
    
    
    
    //重新分配内存
    str = realloc(str, 100 * sizeof(char));
    
    if (str == NULL) {
        
        perror("错误");
    }
    else{
        
        strcat(str, "dilugfiydto84eqwygakdcsxz ");
    }
    
    printf("%s \n", str);
    
    printf("%lu \n",sizeof(str));
    
    
    //释放内存
    free(str);
    
    
    return 0;
}
