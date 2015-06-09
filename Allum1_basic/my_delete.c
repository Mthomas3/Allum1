/*
** my_delete.c for  in /home/mart_4/rendu/TestPiscine/alum_last
**
** Made by Thomas Martins
** Login   <mart_4@epitech.net>
**
** Started on  Sun Feb 15 13:19:44 2015 Thomas Martins
** Last update Thu Feb 19 21:52:04 2015 Thomas Martins
*/

#include "struct.h"

void	my_delete(t_alum *am)
{
  am->line[am->my_line - 1] -= am->nb;
  am->result -= am->nb;
  my_print_line(am);
}

int	print_two_exit(t_alum *am, char *new)
{
  exit(0);
}

int	print_two(t_alum *am)
{
  char	*new;

  if (am->result == 1)
    if ((print_two_exit(am, new)) < 0)
      return (-1);
  my_putchar('\n');
  my_putstr("\033[01;35m");
  my_putstr("Le joueur numéro deux joues!\n");
  my_putstr("\033[0m");
  am->result -= 1;
  return (0);
}

int	print_first(t_alum *am)
{
  char	*new;

  if (am->result == 1)
    if ((print_two_exit(am, new)) < 0)
      return (-1);
  my_putchar('\n');
  my_putstr("\033[01;35m");
  my_putstr("Le joueur numéro deux joues!\n");
  my_putstr("\033[0m");
  am->result -= 2;
  return (0);
}

int	my_player(t_alum *am)
{
  int	a;

  a = -1;
  while (++a <= 3)
    {
      if ((am->line[a] % 2) == 0 && am->line[a] != 0 && am->result != 0)
	{
	  am->line[a] -= 2;
	  if ((print_first(am)) < 0)
	    return (-1);
	  return (1);
	}
      else if ((am->line[a] % 2) != 0 && am->line[a] != 0 && am->result != 0)
	{
	  am->line[a] -= 1;
	  if ((print_two(am)) < 0)
	    return (-1);
	  return (1);
	}
    }
  return (0);
}
