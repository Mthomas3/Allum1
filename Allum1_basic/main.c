/*
** main.c for  in /home/mart_4/rendu/TestPiscine/alum_last
**
** Made by Thomas Martins
** Login   <mart_4@epitech.net>
**
** Started on  Sun Feb 15 12:23:36 2015 Thomas Martins
** Last update Thu Feb 19 21:50:39 2015 Thomas Martins
*/

#include "struct.h"

int		get_line(t_alum *am)
{
  char		*nb;
  char		*line;

  print_ask();
  if (!(nb = get_next_line(0)))
    return (-1);
  if ((number(nb)) < 0)
    check_arg(am);
  am->nb = my_getnbr(nb);
  print_ask_two();
  if (!(line = get_next_line(0)))
    return (-1);
  if ((number(line)) < 0)
    check_arg(am);
  am->my_line = my_getnbr(line);
  if (am->check_two < 15)
    if (am->my_line > 4 || am->my_line <= 0 ||
	am->nb > am->line[am->my_line - 1] || am->nb <= 0)
      check_error(am);
    else
      my_delete(am);
  if (am->check_two == 15 || am->check_arg == 15)
    end_error(am);
  return (0);
}

int		check_option(t_alum *am)
{
  char		*s;

  if (!(s = get_next_line(0)))
    return (-1);
  else if ((my_strncmp(s, "PLAY", 4)) == 0 || ((my_strncmp(s, "play", 4)) == 0))
      {
  	if ((init_line(am)) < 0)
  	  return (-1);
  	if ((start_game(am)) < 0 || ((start_game(am)) == 4))
  	  return (-1);
      }
    else if ((my_strncmp(s, "exit", 4)) == 0)
      return (1);
  return (0);
}

int		check_jcj(t_jcj *jcj, t_alum *am)
{
  return (0);
}

int		my_option(t_alum *am, t_jcj *jcj)
{
  if ((init_line(am)) < 0)
    return (-1);
  if ((start_game(am)) < 0)
    return (-1);
  return (0);
}

int		main(int ac, char **av)
{
  t_jcj		*jcj;
  t_alum	*am;

  (void)ac;
  (void)av;
  if (ac > 1)
    {
      my_puterror("Usage is ./allum1 \n");
      return (1);
    }
  if ((jcj = malloc(sizeof(t_jcj))) == NULL)
    return (1);
  if ((am = malloc(sizeof(t_alum))) == NULL)
    return (1);
  if ((my_option(am, jcj)) < 0)
    return (1);
  else if ((check_jcj(jcj, am)) < 0)
    return (-1);
  end_of_free(am, jcj);
  return (0);
}
