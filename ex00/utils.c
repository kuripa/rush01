#include <unistd.h>

void ft_putchar(char c) { write(1, &c, 1); }

void ft_putnbr(int nbr) {
  if (nbr < 0) {
    ft_putchar('-');
    ft_putnbr(-nbr);
  } else if (nbr > 9) {
    ft_putnbr(nbr / 10);
    ft_putnbr(nbr % 10);
  } else {
    ft_putchar(nbr + '0');
  }
}

void split_string(char *hints, char hints_arr[4][4]) {
  int i = 0;
  int j = 0;
  if (hints) {

    while (i < 4 && *hints) {
      j = 0;
      while (j < 4) {
        if (*hints >= '0' && *hints <= '9') {
          hints_arr[i][j] = *hints;
          j++;
        }
        hints++;
      }
      i++;
    }
  }
}
