/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:21:10 by vdragomi          #+#    #+#             */
/*   Updated: 2021/07/04 14:00:25 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	The memmove() function copies n bytes from memory area src to memory area
**	dest. The memory areas may overlap: copying takes place as though the bytes
**	in src are first copied into a temporary array that does not overlap src or
**	dest, and the bytes are then copied from the temporary array to dest.
*/

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;
	char	*dst_p;

	i = 0;
	dst_p = (char *)dest;
	if (dst_p > (char *)src)
	{
		while (len > 0)
		{
			dst_p[len - 1] = ((char *)src)[len - 1];
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			dst_p[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dst_p);
}
