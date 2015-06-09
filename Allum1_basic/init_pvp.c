/*
** init_pvp.c for  in /home/mart_4/rendu/TestPiscine/alum_last
**
** Made by Thomas Martins
** Login   <mart_4@epitech.net>
**
** Started on  Thu Feb 19 02:48:35 2015 Thomas Martins
** Last update Thu Feb 19 02:48:57 2015 Thomas Martins
*/

#include "struct.h"

int	init_story_pvp(t_alum *am)
{
  my_putstr("\033[01;33m");
  my_putstr("Bien le bonjour dans le mode PVP!\n");
  my_putstr("Que le meilleur gagne :) ");
  my_putstr("Saisir le nom du premier joueur s'il vous plaît!\n");
  if (!(am->name_1 = get_next_line(0)))
    return (-1);
  my_putstr("Bonjour ");
  my_putstr(am->name_1);
  my_putstr("j'espère que vous allez bien!!\n");
  my_putstr("Saisir le nom du deuxième joueur s'il vous plaît!\n");
  if (!(am->name_2 = get_next_line(0)))
    return (-1);
  my_putstr("Bonjour à vous aussi ");
  my_putstr(am->name_2);
  my_putstr(" j'espère que vous êtes pret pour la game! :D\n");
  my_putstr("Good game!\n");
  my_putstr("Veuillez entrer PLAY pour jouer sinon EXIT\n");
  my_putstr("\033[0m");
   return (0);
}

int	my_delete_pvp(t_alum *am)
{
  am->line[am->my_line_jcj - 1] -= am->nb;
  am->result -= am->nb;
  my_print_line(am);
  return (0);
}
