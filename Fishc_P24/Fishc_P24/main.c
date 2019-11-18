//
//  main.c
//  Fishc_P24
//
//  Created by 孙晨 on 2019/11/7.
//  Copyright © 2019年 孙晨. All rights reserved.
//

#include <stdio.h>

// 数组的定义
/*
void main(){
    int i, n[10];
    for (i = 0; i<=9; i++)
    {
        n[i] = i;
    }
    for (i = 0; i<=9; i++)
    {
        printf("%d\n", n[i]);
    }
}
*/

// 数组的赋值
/*
void main(){
    int a, n[10] = {1,2,3};
    for (a = 0; a<=9; a++) {
        printf("%d\n", n[a]);
    }
}
 */

// 数组初始化和未e初始化的比较
/*
void main(){
    int i, a[5] = {2,3,4}, b[5];
    for (i = 0; i<5; i++) {
        printf("the a[%d] is %d\n", i, a[i]);
    }
    for (i = 0; i<5; i++) {
        printf("the b[%d] is %d\n", i, b[i]);
    }
}
*/

// 动态赋值
/*
void main(){
    int i, a[5];
    printf("please input five number:\n");
    for (i = 0; i<5; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i<4; i++) {
        if (a[i]>a[i+1]) {
            a[i+1] = a[i];
        }
    }
    printf("the max one of a[] is %d\n", a[4]);
}
*/

// Fibonacci数组实现
/*
void main(){
    int i, F[20]={1,1};
    for (i = 1; i<19; i++) {
        F[i+1] = F[i] + F[i-1];
    }
    for (i = 0; i<20; i++) {
        printf("%d\n", F[i]);
    }
}
*/

// 冒泡排序
/*
void main(){
    int i, j, a[7] = {0}, temp = 0;
    printf("please input seven numbers:\n");
    for (i = 0; i<7; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i<6; i++) {
        for (j = 0; j<6-i; j++) {
            if (a[j+1] <= a[j]) {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0; i<7; i++) {
        printf("%d ", a[i]);
    }
}
 */

// 二维数组
/*
void main(){
    int sum, i, j, score[3][5] = {{80, 61, 59, 85, 76}, {75, 65, 63, 87, 77},{92, 71, 70, 90, 85}};
    double result[4] = {0.0};
    for (i = 0; i<3 ; i++) {
        sum = 0;
        for (j = 0; j<5; j++) {
            sum += score[i][j];
        }
        result[i] = sum/5.0;
    }
    result[3] = (result[0] + result[1] + result[2])/3.0;
    for (i = 0; i<4; i++) {
        printf("%lf\n", result[i]);
    }
}
*/

// 二维数组的转置
/*
void main(){
    int i, j, a[2][3] = {{1,2,3}, {4,5,6}}, b[3][2] = {0};
    for (i = 0; i < 2; i++) {
        for (j = 0; j<3; j++) {
            b[j][i] = a[i][j];
        }
    }
    printf("%d\n", b[0][1]);
}
*/

// 矩阵最大值
/*
void main(){
    int max[3] = {0}, i, j, a[2][3] = {{10,2,3}, {14,5,6}};
    max[0] = a[0][0];
    for (i = 0; i<2; i++) {
        for (j = 0; j<3; j++) {
            if (max[0] < a[i][j]) {
                max[0] = a[i][j];
                max[1] = i;
                max[2] = j;
            }
        }
    }
    printf("the max value of matrix is: %d; the position is %d %d\n", max[0], max[1], max[2]);
}
*/

// 取矩阵特定的行列
/*
void main(){
    int i,j,a[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}}, row, col;
    printf("please input the col and row you want extract:\n");
    scanf("%d%d", &row, &col);
    for (i = 0; i<3; i++) {
        for (j = 0; j<3; j++) {
            if (i == row || j == col) {
                printf("%d ", a[i][j]);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
 */

// 二分查找C实现

# define M 10
void main(){
    int target, found, low, high, mid = 0,
    a[M] = {-12,0,6,16,23,56,80,100,110,115};
    printf("please input the target number you want find:\n");
    do {
        scanf("%d", &target);
        getchar();
    } while (target<a[0] || target>a[M-1]);
//    scanf("%d", &target);
    found = 0;
    low = 0;
    high = M - 1;
    for (; low<=high; ) {
        mid = (low+high)/2;
        if (a[mid] == target) {
            found += 1;
            break;
        }
        else if (a[mid]<target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (found) {
        printf("the number is in the list and position is %d\n", mid);
    }
    else
    {
        printf("not found\n");
    }
    
}

// 一个程序在编译运行的时候，普通变量放在栈区，我们还会学习堆，而static后的变量会存放在data区
// 我们的整个内存主要分为四大区：code；data；stack；heap























