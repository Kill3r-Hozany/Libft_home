#include "libft.h"
#include "ft_strlen.c"
/*
void  protecao(const char *entrada1, const char *entrada2)
{
  if (entrada1 == NULL || entrada2 == NULL)
    retu
}*/
char  *ft_strtrim(char *s1, char const *set)
{
  int tamanho_s;

  tamanho_s = ft_strlen(s1);
  //tamanho_set = ft_strlen(set);
  int i;
  int y;

  y = 0;
  i = 0;
  while (s1[i])
  {
    if (s1[i] == set[y])
    {
      i++;
    }

  }
  return (s1);
}

int main(void)
{
  char  v[] = "aBanana";
  char  b[] = "a";

  printf("%s",ft_strtrim(v, b));

}
