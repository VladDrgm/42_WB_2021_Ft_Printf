/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:23:16 by vdragomi          #+#    #+#             */
/*   Updated: 2021/07/04 14:01:13 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	The strlcat() functions concatenates strings respectively. The strlcat()
**	function appends the NUL-terminated string src to the end of dst. It will
**	append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.
*/

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	char	*source;

	source = (char *)src;
	if (size <= ft_strlen(dest))
	{
		return (size + ft_strlen(source));
	}
	i = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0' && i + 1 < size)
	{
		dest[i] = source[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest) + ft_strlen(&source[j]));
}

/*	For strlcat() that means the total length of dst plus the length of src.
**	While this may seem somewhat confusing, it was done to make truncation
**	detection simple.
*/