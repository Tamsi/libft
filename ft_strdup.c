/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbesson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:45:15 by tbesson           #+#    #+#             */
/*   Updated: 2021/11/24 16:46:33 by tbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		i;
	int		len;

	len = ft_strlen(src);
	dest = malloc(sizeof(char) * len + 1);
	i = -1;
	while (src[++i])
		dest[i] = (char)src[i];
	dest[i] = '\0';
	return (dest);
}
