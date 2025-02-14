#ifndef INPUT_PROCESS_H
#define INPUT_PROCESS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 宏定义
#define LSH_RL_BUFSIZE 1024
#define LSH_TOK_BUFSIZE 64
#define LSH_TOK_DELIM " \t\r\n\a"

// 函数声明
char *lsh_read_line(void);
char *lsh_read_line2(void);
char **lsh_split_line(char *line);

#endif // INPUT_PROCESS_H
