//
//  main.c
//  Fishc_P11
//
//  Created by 孙晨 on 2019/11/3.
//  Copyright © 2019年 孙晨. All rights reserved.
//

#include <stdio.h>

//void main(){
//    int a, b, max;
//    printf("input two numbers:\n");
//    scanf("%d,%d", &a, &b);
//    if (a<b)
//    {
//        max = b;
//    }
//    else
//    {
//        max = a;
//    }
//    printf("the value of max is: %d\n", max);
//}

//void main(){
//    char a;
//    printf("please input a char:\n");
//    scanf("%c", &a);
//    if(a<32)
//    {
//        printf("this is a controll character\n");
//    }
//    else if('0'<=a && a<='9')
//    {
//        printf("the is a number char\n");
//    }
//    else if('A'<=a && a<='Z')
//    {
//        printf("ths is capital letter\n");
//    }
//    else if('a'<=a && a<='z')
//    {
//        printf("this is a small letter\n");
//    }
//}

//void main(){
//    double score;
//    printf("input the score:\n");
//    scanf("%lf", &score);
//    printf("the level of the score is: ");
//    if (score<60)
//    {
//        printf("E\n");
//    }
//    else if (60<score && score<=70)
//    {
//        printf("D\n");
//    }
//    else if (70<score && score<=80)
//    {
//        printf("C\n");
//    }
//    else if (80<score && score<=90)
//    {
//        printf("B\n");
//    }
//    else
//    {
//        printf("A\n");
//    }
//}

// 从小到大排列a,b,c的值
//void main(){
//    int a, b, c, temp;
//    printf("please input the value of a,b,c:\n");
//    scanf("%d, %d, %d", &a, &b, &c);
//    temp = a;
//    if (temp>b)
//    {
//        a = b;
//        b = temp;
//    }
//    if (temp>c)
//    {
//        b = c;
//        c = temp;
//    }
//    if (a>b)
//    {
//        temp = a;
//        a = b;
//        b = temp;
//    }
//    printf("the order of a,b,c is: %d,%d,%d", a, b, c);
//}

//void main(){
//    int a, b, c, temp;
//    printf("please input the value of a,b,c:\n");
//    scanf("%d, %d, %d", &a, &b, &c);
//    if (a>b)
//    {
//        temp = a;
//        a = b;
//        b = temp;
//    }
//    if (a>c)
//    {
//        temp = a;
//        a = c;
//        c = temp;
//    }
//    if (b>c)
//    {
//        temp = b;
//        b = c;
//        c = temp;
//    }
//    printf("the order number of a,b,c is: %d, %d, %d\n", a, b, c);
//}

//条件运算符
//void main(){
//    int a, b;
//    printf("please input two number:\n");
//    scanf("%d%d", &a, &b);
//    printf("the max one is %d\n", a>b?a:b);
//}

// 判断是否为大写字母并转化
//void main(){
//    char a;
//    printf("please input a letter:\n");
//    scanf("%c", &a);
//    printf("The capital format of input letter is: %c\n", a>=65 && a<91?a:a-32);
//}


// switch
//void main(){
//    int a;
//    printf("please input a integer number:\n");
//    scanf("%d", &a);
//    switch (a)
//    {
//        case 1: printf("Monday!");
//            break;
//        case 2: printf("Tuesday!");
//            break;
//        case 3: printf("Wednesday");
//            break;
//        case 4: printf("Thursday!");
//            break;
//        case 5: printf("Friday!");
//            break;
//        case 6: printf("Saturday!");
//            break;
//        case 7: printf("Sunday!");
//            break;
//        default: printf("error!");
//    }
//}

// switch 语句：输入三个整数，输出最大值和最小值

// 常规方法
//void main(){
//    int a, b, c, max, min;
//    printf("please input three integer:\n");
//    scanf("%d%d%d", &a, &b, &c);
//    if (a>b)
//    {
//        max = a;
//        min = b;
//    }
//    else
//    {
//        max = b;
//        min = a;
//    }
//    if (c>max)
//    {
//        max = c;
//    }
//    else if (c<min)
//    {
//        min = c;
//    }
//    printf("the max number is:%d;\nthe min number is:%d\n", max, min);
//}

//void main(){
//    double a, b;
//    char c;
//    printf("please input the compute formal:\n");
//    scanf("%lf %lf %c", &a, &b, &c);
//    switch (c) {
//        case '+':
//        {
//            printf("%lf\n", a+b);
//            break;
//        }
//        case '-':
//        {
//            printf("%lf\n", a-b);
//            break;
//        }
//        case '*':
//        {
//            printf("%lf\n", a*b);
//            break;
//        }
//        case '/':
//        {
//            printf("%lf\n", a/b);
//            break;
//        }
//    }
//}

// 判断输入年份是否为闰年,闰年的判断条件：（能被100整除的话：必须能被400整除才为闰年||不能被100整除的话：必须能被4整除则为闰年）

//void main(){
//    int a;
//    printf("please input the year number:\n");
//    scanf("%d", &a);
//    if (a%400==0 || a%100!=0 && a%4==0) // 注意这里不要冗余，实际以a%100是否等于0作为判断条件的，但a%400==0包含它
//    {
//        printf("this year is leap year!\n");
//    }
//    else
//    {
//        printf("It's not leap year!\n");
//    }
//}

// 运费计算
/*
void main(){
    double d, f;
    int p=20, w=10, s, temp;
    printf("the distance of your transport:\n");
    scanf("%d", &s);
    temp = s/250;
    switch (temp) {
        case 0:
        {
            d = 0.0;
            break;
        }
        case 1:
        {
            d = 0.02;
            break;
        }
        case 2:
        case 3:
        {
            d = 0.05;
            break;
        }
        case 4:
        case 5:
        case 6:
        case 7:
        {
            d = 0.08;
            break;
        }
        case 8:
        case 9:
        case 10:
        case 11:
        {
            d = 0.1;
            break;
        }
        case 12:
        {
            d = 0.15;
            break;
        }
        default:
        {
            d = 0.15;
            break;
        }
    }
    f = p*w*s*(1-d);
    printf("The total fee of transport is: %lf\n", f);
}
*/

// 间接取余
#include "math.h"

void main(){
    float a, b;
    int i;
    for (i = 0; i<100000; i++) {
        a = sqrt(i+100.0);
        b = sqrt(i+268.0);
        int c = a; // 注意这里用到了强制类型转换
        int d = b;
        if (a-c==0.0 && b - d==0.0)
        {
            printf("%d\n", i);
        }
    }
}

