/*
** my_getnbr.c for  in /home/mart_4/TeamWork/BSQ
**
** Made by Thomas Martins
** Login   <mart_4@epitech.net>
**
** Started on  Wed Jan 14 14:13:04 2015 Thomas Martins
** Last update Wed Jan 14 14:17:15 2015 Thomas Martins
*/

int	my_getnbr(char *str)
{
  int	i;
  int	nb;
  int	c;

  c = 0;
  nb = 0;
  i = 0;
  while (str[i] == 45)
    {
      c++;
      i++;
    }
  while (str[i] >= 48 && str[i] <= 57)
    if (nb <= 2147483647)
      {
	nb = nb * 10;
	nb = nb + str[i] - 48;
	i++;
      }
    else
      return (0);
  if (c % 2 == 1)
    nb = -nb;
  return (nb);
}
