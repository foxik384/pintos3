#ifndef USERPROG_SYSCALL_H
#define USERPROG_SYSCALL_H

#include "userprog/process.h"

void add_to_list(int pid);
int if_elem_in_list(int pid);
void exit(int value);

void syscall_init (void);

#endif /* userprog/syscall.h */
