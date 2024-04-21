
char *ft_substr(char const *s, unsigned int start, size_t len)
{
  char *subs;
  unsigned int	i;
  
  subs =(char *)malloc(sizeof(char) * (len + 1));
  if (!subs)
    return (NULL);
  
	i = 0;
	while (s[i] != '\0' && i < len)
	{
		subs[i] = s[start + i];
		i++;
	}
	subs[i] = '\0';
	return (subs);
}
int main()
{
  const char string[] = "This is Dilara";
  printf("%d", ft_substr(string,4, 4));
}
