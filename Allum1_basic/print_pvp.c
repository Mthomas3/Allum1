/*
** print_pvp.c for  in /home/mart_4/rendu/TestPiscine/alum_last
**
** Made by Thomas Martins
** Login   <mart_4@epitech.net>
**
** Started on  Thu Feb 19 02:44:24 2015 Thomas Martins
** Last update Thu Feb 19 02:45:16 2015 Thomas Martins
*/

#include "struct.h"

void	print_ask_pvp_two(t_alum *am)
{
  my_putstr("\033[01;34m");
  my_putstr(am->name_2);
  my_putstr(" Combien veux-tu enlever d'allumettes?\n");
}

void	print_ask_pp_two(t_alum *am)
{
  my_putstr("Veuillez choisir la ligne ");
  my_putstr(am->name_2);
  my_putchar('\n');
}

void	error_line_pvp_two(t_alum *am, t_jcj *jcj)
{
  jcj->cpt_check_two++;
  my_putstr("mauvais choix!\n");
  delete_second_player(am, jcj);
}
