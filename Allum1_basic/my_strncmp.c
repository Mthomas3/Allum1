/*
** my_strncmp.c for  in /home/mart_4/rendu/TestPiscine/alum_last
**
** Made by Thomas Martins
** Login   <mart_4@epitech.net>
**
** Started on  Sun Feb 15 12:56:25 2015 Thomas Martins
** Last update Sun Feb 15 12:58:51 2015 Thomas Martins
*/

#include "struct.h"
#include <string.h>

int		my_strncmp(const char *s1, const char *s2, size_t n)
{
  size_t	i;

  i = 0;
  while (s1[i] == s2[i] && s1[i] && i < n)
    i++;
  if (i == n)
    return (0);
  return (s1[i] - s2[i]);
}
