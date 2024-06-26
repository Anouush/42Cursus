/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 20:15:34 by angalsty          #+#    #+#             */
/*   Updated: 2024/02/24 20:39:50 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"
void	ft_free(void *data)
{
	free (data);
}

void	ft_free3(char *str1, char *str2, char *str3)
{
	free (str1);
	free (str2);
	free (str3);
}

void	ft_free_split(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	ft_free_matrix(char **array)
{
	int	i;

	if (array)
	{
		i = 0;
		while (array[i] != NULL)
		{
			free(array[i]);
			i++;
		}
		free(array);
		array = NULL;
	}
}

void	ft_free_minishell(t_data *data)
{
	data->input_error = 0;
	ft_lstclear(&data->command, ft_free);
	ft_lstclear(&data->parameter, ft_free);
	free(data->input);
}
