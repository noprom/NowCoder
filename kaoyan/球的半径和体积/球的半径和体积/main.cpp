//
//  main.cpp
//  球的半径和体积
//
//  Created by noprom on 9/20/16.
//  Copyright © 2016 tyee.noprom@qq.com. All rights reserved.
//

#include <iostream>
#include <cmath>
#define PI acos(-1)

int main(int argc, const char * argv[]) {
    double x0, y0, z0, x1, y1, z1;
    while (~scanf("%lf %lf %lf %lf %lf %lf", &x0, &y0, &z0, &x1, &y1, &z1)) {
        double r = sqrt((x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0) + (z1 - z0) * (z1 - z0));
        printf("%.3lf %.3lf\n", r, 4.0 / 3 * PI * r * r * r);
    }
    return 0;
}
/*
 题目描述
 
 输入球的中心点和球上某一点的坐标，计算球的半径和体积
 输入描述:
 球的中心点和球上某一点的坐标，以如下形式输入：x0 y0 z0 x1 y1 z1
 
 
 输出描述:
 输入可能有多组，对于每组输入，输出球的半径和体积，并且结果保留三位小数
 
 为避免精度问题，PI值请使用arccos(-1)。
 
 输入例子:
 0 0 0 1 1 1
 
 输出例子:
 1.732 21.766
*/