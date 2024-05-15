/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 18:17:32 by yoropeza          #+#    #+#             */
/*   Updated: 2023/11/29 20:26:28 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_strdup(char *src)
{
	char	*tab;
	int		i;

	i = 0;
	tab = (char *) malloc (sizeof(char) * (ft_strlen(src) + 1));
	if (!tab)
		return (0);
	while (*src)
		tab[i++] = *src++;
	tab[i] = '\0';
	return (tab);
}
