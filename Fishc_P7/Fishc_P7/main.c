//
//  main.c
//  Fishc_P7
//
//  Created by 孙晨 on 2019/11/1.
//  Copyright © 2019年 孙晨. All rights reserved.
//

#include <stdio.h>

//void main(){
//    char a = 'a', b = 'o', c = 'k';
//    putchar(a);
//    putchar(b);
//    putchar('\t');
//    putchar(c);
//    putchar('\n');
//}

//void main(){
//    char c;
//    printf("input a character:");
//    c = getchar();
//    putchar(c);
//    putchar('\n');
//}

//void main(){
//    int a = 15;
//    float b = 123.1234567;
//    double c = 12345678.1234567;
//    char d = 'p';
//    printf("a = %d, %5d, %o, %x\n", a, a, a, a);
//    printf("b = %f, %lf, %8.3lf, %e\n", b, b, b, b);
//    printf("c = %lf, %f, %8.4lf\n", c, c, c);
//    printf("d=%c, %8c\n", d, d);
//}

//void main(){
//    int a, b, c;
//    printf("input the values of a,b,c:\n");
//    scanf("%d%d%d", &a, &b, &c);
//    printf("%d, %d, %d\n", a, b, c);
//}

//void main(){
//    char a, b;
//    printf("input the character: ");
//    scanf("%c%c", &a, &b);
//    printf("%c, %c\n", a, b);
//}

//void main(){
//    int a;
//    printf("input a number: ");
//    scanf("%d", &a);
//    printf("%ld\n", a);
//}


// 输入三个小写字母，输出其对应的acis码和对应的大写字母

//void main(){
//    char a, b, c;
//    printf("input three letters：");
//    scanf("%c %c %c", &a, &b, &c);
//    printf("the ASIC code is: %d, %d, %d\nthe senior format is: %c %c %c\n", a, b, c, a-32, b-32, c-32);
//}


// 已知三角形的三条边，求三角形的面积  A = [s(s-a)(s-b)(s-c)]^0.5, s = 0.5(a+b+c)

//void main(){
//    float a, b, c, s, A;
//    printf("input the length of side: \n");
//    scanf("%f %f %f", &a, &b, &c);
//    s = 0.5 * (a + b + c);
//    A = sqrt(s*(s-a)*(s-b)*(s-c));
//    printf("The area of arctangle is: %f\n", A);
//}


//// 求一元二次方程的平方根
//void main(){
//    double y, a, b, c, delta, x1, x2;
//    printf("please input the index of the equation-ax^2+bx+c+0,\na b c is:\n");
//    scanf("%lf %lf %lf", &a, &b, &c);
//    delta = b*b - 4*a*c;
//    if (delta<0)
//        return ;
//    else
//        x1 = (-b+sqrt(delta))/(2*a);
//        x2 = (-b-sqrt(delta))/(2*a);
//        printf("the root of equation is %lf and %lf\n", x1, x2);
//}

// 左结合性的理解, 坑！！！要注意！！！
//void main(){
//    int i = 5, j = 3;
//    printf("%d\n", i==j==0); //由于左结合性，这里先计算i==j, 再计算(i==j)=0
//}

// 逻辑表达式
//void main(){
//    char c = 'k';
//    int i = 1, j = 2, k = 3;
//    float x = 3e+5, y = 0.85;
//    printf("%d, %d\n", !x*!y, !!!x); // 0; 0
//    printf("%d, %d\n", x||i&&j - 3, i<j && x<y); // 1; 0
//    printf("%d, %d\n", i==5&&c&&(j=8), x+y||i+j+k); // 0; 1
//}
