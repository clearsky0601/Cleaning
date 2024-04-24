//
// Created by Tommy Song on 2024/4/20.
//
#include <stdio.h>

// 递归计算阶乘的函数
int factorial(int n) {
    // 基本情况：如果 n 是 0 或 1，则阶乘为 1
    if (n == 0 || n == 1) {
        return 1;
    }
        // 递归情况：计算 n * (n-1) 的阶乘
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num = 5;
    int result = factorial(num);
    printf("The factorial of %d is %d\n", num, result);
    return 0;
}
