char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  char *result;
  unsigned int i;
  unsigned int len;
  
  len= ft_strlen(s);
  result =(char *)malloc(sizeof(char) * (len +1));
  if(!result)
    return (NULL);
  while(i < len)
  {
    result[i] = (*f)(i, s[i]);
    i++;
  }
  result[i] = '\0';
  return (result);
}

int main()
{
   char *increment_char(unsigned int i, char c)
{
  return c + 1;
} 
  char str[] = "Hello";
  char *result;
  result = ft_strampi(str, increment_char);
  printf("%s", result);
}
