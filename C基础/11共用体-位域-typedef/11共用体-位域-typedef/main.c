//
//  main.c
//  11共用体-位域-typedef
//
//  Created by FCNA01 on 2018/12/18.
//  Copyright © 2018年 FCNA01. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {

    /*
     共用体
     
     1.共用体占用的内存应足够存储共用体中最大的成员
     2.当未超过20，size == 20
     3.当超过20，size == 实际大小size
     */
    union Data
    {
        int i;
        float f;
        char str[20];
    };
    union Data data;
    data.i = 12;
    data.f = 12.0;
    strcpy(data.str, "Jiang Hai");
    printf("%s \n", data.str);
    printf( "Memory size occupied by status1 : %lu\n", sizeof(data));
//    Memory size occupied by status1 : 20

    
    
    /*
     位域
     
     1.普通结构体的size = 所有数据size和
     2.位域作用对象一定是 unsigned int类型数据
     3.附带位域的结构体size = 所有未带位域数据size和 + 所有带位域数据size之和（每个size == 1）
     4.只有带位域数据的数据对象超过 4字节 * 8位 = 32位，才重新开辟32位内存
     */
    //简单结构体
    struct SAT1{
        unsigned int a;
        unsigned int b;
    }sat1;
    
    //附带位域结构体 unsigned int widthValidated : 1;
    //unsigned int是type
    //widthValidated是位域名称
    //1是宽度
    struct SAT2{
        unsigned int a1 : 1;
        unsigned int a2 : 1;
        unsigned int a3 : 1;
        unsigned int a4 : 1;
        unsigned int a5;
    }sat2;
    sat2.a1 = 1;
    sat2.a2 = 1;
    sat2.a3 = 1;
    sat2.a4 = 1;
    printf( "Memory size occupied by status1 : %lu\n", sizeof(sat1));
    printf( "Memory size occupied by status2 : %lu\n", sizeof(sat2));
//    Memory size occupied by status1 : 8
//    Memory size occupied by status2 : 8
    
    
    
    
    
    
    
    
    return 0;
}
