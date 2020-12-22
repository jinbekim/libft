/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinbekim <jinbekim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 23:38:08 by jinbekim          #+#    #+#             */
/*   Updated: 2020/12/22 22:46:29 by jinbekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*cst;
	char		*crc;

	i = 0;
	cst = dst;
	crc = (char *)src;
	while (i < n)
	{
		cst[i] = crc[i];
		i++;
	}
	return (dst);
}
