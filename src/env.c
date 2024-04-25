//
// Created by Tommy Song on 2024/4/25.
//
#include <stdio.h>

int main(void){
    extern char **environ;
    int i;
    for(i=0; environ[i]!=NULL; i++)
        printf("%s\n", environ[i]);
    return 0;
}
