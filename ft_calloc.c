void *ft_calloc(size_t nitems, size_t size)
{
    size_t i = 0;
    size_t totalsize = size * nitems;
    
    if(size == 0 || nitems == 0)
    {
        return NULL;
    }
    char *outcome;
    outcome = malloc(totalsize);
    if (!outcome)
		return (NULL);
	
	while(i < totalsize)
	{
	   outcome[i] = 0;
	   i++;
	}
	return outcome;
}
