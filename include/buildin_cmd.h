#ifndef LSH_SHELL_BUILTIN_H
#define LSH_SHELL_BUILTIN_H

#include <stdio.h>   // 提供FILE类型、fprintf等函数声明
#include <stdlib.h>  // 提供exit函数声明
#include <unistd.h>  // 提供chdir函数声明
#include <string.h>

/*
 * Function Declarations for builtin shell commands:
 */
int lsh_cd(char **args);
int lsh_help(char **args);
int lsh_exit(char **args);
int lsh_execute(char **args);

#endif // LSH_SHELL_BUILTIN_H
