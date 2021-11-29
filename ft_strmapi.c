/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbesson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:59:36 by tbesson           #+#    #+#             */
/*   Updated: 2021/11/26 15:39:49 by tbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	str = malloc((ft_strlen(s) + 1) * sizeof(char));
	i = 0;
	while (*s)
	{
		str[i] = (*f)(i, *s);
		s++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
