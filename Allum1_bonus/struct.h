/*
** struct.h for  in /home/mart_4/rendu/TestPiscine/alum_last
**
** Made by Thomas Martins
** Login   <mart_4@epitech.net>
**
** Started on  Sun Feb 15 15:29:49 2015 Thomas Martins
** Last update Thu Feb 19 02:39:02 2015 Thomas Martins
*/

#ifndef STRUCT_H
# define STRUCT_H_
# define SIZE 1

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

typedef struct	s_alum
{
  int		*line;
  int		nb;
  int		my_line;
  int		result;
  int		nb_jcj;
  int		my_line_jcj;
  char		*name_1;
  char		*name_2;
  int		check_two;
  int		check_arg;
}		t_alum;

typedef struct	s_next
{
  char		buffer[SIZE + 1];
  char		*str;
  int		j;
}		t_next;

typedef struct	s_jcj
{
  int		cpt_check;
  int		cpt_check_two;
  int		nb;
}		t_jcj;

char		*get_next_line(const int fd);
void		end_of_pvp(t_alum *am);

#endif
