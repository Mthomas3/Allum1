/*
** print_pvp_one.c for  in /home/mart_4/rendu/TestPiscine/alum_last
**
** Made by Thomas Martins
** Login   <mart_4@epitech.net>
**
** Started on  Thu Feb 19 02:46:47 2015 Thomas Martins
** Last update Thu Feb 19 02:47:21 2015 Thomas Martins
*/

#include "struct.h"

void	print_ask_pvp_one(t_alum *am)
{
  my_putstr("\033[01;36m");
  my_putstr(am->name_1);
  my_putstr(" Combien veux-tu enlever d'allumettes?\n");
}

void	print_ask_pp_one(t_alum *am)
{
  my_putstr("Veuillez choisir la ligne ");
  my_putstr(am->name_1);
  my_putchar('\n');
}

void	error_line_pvp(t_alum *am, t_jcj *jcj)
{
  jcj->cpt_check++;
  my_putstr("mauvais choix\n");
  delete_first_player(am, jcj);
}

void	end_of_pvp(t_alum *am)
{
  my_putstr("Too many error, end of program! sorry\n");
  exit(0);
}
