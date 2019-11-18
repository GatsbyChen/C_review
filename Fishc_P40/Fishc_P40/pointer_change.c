//
//  pointer_change.c
//  Fishc_P40
//
//  Created by 孙晨 on 2019/11/11.
//  Copyright © 2019年 孙晨. All rights reserved.
//

void pointer_change(int *p1, int *p2){
    int p;
    p = *p1;
    *p1 = *p2;
    *p2 = p;
}
