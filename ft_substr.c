/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:23:05 by jait-chd          #+#    #+#             */
/*   Updated: 2025/04/26 04:18:58 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	s_len;
	size_t	i;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	i = 0;
	if (start >= s_len)
		return (ft_strdup(""));
	if (len < s_len - start)
		str = (char *)malloc((len + 1) * sizeof(char));
	else
		str = (char *)malloc((s_len - start + 1) * sizeof(char));
	if (str == 0)
		return (0);
	while (i < len && s[start])
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = 0;
	return (str);
}

