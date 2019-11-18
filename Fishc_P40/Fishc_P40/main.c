//
//  main.c
//  Fishc_P40
//
//  Created by 孙晨 on 2019/11/11.
//  Copyright © 2019年 孙晨. All rights reserved.
//

/******/
/*指针*/
/******/
#include "stdio.h"

/*
void main(){
    int a = 10, b = 100;
    int *pointer_a, *pointer_b;
    pointer_a = &a;
    pointer_b = &b;
    printf("the value of a,b is %d, %d\n", a, b);
    printf("the value of a,b is %d, %d\n", *pointer_a, *pointer_b);
}
*/

/*
void main(){
    void pointer_change(int *p1, int *p2);
    int *p1, *p2, a, b;
    printf("please input the two value of a,b:\n");
    scanf("%d%d", &a, &b);
    p1 = &a;
    p2 = &b;
    if (a<b)
    {
        pointer_change(p1, p2);
    }
    printf("the value of a,b is: %d, %d\n", a, b);
    printf("the max=%d, the min=%d\n", *p1, *p2);
}
*/

/*
void main(){
    void pointer_change(int *p1, int *p2);
    int a, b, c, *p1, *p2, *p3;
    printf("please input the value of a, b, c:\n");
    scanf("%d%d%d", &a, &b, &c);
    p1 = &a;
    p2 = &b; //p1-->max; p2-->min
    p3 = &c;
    if (a<b) {
        pointer_change(p1, p2);
    }
    if (a<c) {
        pointer_change(p1,p3);
    }
    if (b<c) {
        pointer_change(p2, p3);
    }
    printf("the order value is: %d, %d, %d\n", *p1, *p2, *p3);
}
*/

// 取出数组中的全部元素：下标法；元素地址法；指针法
/*
void main(){
    int a[10] = {9,8,7,6,5,4,3,2,1,0};
    int i, *p;
    for (i = 0; i<10; i++) {
        printf("%d ", a[i]);
    }
    putchar('\n');
    for (i = 0; i<10; i++) {
        printf("%d ", *(a+i));
    }
    putchar('\n');
    p = a;
    for (i = 0; i<10; i++) {
        printf("%d ", *(p+i));
    }
    putchar('\n');
}
*/

// 改错程序
/*
void main(){
    int a[10], *p, i;
    printf("input ten numbers:\n");
    p = a;
    for (i = 0; i<10; i++) {
        scanf("%d", p++);
    }
    p = a;
    for (i = 0; i<10; i++,p++) {
        printf("%d ", *p);
    }
    putchar('\n');
}
*/


// 将数组中的元素颠倒顺序
/*
void main(){
    void reverse(int a[], int i);
    int a[10], i;
    printf("please input 10 numbers:\n");
    for (i = 0; i<10; i++) {
        scanf("%d", &a[i]);
    }
    reverse(a, 10);
    for (i = 0; i<10; i++) {
        printf("%d ", a[i]);
    }
    putchar('\n');
}
*/

// 数组版本
/*
void reverse(int a[], int i){
    int m = i / 2, j, n;
    for (j = 0; j<m; j++) {
        n = a[j];
        a[j] = a[i-j-1];
        a[i-j-1] = n;
    }
}
*/

// 指针版本
/*
void reverse(int *p, int i){
    int m, *b, *e, temp;
    m = i/2;
    b = p;
    e = p+i-1;
    for (; b<p+m; b++, e--) {
        temp = *b;
        *b = *e;
        *e = temp;
    }
}
*/


// 指针；从十个数中找出max, min
/*
void main(){
    int a[3], *max, *min, i;
    printf("please input 3 numbers:\n");
    for (i = 0; i < 3; i++) {
        scanf("%d", &a[i]);
    }
    max = a;
    min = a;
    for (i = 0; i<3; i++) {
        if (a[i]>*max) {
            max = &a[i];
        }
        else if (a[i]<*min){
            min = &a[i];
        }
    }
    printf("the max = %d\nthe min = %d\n", *max, *min);
}
*/

// 指针，冒泡排序
/*
void main(){
    void sort_self(int *p, int i);
    int a[10], *p, i;
    p = a;
    printf("please input the ten numbers:\n");
    for (i = 0; i<10; i++) {
        scanf("%d", p++);
    }
    sort_self(a, 10);
    p = a;
    for (i = 0; i<10; i++, p++) {
        printf("%d ", *p);
    }
    putchar('\n');
}

void sort_self(int *p, int i){
    int j,k, *t, temp;
    t = p;
    for (j = i-1; j>0; j--) {
        p = t;
        for (k = 0; k<j; k++, p++) {
            if (*p>*(p+1)) {
                temp = *p;
                *p = *(p+1);
                *(p+1) = temp;
            }
        }
    }
}
*/

// 类型说明符 (*指针变量名)[长度] --> 长度是指二维数组分解为一维数组后，每个一维数组的长度
// e.g. int (*p)[4]

// 定义一个二维数组-->指针

/*
void main(){
    int a[2][3] = {1,2,3,4,5,6}, i, j;
    int (*p)[3];
    p = a;
    for (i = 0; i<2; i++) {
        for (j = 0; j<3; j++) {
            printf("%d ", *(*(p+i)+j));
        }
        putchar('\n');
    }
}
*/

// 将a字符串copy到b中
/*
void main(){
    char a[] = "abc de fg!", b[20];
    int i = 0;
    for (; *(a+i)!='\0'; i++) {
        *(b+i) = *(a+i);
    }
    *(b+i) = '\0';
    printf("the string b is %s\n", b);
}
*/

