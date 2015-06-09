/*
** start_game.c for  in /home/mart_4/rendu/TestPiscine/alum_last
**
** Made by Thomas Martins
** Login   <mart_4@epitech.net>
**
** Started on  Thu Feb 19 01:15:51 2015 Thomas Martins
** Last update Sun Feb 22 17:39:38 2015 Thomas Martins
*/

#include "struct.h"

int		start_game_end(t_alum *am)
{
  exit(0);
}

int		start_game(t_alum *am)
{
  char		*s;

  am->check_two = 0;
  am->check_arg = 0;
  while (1)
    {
      my_print_line(am);
      if ((get_line(am)) < 0)
      	return (-1);
      if ((my_player(am)) < 0)
	return (-1);
      if (am->result == 0)
	{
	  if ((start_game_end(am)) ==  4)
	    return (4);
	}
    }
  return (0);
}
