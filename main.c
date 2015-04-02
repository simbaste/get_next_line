/*
** main.c for  in /home/simomb_s/get_next_line
**
** Made by stephanedarcy simomba
** Login   <simomb_s@epitech.net>
**
** Started on  Thu Apr  2 15:51:19 2015 stephanedarcy simomba
** Last update Thu Apr  2 15:54:15 2015 stephanedarcy simomba
*/

#include <stdio.h>
#include <stdlib.h>
#include "get_next_line.h"

int	main(int ac, char **av)
{
  char	*s;

  while (s = get_next_line(0))
    {
      printf("%s\n", s);
      free(s);
    }
  return (0);
}
