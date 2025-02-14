#include "buildin_cmd.h"
#include "command_run.h"
#include "input_process.h"

void lsh_loop(void)
{
  char *line;
  char **args;
  int status;

  do {
    printf("> ");
    line = lsh_read_line();
    args = lsh_split_line(line);
    status = lsh_execute(args);

    free(line);
    free(args);
  } while (status);
}

int main(int argc, char *argv[])
{
  lsh_loop();

  return EXIT_SUCCESS;
}
