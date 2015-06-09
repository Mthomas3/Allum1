/*
** jcj.c for  in /home/mart_4/rendu/TestPiscine/alum_last
**
** Made by Thomas Martins
** Login   <mart_4@epitech.net>
**
** Started on  Wed Feb 18 09:25:24 2015 Thomas Martins
** Last update Thu Feb 19 02:50:09 2015 Thomas Martins
*/

#include "struct.h"

int	delete_second_player(t_alum *am, t_jcj *jcj)
{
  char	*nb;
  char	*line;

  print_ask_pvp_two(am);
  if (!(nb = get_next_line(0)))
    return (-1);
  if (!(am->nb_jcj = my_getnbr(nb)))
    return (-1);
  print_ask_pp_two(am);
   if (!(line = get_next_line(0)))
    return (-1);
  am->my_line_jcj = my_getnbr(line);
  if (jcj->cpt_check_two < 15)
    if (am->my_line_jcj > 4 || am->my_line_jcj <= 0 ||
	am->nb_jcj > am->line[am->my_line_jcj - 1] || am->nb_jcj <= 0)
      error_line_pvp_two(am, jcj);
  else
    my_delete_pvp(am);
  if (jcj->cpt_check_two == 15)
    end_of_pvp(am);
  my_putstr("\033[0m");
  return (0);
}

int	delete_first_player(t_alum *am, t_jcj *jcj)
{
  char	*nb;
  char	*line;

  print_ask_pvp_one(am);
  if (!(nb = get_next_line(0)))
    return (-1);
  am->nb = my_getnbr(nb);
  print_ask_pp_one(am);
   if (!(line = get_next_line(0)))
    return (-1);
  am->my_line = my_getnbr(line);
  if (jcj->cpt_check < 15)
    if (am->my_line > 4 || am->my_line <= 0 ||
	am->nb > am->line[am->my_line - 1] || am->nb <= 0)
      error_line_pvp(am, jcj);
    else
      my_delete(am);
  if (jcj->cpt_check == 15)
    end_of_pvp(am);
  my_putstr("\033[0m");
  return (0);
}

int	start_game_pvp(t_alum *am, t_jcj *jcj)
{
  char	*s;

  jcj->cpt_check = 0;
  jcj->cpt_check_two = 0;
  while (1)
    {
      my_print_line(am);
      if ((delete_first_player(am, jcj)) < 0)
	return (-1);
      if ((delete_second_player(am, jcj)) < 0)
	return (-1);
    }
  return (0);
}

int	check_option_pvp(t_alum *am, t_jcj *jcj)
{
  char	*s;

  if (!(s = get_next_line(0)))
    return (-1);
  if ((my_strncmp(s, "help", 4)) == 0)
    {
      if ((init_story_pvp(am)) < 0)
	return (-1);
    }
  else if ((my_strncmp(s, "PLAY", 4)) == 0)
    {
      if ((init_line(am)) < 0)
	return (-1);
      if ((start_game_pvp(am, jcj)) < 0)
	return (-1);
    }
  else if ((my_strncmp(s, "EXIT", 4)) == 0)
    return (-1);
  return (0);
}

int	start_game_call(t_alum *am, t_jcj *jcj)
{
  if ((init_story_pvp(am)) < 0)
    return (-1);
  if ((init_line(am)) < 0)
    return (-1);
  if ((check_option_pvp(am, jcj)) < 0)
    return (-1);
  return (0);
}
