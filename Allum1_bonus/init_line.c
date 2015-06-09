/*
** init_line.c for  in /home/mart_4/rendu/TestPiscine/alum_last
**
** Made by Thomas Martins
** Login   <mart_4@epitech.net>
**
** Started on  Sun Feb 15 12:44:30 2015 Thomas Martins
** Last update Tue Feb 17 21:45:54 2015 Thomas Martins
*/

#include "struct.h"

int	init_line(t_alum *am)
{
  if ((am->line = malloc(8 * sizeof(int))) == NULL)
    return (-1);
  am->line[0] = 1;
  am->line[1] = 3;
  am->line[2] = 5;
  am->line[3] = 7;
  am->result = 16;
  return (0);
}
