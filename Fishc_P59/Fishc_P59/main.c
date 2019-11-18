//
//  main.c
//  Fishc_P59
//
//  Created by 孙晨 on 2019/11/17.
//  Copyright © 2019年 孙晨. All rights reserved.
//

#include <stdio.h>

/*
void main(){
    FILE *fp;
    fp = fopen("/Users/sunchen/Downloads", "r");
    if (fp) {
        printf("open success!\n");
    }
    else
    {
        printf("open failure!\n");
    }
}
*/

/*
void main(){
    FILE *fp;
    char ch, filename[20];
    
    printf("please input the filename:\n");
    scanf("%s", filename);
    
    fp = fopen(filename, "w");
    if (!(fp)) {
        printf("open failure!");
    }
    printf("please input the sentences:\n");
    ch = getchar();
    ch = getchar(); // 这里的getchar是接收'\n'
    while (ch!='\n') {
        fputc(ch, fp);
        ch = getchar();
    }
    fclose(fp);
}
*/

/*
void main(){
    FILE *fp;
    char ch = 'q';
    
//    printf("please input the filename:\n");
//    scanf("%s", filename);
    
    fp = fopen("/Users/sunchen/Downloads/c.txt", "r");
    if (!(fp)) {
        printf("open failure!");
    }

    while (!feof(fp)) {
        ch = fgetc(fp);
        putchar(ch);
    }
    fclose(fp);
}
*/

/*
void main(){
    char ch, temp;
    printf("please input a char:\n");
    
    ch = getchar();
    temp = getchar();
//    printf("%d\n", !('A'<=ch && ch<='z') || 'Z'<ch && ch< 'a');
    while (!(('a'<=ch && ch<='z') || ('A'<=ch && ch<='Z'))) {
        printf("please input a char:\n");
        ch = getchar();
        temp = getchar();
    }
    
    if (ch & 32) {
        ch = ch & 223;  // 按位进行与运算
    }
    else
    {
        ch = ch | 32;   // 按位进行或运算
    }
    
    putchar(ch);
    putchar('\n');
}
*/

// 通过异或运算，交换a,b两个变量的值-->异或运算：同值为0，异值为1
/*
void main(){
    int a = 3, b = 4;
    a = a^b;
    b = b^a;
    a = a^b;
    printf("a = %d, b = %d\n", a, b);
}
*/

//  左移；右移运算；左移一位十进制*2，右移一位十进制/2； 同时溢出的话舍弃

//  在右移运算时，对于有符号数，左边补1；对于无符号数，左边补0；

/*
void main(){
    char a = -2;
    a = a>>2;
    printf("%d\n", a);
}
*/


//  取出一个char的2～5位
/*
void main(){
    char a = 127, b;
    
    a = a >> 2;
    
    b = a & ~((~0)<<4);
    printf("%d\n", b);
    
}
*/


//  循环移位

void main(){
    unsigned char a = 54, b, c;
    int bits;
    b = a >> 1;
    c = b << 1;
    printf("please input the bit wanted move:\n");
    scanf("%d", &bits);
    for (; bits>0; bits--) {
        if (a == c) {
            a = b & 127;
        }
        else
        {
            a = b | 128;
        }
        b = a >> 1;
        c = b << 1;
    }
    printf("the result of bit-moving: %d\n", a);
}
