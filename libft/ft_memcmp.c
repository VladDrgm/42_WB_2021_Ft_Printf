/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:21:02 by vdragomi          #+#    #+#             */
/*   Updated: 2021/07/04 14:00:20 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	The memcmp() function compares the first n bytes (each interpreted as
**	unsigned char) of the memory areas s1 and s2.
**
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		*str1;
	unsigned char		*str2;
	size_t				i;

	if (n == 0)
	{
		i = 0;
		return ((int)i);
	}
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/*
**	The  memcmp()  function  returns  an integer less than, equal to, or greater
*	than zero if the first n bytes of s1 is
**	found, respectively, to be less than, to match, or be greater than the first
**	n bytes of s2.
*/