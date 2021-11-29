/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbesson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:21:28 by tbesson           #+#    #+#             */
/*   Updated: 2021/11/26 12:44:33 by tbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	mlen;
	size_t	i;

	mlen = len;
	i = 0;
	if (ft_strlen(s) - start > len)
		mlen = ft_strlen(s) - start;
	else if (len > ft_strlen(s))
		mlen = ft_strlen(s);
	if (start > ft_strlen(s))
		mlen = 0;
	str = malloc(mlen + 1);
	if (!str)
		return (NULL);
	while (s[start + i] && i < len && start < ft_strlen(s))
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
