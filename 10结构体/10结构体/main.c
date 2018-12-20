//
//  main.c
//  10结构体
//
//  Created by FCNA01 on 2018/12/18.
//  Copyright © 2018年 FCNA01. All rights reserved.
//

#include <stdio.h>

struct MyPeople2{
    int uid;
    char *name;
    int age;
};


struct MyPeople{
    int uid;
    char *name;
    int age;
    struct MyPeople2 people2;
};





int main(int argc, const char * argv[]) {


    struct MyPeople people;
    people.uid = 1;
    people.name = "jiang hai";
    people.age = 22;
    printf("%i \n", people.uid);
    
    
    
    int *p_uid;
    p_uid = &(people.uid);
    printf("%i \n", *p_uid);
    
    return 0;
}
