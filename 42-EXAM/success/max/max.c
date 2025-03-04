int		max(int* tab, unsigned int len)
{
	int i = 0;
	int j = 0;

	if(!len)
		return(0);
	j = tab[0];
	while (i < len)
	{
		if(tab[i] > j )
			j = tab[i];
		i++;
	}
	return(j);
}

