//
//  main.cpp
//  质因数的个数
//
//  Created by noprom on 9/19/16.
//  Copyright © 2016 tyee.noprom@qq.com. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    long n;
    while (cin >> n) {
        double sq = sqrt(n);
        int cnt = 0;
        for (long i = 2; i <= sq; i++) {
            while (n != i) {
                if (n % i == 0) {
                    cnt ++;
                    n = n / i;
                } else {
                    break;
                }
            }
        }
        cout << cnt + 1 << endl;
    }
    return 0;
}

/*
 题目描述
 
 求正整数N(N>1)的质因数的个数。 相同的质因数需要重复计算。如120=2*2*2*3*5，共有5个质因数。
 输入描述:
 可能有多组测试数据，每组测试数据的输入是一个正整数N，(1<N<10^9)。
 
 
 输出描述:
 对于每组数据，输出N的质因数的个数。
 
 输入例子:
 120
*/