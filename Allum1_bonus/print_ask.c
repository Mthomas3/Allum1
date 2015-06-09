/*
** get_init.c for  in /home/mart_4/rendu/TestPiscine/alum_last
**
** Made by Thomas Martins
** Login   <mart_4@epitech.net>
**
** Started on  Thu Feb 19 01:08:33 2015 Thomas Martins
** Last update Thu Feb 19 01:10:31 2015 Thomas Martins
*/

#include "struct.h"

void	print_ask(void)
{
  my_putstr("\033[01;36m");
  my_putstr("Combien voulez-vous d'allumettes?\n");
  my_putstr("\033[0m");
}

void	print_ask_two(void)
{
  my_putstr("\033[01;36m");
  my_putstr("Sur quelle ligne on enlève les allumettes?\n");
  my_putstr("\033[0m");
}