// 指针方法
/*
void main(){
    void string_copy(char *p1, char *p2);
    char a[] = "this is Xcode!", b[40], *p1, *p2;
    p1 = a;
    p2 = b;
    string_copy(p1, p2);
    printf("%s\n", b);
}

void string_copy(char *p1, char *p2){
    for (; *p1 != '\0'; p1++, p2++) {
        *p2 = *p1;
    }
    *p2 = '\0';
}
*/


// 提取字符串数组的第i个元素-指针
/*
void main(){
    char *str = "this is Xcode!";
    int i;
    printf("the six element of str is: %c\n", str[5]);
    for (i = 0; str[i]!='\0'; i++) {
        printf("%c", str[i]);
    }
    putchar('\n');
}
*/


// 函数指针变量的定义：int (*p)(int, int); -->括号中数据类型以及参数个数可以不定义

// 利用函数的指针变量来实现类似于‘多态’的效果——多态：同一类对象的不同形态
/*
void main(){
    int max(int x, int y);
    int min(int x, int y);
    int add(int x, int y);
    
    void process(int x, int y, int (*p)());
    int a, b, c;
    
    printf("please input the value of a,b:\n");
    scanf("%d%d", &a, &b);
    
    printf("the max is:");
    process(a, b, max);
    
    printf("the min is:");
    process(a, b, min);
    
    printf("the add is:");
    process(a, b, add);
}

void process(int x, int y, int (*p)()){
    int c;
    c = (*p)(x, y);
    printf("%d\n", c);
}

int max(int x, int y){
    if (x>y) {
        return x;
    }
    else
    {
        return y;
    }
}

int min(int x, int y){
    if (x<y) {
        return x;
    }
    else
    {
        return y;
    }
}

int add(int x, int y){
    return x+y;
}
*/

// 返回值为指针的函数：e.g. int *a(int x, int y);

// 输入序号，返回学生的各门课成绩

/* 非指针定义数组方法
void main(){
    int a[3][2] = {73, 39, 92, 95, 77, 72}, id;
    int i;
    int *p(int *q, int id), *p1, *p2;
    
    printf("please input the id number of student:\n");
    scanf("%d", &id);
    p1 = *(a);
    p2 = p(p1, id);
    for (i = 0; i<2; i++) {
        printf("%d ", *(p2+i));
    }
}

int *p(int *q, int id){
    return q+id*2;
}
*/

// 指针定义数组方法
/*
void main(){
    int a[3][2] = {73, 39, 92, 95, 77, 72}, id;
    int i, *p1;
    int *ext(int (*p)[2], int id);
    
    printf("please input the id number of student:\n");
    scanf("%d", &id);
    
    p1 = ext(a, id);
    
    for (i = 0; i<2; i++) {
        printf("%d ", *(p1+i));
    }
    putchar('\n');
}

int *ext(int (*p)[2], int id){
    int *pt;
    pt = *(p+id);
    return pt;
}
*/


// 找出成绩不合格的学生
/*
void main(){
    int a[3][2] = {73, 39, 92, 95, 57, 72};
    int *ext(int (*p)[2], int i);
    int i,j, *p;
    
    for (i = 0; i<3; i++) {
        p = ext(a, i);
        for (j = 0; j<2; j++) {
            if (*(p+j)<60) {
                printf("the student %d is not pass\n", i);
            }
        }
    }
}

int *ext(int (*p)[2], int i){
    int *pt;
    pt = *(p+i);
    return pt;
}
*/

// 指针数组--> 元素类型全部为指针变量的数组
/*
void main(){
    int a[5] = {1,3,4,5,6}, i;
//    int *pl[5] = {&a[0], &a[1], &a[2], &a[3], &a[4]};
    int *pl[5] = {a, a+1, a+2, a+3, a+4};

    for (i = 0; i<5; i++) {
        printf("%d ", *(*(pl+i)));
    }
    putchar('\n');
}
*/

// 对给定的字符串数组从小到大进行排列
/*
#include "string.h"

void main(){
    char *a[3] = {"xcode", "wechat", "macbook"};
    int n = 3;
    void sort_string(char *a[], int n);
    void print_string(char *a[], int n);
    
    sort_string(a, n);
    print_string(a, n);
}

void sort_string(char *a[], int n){
    int i, j;
    char *temp;
    for (i = n-1; i>0; i--) {
        for (j = 0; j<i; j++) {
            if (strcmp(a[j], a[j+1])>0) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

void print_string(char *a[], int n){
    int temp = n;
    for (; n>0; n--) {
        printf("%s\n", a[temp-n]);
    }
}
*/

// 指针的指针
/*
void main(){
    char *a[3] = {"xcode", "wechat", "macbook"};
    int i;
    char **p;
    
    for (i = 0; i<3; i++) {
        p = a+i;
        printf("%s\n", *p); // 这里p是指针的指针，而a+i即第i个字符串的首地址给了p，*p即是取出p的地址；
    }
}
*/

// const常量类型的使用
/*
void main(){
    const char *str = "this is xcode!";
    // 这里主要是定义一个指针指向了字符串常量，由于字符串常量是不可变的，但是这里指针变量是可变的，重新指向了下一个字符串；
//    str[0] = "w";
    str = "the pointer of const variable could be changed!";
    printf("%s\n", str);
}

void main(){
    char * const str = "this is xcode!";
    // 这里主要是定义了一个指针常量，所以指针变量不能被修改， 同样在常量区的数据无法被重写
    //    str[0] = "w";
    // str = "the pointer of const variable could be changed!";
    printf("%s\n", str);
}
*/
