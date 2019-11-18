//
//  del_char.c
//  Fishc_P32
//
//  Created by 孙晨 on 2019/11/11.
//  Copyright © 2019年 孙晨. All rights reserved.
//

#include "stdio.h"

void del_char(char str[], char c){
    int i, j = 0;
    for (i = 0; str[i]!='\0'; i++) {
        if (str[i] != c) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}
