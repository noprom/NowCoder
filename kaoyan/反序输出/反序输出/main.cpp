//
//  main.cpp
//  反序输出
//
//  Created by noprom on 9/19/16.
//  Copyright © 2016 tyee.noprom@qq.com. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    string s;
    while (cin >> s) {
        reverse(s.begin(), s.end());
        cout << s << endl;
    }
    return 0;
}

/*
 题目描述
 
 输入任意4个字符(如：abcd)， 并按反序输出(如：dcba)
 输入描述:
 题目可能包含多组用例，每组用例占一行，包含4个任意的字符。
 
 
 输出描述:
 对于每组输入,请输出一行反序后的字符串。
 具体可见样例。
 
输入例子:
Upin
cvYj
WJpw
cXOA
 
输出例子:
nipU
jYvc
wpJW
AOXc
*/