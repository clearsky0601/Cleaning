//
// Created by Tommy Song on 2024/4/20.
//
/*递归练习——求阶乘！
 *
 *
 * */


#include <stdio.h>

// 递归计算阶乘的函数
int factorial(int n) {
    // 基本情况：如果 n 是 0 或 1，则阶乘为 1
    //    递归出口
    if (n == 0 || n == 1) {
        return 1;
    }
        // 递归情况：计算 n * (n-1) 的阶乘
    else {
        return n * factorial(n - 1);
    }
}

//循环实现阶乘
unsigned long long factorial_loop(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int num = 5;
    int result = factorial(num);
    int result2 = factorial_loop(num);
    printf("测试 %d 的阶乘是 %d\n",num,result2);
    printf("The factorial of %d is %d\n", num, result);
    return 0;
}
