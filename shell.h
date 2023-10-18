#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>

#define DELIM " \t\n"
extern char **environ;

char *rdl_x(void);
char **tkn_x(char *line);
char *g_xenv(char *var);
char *h_xpth(char *cmnd);
int _execute(char **command, char **argv, int ndx);

void xt_sh(char **cmnd, int status);
void hnd_btx(char **cmnd, char **agrv, int status, int ndx);
int z_btx(char *cmnd);

void free_array_2(char **arr);
void pr_xerr(char *nm, char *xcmd, int ndx);
char *int_asc(int u);
void rvrs(char *xst, int lnght);

char *_strdup(const char *str);
int _strcmp(char *st1, char *st2);
int _strlen(char *st);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);

#endif
