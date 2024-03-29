/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:23:39 by vdragomi          #+#    #+#             */
/*   Updated: 2021/07/04 14:01:29 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Find the needle in the haystack.	The strnstr() function locates the first
** occurrence of the null-terminated string little in the string big, where not
**more than len characters are searched.  Characters that appear after a ‘\0’
**	character are not searched.
*/

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	if (to_find[0] == '\0')
		return ((char *) str);
	i = 0;
	while (str[i] != '\0' && i < len)
	{
		if (str[i] == to_find[0])
		{
			j = 1;
			while (to_find[j] != '\0' && str[i + j] == to_find[j]
				&& (i + j < len))
				++j;
			if (to_find[j] == '\0')
				return ((char *)&str[i]);
		}
		++i;
	}
	return (0);
}
