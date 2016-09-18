//
//  main.cpp
//  约数的个数
//
//  Created by noprom on 9/18/16.
//  Copyright © 2016 tyee.noprom@qq.com. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    int n, num, count;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        count = 0;
        scanf("%d", &num);
        if (num > 0) {
            int j;
            for (j = 1; j < sqrt(num); j++) {
                if (num % j == 0) {
                    count += 2;
                }
            }
            if (j * j == num) {
                count ++;
            }
        } else {
            count = 1;
        }
        printf("%d\n", count);
    }
    return 0;
}