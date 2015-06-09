/*
** function.c for  in /home/mart_4/rendu/TestPiscine/alum_last
**
** Made by Thomas Martins
** Login   <mart_4@epitech.net>
**
** Started on  Sun Feb 15 12:32:15 2015 Thomas Martins
** Last update Sun Feb 15 12:38:32 2015 Thomas Martins
*/

#include "struct.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	a;

  a = 0;
  while (str[a])
    {
      my_putchar(str[a]);
      a++;
    }
}

void	my_putchar_error(char c)
{
  write(2, &c, 1);
}

void	my_puterror(char *str)
{
  int	a;

  a = 0;
  while (str[a])
    {
      my_putchar_error(str[a]);
      a++;
    }
}
