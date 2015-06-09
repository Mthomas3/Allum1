/*
** start_game.c for  in /home/mart_4/rendu/TestPiscine/alum_last
**
** Made by Thomas Martins
** Login   <mart_4@epitech.net>
**
** Started on  Thu Feb 19 01:15:51 2015 Thomas Martins
** Last update Thu Feb 19 01:17:07 2015 Thomas Martins
*/

#include "struct.h"

int		start_game_end(t_alum *am)
{
  char		*exit_p;
  char		*play;

  my_putstr("\033[01;36m");
  my_putstr("Fin de la partie! Bravo à vous!!\n");
  my_putstr("Allez, une autre partie j'espère? :)\n");
  my_putstr("\033[0m");
  if (!(play = get_next_line(0)))
    return (-1);
  if ((my_strncmp(play, "replay", 6)) == 0)
    {
      init_line(am);
      start_game(am);
    }
  if ((my_strncmp(exit_p, "exit", 4)) == 0)
    return (4);
  else
    exit(1);
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
