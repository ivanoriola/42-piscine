/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <ioriola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:20:11 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/27 13:18:46 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		final_length(char **strings, int size, int sep_length)
{
	int	final_length;
	int	i;

	final_length = 0;
	i = 0;
	while (i < size)
	{
		final_length += ft_str_len(strings[i]);
		final_length += sep_length;
		i++;
	}
	final_length -= sep_length;
	return (final_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_length;
	int		i;
	char	*str_head;
	char	*str;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	full_length = final_length(strs, size, ft_str_len(sep));
	if (!(str = (char *)malloc((full_length + 1) * sizeof(char))))
		return (0);
	str_head = str;
	i = 0;
	while (i < size)
	{
		ft_strcpy(str_head, strs[i]);
		str_head += ft_str_len(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(str_head, sep);
			str_head += ft_str_len(sep);
		}
		i++;
	}
	*str_head = '\0';
	return (str);
}
