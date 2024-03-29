/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 18:56:23 by yzisis-p          #+#    #+#             */
/*   Updated: 2022/09/12 23:11:33 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (!s)
		return (NULL);
	if ((size_t)start > ft_strlen(s) || len == 0)
		return (ft_strdup(""));
	if (len > (ft_strlen(s) - start))
		len = (ft_strlen(s) - start);
	substr = malloc(sizeof(char) * (len + 1));
	i = 0;
	if (!substr)
		return (0);
	while (len > i)
	{
		substr[i] = *(s + start + i);
		i++;
	}
	substr[i] = '\0';
	if (start == len)
		return (substr);
	if (s == substr)
		return (substr);
	return (substr);
}
