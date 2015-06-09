/*
** error.c for  in /home/mart_4/rendu/TestPiscine/alum_last
**
** Made by Thomas Martins
** Login   <mart_4@epitech.net>
**
** Started on  Wed Feb 18 22:10:22 2015 Thomas Martins
** Last update Thu Feb 19 12:12:32 2015 Thomas Martins
*/

#include "struct.h"

void	end_error(t_alum *am)
{
  my_puterror("Too many error, end of program! Sorry\n");
  exit(0);
}

void	check_error(t_alum *am)
{
  am->check_two++;
  my_putstr("Invalide choice!\n");
  get_line(am);
}

int	check_arg(t_alum *am)
{
  if (am->check_arg == 15)
    {
      my_puterror("Too many error, end of program! Sorry!\n");
      exit(1);
    }
  my_putstr("Invalide choice!\n");
  am->check_arg++;
  get_line(am);
  return (0);
}

int	number(char *str)
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    {
      if (str[a] == '-')
  	a++;
      if (str[a] < '0' || str[a] > '9')
  	return (-1);
      a++;
    }
  return (0);
}
