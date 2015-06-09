/*
** print_line.c for  in /home/mart_4/rendu/TestPiscine/alum_last
**
** Made by Thomas Martins
** Login   <mart_4@epitech.net>
**
** Started on  Sun Feb 15 13:07:50 2015 Thomas Martins
** Last update Thu Feb 19 21:56:39 2015 Thomas Martins
*/

#include "struct.h"

void	get_space_line(void)
{
  my_putchar(' ');
  my_putchar(' ');
  my_putchar(' ');
  my_putchar(' ');
  my_putchar(' ');
  my_putchar(' ');
}

void	get_pipe(int nb)
{
  while (nb > 0)
    {
      my_putstr(" | ");
      nb--;
    }
  my_putchar('\n');
}

void	get_space(void)
{
  my_putchar(' ');
  my_putchar(' ');
  my_putchar(' ');
  my_putchar(' ');
  my_putchar(' ');
  my_putchar(' ');
  my_putchar(' ');
  my_putchar(' ');
  my_putchar(' ');
}

void	my_print_line(t_alum *am)
{
  get_space();
  get_pipe(am->line[0]);
  get_space_line();
  get_pipe(am->line[1]);
  my_putchar(' ');
  my_putchar(' ');
  my_putchar(' ');
  get_pipe(am->line[2]);
  get_pipe(am->line[3]);
}
