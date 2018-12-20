//
//  main.c
//  07数组
//
//  Created by FCNA01 on 2018/12/18.
//  Copyright © 2018年 FCNA01. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    
    
    /*
     数组
     
     */
//    int arr[5] = {1,2,3,4,5};
//
//    for (int i = 0; i < 5; i ++) {
//
//        printf("%i \n",arr[i]);
//    }
    
    
    
    /*
     多维数组
     
     */
    
//    int b[3][3] =
//    {
//        {0,1,2},
//        {3,4,5},
//        {6,7,8}
//    };
//
//    for (int i = 0; i < 3; i ++) {
//
//        for (int j = 0; j < 3; j ++) {
//
//            printf("%i \n",b[i][j]);
//        }
//    }
    
    
    
    
    /*
     数组指针
     */
    int arr[5] = {1,2,3,4,5};
    
    int *p;
    
    p = arr;
    
    
//    printf("%.0f", arr[0]);
    
    //*p + 0: 含义为：arr数组起始地址 + arr数组size + 0 的地址
//    printf("%.0f", *p + 2 );
    
//    printf("%.0f", *(p + 2));
    
    printf("%i \n", *arr + 0);
    printf("%i \n", *arr + 1);
    printf("%i \n", *arr + 2);
    printf("%i \n", *arr + 3);
    printf("%i \n", *arr + 4);
    
    
    printf("%i \n", *(arr + 0) );
    printf("%i \n", *(arr + 1) );
    printf("%i \n", *(arr + 2) );
    printf("%i \n", *(arr + 3) );
    printf("%i \n", *(arr + 4) );
    
    
    
    
    /*
     取值
     */
//    for (int i = 0; i < 5; i ++) {
//
//        printf("%i \n", *(p + i));
//    }
    
    
    return 0;
}
