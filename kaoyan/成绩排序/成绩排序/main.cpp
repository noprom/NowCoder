//
//  main.cpp
//  成绩排序
//
//  Created by noprom on 9/20/16.
//  Copyright © 2016 tyee.noprom@qq.com. All rights reserved.
//

#include <iostream>
using namespace std;

struct Stu {
    int no;
    int score;
} list[110];

int cmp(Stu &a, Stu &b) {
    if (a.score != b.score) {
        return a.score < b.score;
    }
    return a.no < b.no;
}

int main(int argc, const char * argv[]) {
    int n;
    while (~scanf("%d", &n)) {
        for (int i = 0; i < n; i++) {
            scanf("%d %d", &list[i].no, &list[i].score);
        }
        
        for (int i = 1; i < n; i++) {
            for (int j = i; j >= 1; j--) {
                if (list[j].score < list[j-1].score) {
                    Stu tmp = list[j];
                    list[j] = list[j-1];
                    list[j-1] = tmp;
                } else if (list[j].score == list[j-1].score) {
                    if (list[j].no < list[j-1].no) {
                        Stu tmp = list[j];
                        list[j] = list[j-1];
                        list[j-1] = tmp;
                    }
                }
            }
        }
        
        for (int i = 0; i < n; i++) {
            printf("%d %d\n", list[i].no, list[i].score);
        }
    }
    return 0;
}

/*
 题目描述
 
 用一维数组存储学号和成绩，然后，按成绩排序输出。
 输入描述:
 输入第一行包括一个整数N(1<=N<=100)，代表学生的个数。
 接下来的N行每行包括两个整数p和q，分别代表每个学生的学号和成绩。
 
 
 输出描述:
 按照学生的成绩从小到大进行排序，并将排序后的学生信息打印出来。
 如果学生的成绩相同，则按照学号的大小进行从小到大排序。
 
 输入例子:
 3
 1 90
 2 87
 3 92
 
 输出例子:
 2 87
 1 90
 3 92
*/