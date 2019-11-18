//
//  main.c
//  Fishc_P32
//
//  Created by 孙晨 on 2019/11/8.
//  Copyright © 2019年 孙晨. All rights reserved.
//

# include "stdio.h"

/*
void main(){
    void printstar();
    void printmessage();
    
    printstar();
    printmessage();
    printstar();
    printf("over!\n");
}

void printstar(){
    printf("*******************\n");
}
void printmessage(){
    printf("the details of code\n");
}
*/

// max函数
/*
void main(){
    int max(int x, int y), a, b;
    printf("please input two number to compare:\n");
    scanf("%d%d", &a, &b);
    printf("the max one of input is: %d\n", max(a, b));
}

int max(int x, int y){
    int z;
    z = x>y?x:y;
    return z;
}
*/

// 关于C语言中形参的计算顺序
/*
void main(){
    int f(int a, int b);
    int i = 2, p;
    p = f(i, ++i);
    printf("%d\n", p);
}

int f(int a, int b){
    int c;
    if (a>b) {
        c = 1;
    }
    else if (a == b)
    {
        c = 0;
    }
    else
    {
        c = -1;
    }
    return c;
}
*/ //这里Xcode的计算顺序是从左到右的

// 简单的函数调用程序：当把被调用的函数放在调用函数前面时，则不需要在调用函数中声明；
/*
float add(float x, float y){
    float sum;
    sum = x + y;
    return sum;
}

void main(){
    float add(float x, float y);
    float a, b, c;
    printf("please input two float number:\n");
    scanf("%f%f", &a, &b);
    c = add(a, b);
    printf("the sum is %f\n", c);
}
*/

// pow函数的自己实现
/*
void main(){
    double pow(double x, double y);
    double a, b, res;
    printf("please input the two float number:\n");
    scanf("%lf%lf", &a, &b);
    res = pow(a, b);
    printf("the %lf raises to %lf is %lf\n", a, b, res);
}

double pow(double x, double y){
    int i;
    double sum = 1.0;
    for (i = 0; i<(int) y; i++) {
        sum *= x;
    }
    return sum;
}
*/

// 库函数sqrt(), 自己实现
/*
void main(){
    double sqrt_self(double x), abs_self(double m, double n);
    double a;
    printf("please input the number you want sqrt:\n");
    scanf("%lf", &a);
    printf("the root of a is %lf\n", sqrt_self(a));
}

double sqrt_self(double x){
    double abs_self(double m, double n);
    double pre = 0.0, res = 1.0;
    if (x == 0.0 || x == 1.0) {
        return x;
    }
    while (abs_self(pre, res)>0.0001) {
        pre = res;
        res = (pre + x/pre) / 2.0; // 这个公式主要是通过牛顿切线法得出来的，可以多温习；
    }
    return res;
}

double abs_self(double m, double n){
    double result = m - n;
    if (result>=0) {
        return result;
    }
    else
    {
        return -result;
    }
}
*/

// 统计输入的字符的种类并分类；完美
/*
void main(){
    int nb = 0, num = 0, nc = 0, num_array[10] = {0}, i;
    char c;
    printf("please input the characters:\n");
    while ((c = getchar())!='\n') {
        if ((c>65&&c<90) || (97<c&&c<122)) {
            nb++;
        }
        else if (c>48 && c<57)
        {
            num_array[(int) (c - 48)] += 1;
        }
        else
        {
            nc++;
        }
    }
    printf("the nums of blank, char are:\n%d %d\n", nb, nc);
    for (i = 0; i<10; i++) {
        printf("%d ", num_array[i]);
    }
}
*/

// 函数的嵌套调用
/*
void main(){
    int sq_factorial(int n);
    int a, b, sum;
    printf("please input the two number:\n");
    scanf("%d%d", &a, &b);
    sum = recursion_factorial(square(a)) + recursion_factorial(square(b));
    printf("the factorial of square(n) is %d\n", sum);
}

int recursion_factorial(int n){
    int fac_result = 0;
    if (n<0) {
        printf("None");
    }
    else if (n==0 || n==1)
    {
        return n;
    }
    else
    {
        fac_result = recursion_factorial(n-1)*n;
    }
    return fac_result;
}
*/

/*
int sq_factorial(int n){
    int square(int x);
    int z, sq_fac = 1;
    z = square(n);
    for (; z>0; z--) {
        sq_fac *= z;
    }
    return sq_fac;
}
*/

/*
int square(int x){
    int s;
    s = x*x;
    return s;
}
*/


// 汉诺塔问题：递归的调用
/**********************************
历史遗留问题，等待解决
**********************************/


// 数组作为函数的参数
/*
void main(){
    void test(int b[7]);
    int a[7] = {0,1,2,3,4,5,6};
    test(a);  // 这里注意将数组名作为函数的参数时，主要是将数组的|首地址|传给函数的形参；
    putchar('\n');
}

void test(int b[7]){
    int i;
    for (i = 0; i<7; i++) {
        printf("%d ", b[i]);
    }
}
*/

// 数组作为函数参数：练习
/*
void main(){
    double average(double score[]);
    double score_std[5] = {1.0,2.0,3.0,4.0,5.0}, a;
    a = average(score_std);
    printf("the average value of score is %.2lf\n", a);
}


double average(double score[]){
    double sum = 0.0;
    int i;
    for (i = 0; i<5; i++) {
        sum += score[i];
    }
    return sum / 5.0;
}
*/
/* 特别注意，形参中不需要定义数组的长度；因为形参数组只是接收了实参数组的首地址，它指向的是实参数组，
   所以无论定义成什么都是，它调用的都是实参数组。*/

// static 可以将局部变量的存储类型定义为静态存储；局部变量存放在栈区，全局变量存放在数据区，同样静态局部变量也是存放在数据区；
// 静态局部变量在程序编译时就已经赋初值，在后面程序运行的过程中就不用再次赋值了

// 寄存器类型；register 对于一些大量重复调用的变量来说，直接将这些变量放在cpu的寄存器中，可以很大的提高效率

// extern：声明外部变量

// 用static 实现阶乘
/*
void main(){
    int factorial(int n),n,res = 0;
    printf("please input the number you want count:\n");
    scanf("%d", &n);
    for (int i = 1; i<=n; i++) {
        res = factorial(i);
        printf("the factorial of %d is %d\n", i, res);
    }
}
*/

// static 不仅可以将局部变量的存储方式转换为静态存储，同时可以用来声明外部变量，将外部变量与当前的文件捆绑，使得外部文件无法调用。


/**********************************************/
/* P40中总结了所有关于变量作用域以及变量生存期的知识点 */
/**********************************************/


// 输入字符，删除字符串中的字符

void main(){
    char c, str[20];
    void enter_char(char str[]);
    void del_char(char str[], char c);
    void print_char(char str[]);
    
    enter_char(str);
    scanf("%c", &c);
    del_char(str, c);
    print_char(str);
    
}
