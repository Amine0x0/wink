#include <stdlib.h>
static size_t	count_words(char *s, char c)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (s[i] != '\0')
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] != '\0')
			result++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (result);
}

static char	*get_word(char *s, char c)
{
	int	len;
	char	*result;

	if (!s)
		return (NULL);
	len = 0;
	while (s[len] && s[len] != c)
	{
		len++;
	}
	result = (char *)malloc(sizeof(char) * (len +1));
	if (!result)
		return (NULL);
	len = 0;
	while (s[len] && s[len] != c)
	{
		result[len] = s[len];
		len++;
	}
	result[len] = '\0';
	return (result);
}

static char	**abort_split(char **words, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		free(words[i]);
		i++;
	}
	free(words);
	return (NULL);
}

char	**ft_split(char *s)
{
	char	**result;
	int 	i;
	int 	j;
	int 	word_count;

	if (!s)
		return (NULL);
	word_count = count_words(s, ' ');
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = -1;
	while (++j < word_count)
	{
		while (s[i] && s[i] == ' ')
			i++;
		result[j] = get_word(&s[i],' ');
		if (!result[j])
			return (abort_split(result, j));
		while (s[i] && s[i] != ' ')
			i++;
	}
	result[word_count] = NULL;
	return (result);
}

