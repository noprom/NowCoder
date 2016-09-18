//
//  main.cpp
//  成绩排序
//
//  Created by noprom on 9/18/16.
//  Copyright © 2016 tyee.noprom@qq.com. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <string>
#define MAX_N 10000

typedef struct {
    std::string name;
    int score;
    int id;
} Score;

Score scoreList[MAX_N];

int cmp_asc(const Score &a, const Score &b) {
    if (a.score < b.score) {
        return 1;
    } else if (a.score == b.score) {
        if (a.id < b.id) {
            return 1;
        } else {
            return 0;
        }
    }
    return 0;
}

int cmp_desc(const Score &a, const Score &b) {
    if (a.score > b.score) {
        return 1;
    } else if (a.score == b.score) {
        if (a.id < b.id) {
            return 1;
        } else {
            return 0;
        }
    }
    return 0;
}

int main(int argc, const char * argv[]) {
    int n, type;
    while (scanf("%d", &n) != EOF) {
        scanf("%d\n", &type);
        
        // cin
        for (int i = 0; i < n; i++) {
            std::cin >> scoreList[i].name;
            std::cin >> scoreList[i].score;
            scoreList[i].id = i;
        }
        
        // sort
        std::sort(scoreList, scoreList + n, type == 0 ? cmp_desc : cmp_asc);
        
        // out
        for (int i = 0; i < n; i++) {
            std::cout << scoreList[i].name;
            std::cout << " ";
            std::cout << scoreList[i].score;
            std::cout << std::endl;
        }
    }
    return 0;
}
