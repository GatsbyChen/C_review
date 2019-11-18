//
//  temp.c
//  Fishc_P32
//
//  Created by 孙晨 on 2019/11/11.
//  Copyright © 2019年 孙晨. All rights reserved.
//

int factorial(int n){
    static int factor = 1;
    factor *= n;
    return factor;
}

