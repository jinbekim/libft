/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinbekim <jinbekim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 20:02:16 by jinbekim          #+#    #+#             */
/*   Updated: 2020/12/22 22:44:27 by jinbekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static int	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	i;

	i = 0;
	dstlen = ft_strlen(dst);
	if (dstlen >= dstsize)
		return (ft_strlen(src) + dstsize);
	while ((dstsize > dstlen + i + 1) && src[i])
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + i);
}
