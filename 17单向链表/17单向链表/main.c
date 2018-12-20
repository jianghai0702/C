//
//  main.c
//  17单向链表
//
//  Created by FCNA01 on 2018/12/20.
//  Copyright © 2018年 FCNA01. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN       sizeof(struct People)
#define FILEPATH  "/Users/FCNA01/Documents/C/17单向链表/17单向链表/people.txt"

struct People{
    
    char name[255];
    
    struct People *next;
};

//节点总数
int nodeCount;







#pragma mark - create

//创建首节点
struct People *
createHead(struct People *pHead, char *name)
{
    struct People *p = (struct People *)malloc(LEN);
    
    if (p == NULL) {
        
        pHead = NULL;
    }
    else{
        
        strcpy(p->name, name);
        
        p->next = NULL;
        
        pHead = p;
    }
    
    return pHead;
}


//插入节点
struct People *
insertNode(struct People *pHead, char *name)
{
    //如果pHead == NULL，创建首节点
    if (pHead == NULL) {
        
        pHead = createHead(pHead, name);
    }
    
    //最后一个节点
    struct People *pLast = pHead;
    
    while (pLast->next != NULL) {
        
        pLast = pLast->next;
    }
    
    //新节点
    struct People *pNew = (struct People *)malloc(LEN);
    
    if (pNew != NULL) {
        
        strcpy(pNew->name, name);
        
        pNew->next = NULL;
        
        pLast->next = pNew;
        
    }
    
    return pHead;
}


//删除节点
struct People *
deleteNode(struct People *pHead, int index)
{
    //如果pHead == NULL，创建首节点
    if (pHead == NULL) {

        return NULL;
    }
    
    //前一个节点
    struct People *pPre = NULL;
    
    //当前节点（待删除节点）
    struct People *pCur = NULL;
    
    pPre = pHead;

    pCur = pHead;
    
    if (index == 0) {
        
        pCur = pHead;
        
        pHead = pHead->next;
        
        free(pCur);
    }
    else{
        
        int i = 0;
        
        while (i < index) {
            
            pPre = pCur;
            
            pCur = pCur->next;
            
            i ++;
        }
        
        pPre->next = pCur->next;
        
        free(pCur);
    }
    
    return pHead;
}


//显示
void
showList(struct People *pHead)
{
    struct People *p;
    
    p = pHead;
    
    while (p != NULL) {
        
        printf("%s \n", p->name);
        
        p = p->next;
    }
}


//保存
void
saveList(struct People *pHead)
{
    //追加写入模式打开
    FILE *f = fopen(FILEPATH, "a+");
    
    if (f == NULL) {
        
        printf("文件打开失败！\n");
        
//        perror("错误：");
    }
    else{
        
        struct People *pTemp = pHead;
        
        while (pTemp != NULL) {
        
            fputs(pTemp->name, f);
            
            fputs("\n", f);
            
            pTemp = pTemp->next;
        }
    }
    
    fclose(f);
}






int main(int argc, const char * argv[]) {

    struct People *pHead = NULL;
    

    //create
//    char name[255];
//    printf("输入NAME: \n");
//    scanf("%s",name);
//    printf("%s \n",name);
    pHead = createHead(pHead, "jh1");
    
    
    
    //insert
    pHead = insertNode(pHead, "jh2");
    pHead = insertNode(pHead, "jh3");
    pHead = insertNode(pHead, "jh4");
    pHead = insertNode(pHead, "jh5");
    
    
    //0为起始index
//    pHead = deleteNode(pHead, 0);
//    showList(pHead);
    
    
    //保存
    saveList(pHead);
    
    
    return 0;
}







