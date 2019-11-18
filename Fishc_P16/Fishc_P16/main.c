//
//  main.c
//  Fishc_P16
//
//  Created by 孙晨 on 2019/11/5.
//  Copyright © 2019年 孙晨. All rights reserved.
//

#include <stdio.h>

// goto 语句
/*
void main(){
    int sum = 0, i = 1;
loop: if (i<=100)
{
    sum += i;
    i++;
    goto loop;
}
    printf("the sum of 1~100:%d\n", sum);
}
*/

// while语句
/*
void main(){
    int sum = 0, i = 1;
    while (i<101) {
        sum += i;
        i++;
    }
    printf("the sum of 1~100:%d\n", sum);
}
*/

/*
void main(){
    int n=0;
    printf("please input a string:\n");
    while (getchar()!='\n') {
        n++;
    }
    printf("the length of string is: %d\n", n);
}
*/

// while里面同样可以是逻辑表达式或者关系表达式
/*
void main(){
    int n, i=0;
    printf("input a number i:\n");
    scanf("%d", &n);
    while (n--) {
        printf("%d\n", i++*2); //a在前面，所以这里是先a*2,再a++；
    }
}
*/

// do-while语句
/*
void main(){
    int sum=0, i=1;
    do {
        sum += i;
        i++;
    } while (i<=100);
    printf("the value of sum is:%d\n", sum);
}
*/

// for语句
/*
void main(){
    int sum = 0, i = 1;
    for (i = 1; i<=100; i++){
        sum += i;
    }
    printf("the value of sum is:%d\n", sum);
}
*/

// 循环的嵌套
/*
void main(){
    int i, j, k;
    printf("i j k:\n");
    for (i = 0; i<2; i++) {
        for (j = 0; j<2; j++) {
            for (k = 0; k<2; k++) {
                printf("%d %d %d\n", i, j, k);
            }
        }
    }
}
*/

// 打印指定的图形
/*
void main(){
    int i=1, j;
    for (; i<=6; i++) {
        for (j = 0; j<i; j++) {
            printf("*");
        }
        printf("\n");
    }
}
*/

//void main(){
//    int i,j,k,n=0;
//    for (i = 1; i<=4; i++) {
//        for (j=1; j<=4; j++) {
//            for (k=1; k<=4; k++) {
//                if (i!=j && j!=k && i!=k) {
//                    printf("%d\n", 100*i+10*j+k);
//                    n++;
//                }
//            }
//        }
//    }
//    printf("%d\n", n);
//}

/*
void main(){
    double pi = 3.1415926, area;
    int r;
    for (r = 1; r<=10; r++) {
        area = r*r*pi;
        if (area>100) {
            break;
        }
        printf("r:%d; area:%lf\n", r, area);
    }
}
*/

//void main(){
//    int i = 0;
//    char c;
//    printf("input many characters:\n");
//    while (1) {
//        c = '\0';
//        while (c!= 13 && c!= 97){
//            c = getchar();
//            printf("%c", c);
//        }
//        if (c == 97) {
//            break;
//        }
//        i++;
//        printf("\nthe No. is %d\n", i);
//    }
//    printf("The end!\n");
//}

/*
void main(){
    int a = 100;
    for (; a<=200; a++) {
        if (a % 3 != 0)
        {
            printf("%d\n", a);
        }
        else
        {
            continue;
        }
    }
}
*/
//# include "math.h"
//
//void main(){
//    double sum = 0;
//    int i;
////    printf("%lf", pi);
////    printf("input the accuracy of pi:\n");
////    scanf("%lf", &acc);
//    for (i=1; ; i = i+2) {
//        if ((i/2)%2==0) {
//            sum += 1.0 / i;
//        }
//        else
//        {
//            sum -= 1.0 / i;
//        }
//        if (fabs(1.0 / i)<1e-6) {
//            break;
//        }
//    }
//    printf("the value of pi is: %lf\n", 4*sum);
//
//}

// Fibonacci
/*
void main(){
    int a = 0, b = 1, c, i;
    for (i = 1; i<=40; i++) {
        c = a + b;
        a = b;
        b = c;
        printf("%d\n", a);
    }
}
*/

// 判断一个数是否为素数
/*
void main(){
    int m, i, judge = 0;
    printf("please input a number:\n");
    scanf("%d", &m);
    for (i = 2; i<m; i++) {
        if (m % i == 0) {
            judge += 1;
            break;
        }
    }
    if (judge == 0) {
        printf("m is a prime number \n");
    }
    else
    {
        printf("m is not a prime number\n");
    }
}
*/


/*
void main(){
    int i, k, m;
    printf("please input a number:\n");
    scanf("%d", &m);
    k = sqrt(m);
    for (i = 2; i<=k; i++) {
        if (m % k == 0) {
            break;
        }
    }
    if (i>k) {
        printf("m is a prime number!\n");
    }
    else
    {
        printf("m is not a prime number!\n");
    }
}
 */

// 将100～200之间的所有素数打印出来
/*
void main(){
    int i, k, m;
    for (m = 100; m<=200; m++) {
        k = sqrt(m);
        for (i = 2; i<=k; i++) {
            if (m % i == 0) {
                break;
            }
        }
        if (i>k) {
            printf("%d\n", m);
        }
    }
}
*/
