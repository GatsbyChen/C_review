//
//  main.c
//  Fishc_P1
//
//  Created by 孙晨 on 2019/10/31.
//  Copyright © 2019年 孙晨. All rights reserved.
//

#include<stdio.h>

// Hello World
//void main(){
//    printf("Hello world!\n");
//}

// sin 函数
//void main(){
//    double x, s;
//    printf("the input number is: \n");
//    scanf("%lf", &x);
//    s = sin(x);
//    printf("sin of %lf is %lf\n", x, s);
//}

// 定义常量
//#define PRICE 30
//
//void main(){
//    int x, total;
//    x = 10;
//    total = x * PRICE;
//    printf("total = %d\n", total);
//}


//// 基本类型所占字节
//void main(){
//    printf("%d\n", sizeof(long double));
//}

// 溢出
//void main(){
//    short int a, b;
//    a = 32767;
//    b = a + 1;
//    printf("%d, %d\n", a, b); //这里short int只占两个字节，16bit， 取值范围为-32768～32767，所以会发生溢出
//}

// 浮点数溢出
//void main(){
//    float a, b;
//    a = 123456.789e5;
//    b = a+20;
//    printf("%f, %f\n", a, b); // 溢出
//}

// 实型变量的计算（1.0/3*3, 3/2, 1/3*3）
//void main(){
////    printf("%f\n", 1.0/3*3); //1.000000
////    printf("%f\n", 3/2); // 0.000000
//    printf("%f\n", 1/3*3); //0.000000
//}

// ASIC码
//void main(){
//    int a,b;
//    a = 'x';
//    b = '7';
//    printf("%d\n", a);
//    printf("%d\n", b);
//}


//void main(){
//    char a, b;
//    a = 120;
//    b = 121;
//    printf("%c, %c\n", a, b);
//    printf("%d, %d\n", a, b);
//}

// 怎么声明一个字符串变量
//#include<string.h>
//void main(){
//    char a, b;
//    char str[20] = "sef";
//    a = 'a';
//    b = 'b';
//    a = a-32;
//    b = b-32;
//    printf("%c,%c\t%d,%d\n", a, b, a, b);
//    printf("%s\n", str[20]);
//}

//void main(){
//    float a;
//    a = 3.1415;
//    printf("int(a):%d, a:%f\n", (int)a, a);
//}

//void main(){
//    int i = 8;
//    printf("i++:%d\n", i++);
//    printf("i--:%d\n", i--);
//    printf("++i:%d\n", ++i);
//    printf("--i:%d\n", --i);
//    printf("-i++:%d\n", -i++);
//    printf("-i--:%d\n", -i--);
//}


// 题目
//void main(){
//    int i = 5, j=5, p , q;
//    p = (i++) + (i++) + (i++);
//    q = (++j) + (++j) + (++j);
//    printf("p, q:%d, %d\n", p, q);  // 18,21
//}

//void main(){
//    int a, b = 322;
//    float x, y = 8.88;
//    char c1 = 'k', c2;
//    a = y;
//    x = b;
//    a = c1;
//    c2 = b;
//    printf("%d, %f, %d, %c\n", a, x, a, c2); //这里char超过长度会自动截取（322-256）=66==B
//}


// 逗号运算符
void main(){
    int a = 2, b = 4, c = 6, x, y;
    y = (x = a + b, b + c);
    printf("y=%d, x=%d\n", y, x);
}
