char    *ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	while (s1[i] && s2[i])
	{
		s2[i] = s1[i];
		i++;
	}
	return(s2);
}

