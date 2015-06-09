/*
** get_line.c for  in /home/mart_4/rendu/TestPiscine/alum_last
**
** Made by Thomas Martins
** Login   <mart_4@epitech.net>
**
** Started on  Thu Feb 19 01:12:47 2015 Thomas Martins
** Last update Thu Feb 19 02:50:55 2015 Thomas Martins
*/

#include "struct.h"

int	init_story(void)
{
  char		*name;

  my_putstr("\033[01;33m");
  my_putstr("Bien le bonjour, pouvez-vous rentrer votre nom svp\n");
  if (!(name = get_next_line(0)))
    return (-1);
  my_putstr(":O ");
  my_putstr(name);
  my_putstr(" le meilleur AER :D\n");
  my_putstr("Les règles sont très simple");
  my_putstr(", le dernier qui prend l'allumette à perdu!\n");
  my_putstr("Bonne chance, que le meilleur gagne :)!!\n");
  my_putstr("Ecrit PLAY pour jouer ou EXIT ");
  my_putstr("pour sortir du jeu, good game!!\n");
  my_putstr("\033[0m");
  return (0);
}

void	end_of_free(t_alum *am, t_jcj *jcj)
{
  free(am);
  free(jcj);
}
