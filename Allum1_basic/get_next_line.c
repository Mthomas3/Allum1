/*
** get_try.c for  in /home/mart_4/rendu/TestPiscine/get_fail
**
** Made by Thomas Martins
** Login   <mart_4@epitech.net>
**
** Started on  Sat Jan 17 11:21:23 2015 Thomas Martins
** Last update Sun Jan 18 04:42:26 2015 Thomas Martins
*/

#include "struct.h"

char		*get_next_line(const int fd)
{
  t_next	next;
  static int	readd;
  static int	cpt = 0;

  next.j = 0;
  if ((next.str = malloc(sizeof(next.str) + (sizeof(char) *
					     SIZE + 1000))) == NULL)
    exit(1);
  while (next.buffer[cpt] != '\n')
    {
      if ((readd = read(fd, next.buffer, SIZE)) == -1 || readd == 0)
	return (NULL);
      cpt = 0;
      next.buffer[readd] = 0;
      while (next.buffer[cpt] != 0 && next.buffer[cpt] != '\n')
	next.str[next.j++] = next.buffer[cpt++];
    }
  if (next.buffer[cpt] == '\n')
    next.str[next.j] = '\n';
  cpt++;
  next.str[next.j] = 0;
  return (next.str);
}
