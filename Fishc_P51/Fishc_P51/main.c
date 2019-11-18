//
//  main.c
//  Fishc_P51
//
//  Created by 孙晨 on 2019/11/14.
//  Copyright © 2019年 孙晨. All rights reserved.
//

//  预处理中的宏定义

#include "stdio.h"

/*
#define M 10
#define Max(a, b) ((a)>(b))?(a):(b) //  这里注意宏定义中，形参都要加上()，防止因为运算优先级导致替换后运算结果不同

void main(){
    printf("%d\n", M);
    printf("%d\n", Max(3, 4));
}
*/


//  结构体的定义-可以理解为面向对象中类的概念
/*
 struct student {
 int id;
 char name[20];
 int sex;
 int age;
 char adr[40];
 } student1, student2   这里student1和student2都是结构体变量
 */


//  结构体整体复制的实例

/*
void main(){
    struct student {
        int age;
        char *name;
        double score;
        char sex;
    }boy1, boy2;
    boy1.age = 25;
    boy1.name = "chen";
    
    printf("please input the score and sex of student:\n");
    scanf("%lf,%c", &boy1.score, &boy1.sex);
    
    boy2 = boy1;
    
    printf("boy2: age = %d, score = %lf\n", boy2.age, boy2.score);
//    boy1.age = 20;
//    printf("boy2: age = %d, score = %lf\n", boy2.age, boy2.score); 这里主要是验证了一下，结构体的拷贝是深拷贝
}
*/

//  结构体数组的定义及初始化

//  投票统计系统
/*
#include <string.h>
void main(){
    char c_name[10];
    struct candidate {
        char *name;
        int votes;
    } candidate[3] = {{"chen", 0}, {"zi", 0}, {"zhang", 0}};
    int i = 0, j;
    while (i<5) {
        printf("please input the candidator's name:\n");
        scanf("%s", c_name);
//        printf("%s  %s\n", c_name, candidate[0].name);
//        printf("%d\n",strcmp(c_name, candidate[0].name));
//        printf("%s\n", candidate[0].name);
        for (j = 0; j<3; j++) {
            if (!(strcmp(candidate[j].name, c_name))) {
                candidate[j].votes += 1;
            }
        }
        i++;
    }
    printf("voting over!\n");
    for (i = 0; i<3; i++) {
        printf("name:%s    votes:%d\n", candidate[i].name, candidate[i].votes);
    }
}
*/

//  指向结构体类型数据的指针 --> struct stu *pstu;
/* 要注意的是，对于定义结构体类型的指针进行初始化时，需要 pstu = &boy -->其中boy是已经结构体变量
   原因是结构名只是对结构体作说明，不会被分配内存空间
 */

// 用结构体类型的指针变量访问结构体的成员变量主要是两种方式：1.  (*pstu).age     2.   pstu->age


//  C语言实现简单链表
/*
void main(){
    struct stu {
        int num;
        double score;
        struct stu *next;
    }a = {0, 80.5}, b = {1, 85.5}, c = {2, 90.5};
    int i;
    struct stu *head;
    head = &a;
    a.next = &b;
    b.next = &c;
    c.next = NULL;
    for (i = 0; i<3; i++) {
        printf("student: num=%d, score=%lf\n", head->num, head->score);
        head = head->next;
    }
}
*/

// 实现一个可以动态增加节点的链表来存储学生成绩
/******************************/
/****第二坑-实现链表存储学生成绩****/
/******************************/

/*
#include <stdlib.h>

#define LEN sizeof(struct stu)

struct stu *creat();
void print(struct stu *head);

struct stu
{
    int num;
    float score;
    struct student *next;
};

int n;

void main(){
    struct stu *stu;
    
    stu = creat();
    print(stu);
    
    printf("\n\n");
    system("pause");
}

struct stu *creat() {
    struct stu *head;
    struct stu *p1, *p2;
    p1 = p2 = (struct stu *)malloc(LEN);
    
    printf("please enter the num:\n");
    scanf("%d,%f", &p1->num, &p1->score);
    
    head = NULL;
    n = 0;
    
    while (p1->num) {
        n++;
        if (n == 1) {
            head = p1;
        }
        else
        {
            p2->next = p1;
        }
        p2 = p1;
        p1 = (struct student *)malloc(LEN);
        printf("please enter the num:\n");
        scanf("%d,%f", &p1->num, &p1->score);
    }
    p2->next = NULL;
    return head;
};

void print(struct stu *head){
    struct stu *p;
    printf("\nThere are %d records!\n", n);
    
    p = head;
    if (head) {
        do
        {
            printf("学号为%d的成绩是：%f\n", p->num, p->score);
            p = p->next;
        }while (p);
    }
}
*/


//  typedef的使用

typedef int INTEGER;
typedef struct stu {
    int year;
    int month;
    int day;
}DATE;

typedef int NUM[100];
typedef char* p_char;

typedef int (*pointer)();

void main(){
    INTEGER a = 1;
    printf("%d\n", a);
    
    DATE date1;
    date1.day = 31;
    date1.month = 12;
    date1.year = 2018;
    printf("the date is %d-%d-%d\n", date1.year, date1.month, date1.day);
    
    NUM number;
    printf("the size is %d\n", sizeof(number));
    
    p_char p1;
    p1 = "this is xcode";
    printf("%s\n", p1);
    
    int max(int a, int b);
    pointer p_func;
    p_func = max;
    printf("%d\n", p_func(2,3));
    
    
}

int max(int a, int b){
    return a>b?a:b;
}
