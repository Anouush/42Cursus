/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalsty <angalsty@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 12:48:43 by angalsty          #+#    #+#             */
/*   Updated: 2023/01/12 14:41:02 by angalsty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*read_line(int fd, char *line)
{
	char	*buf;
	int		i;

	buf = (char *)malloc (BUFFER_SIZE + 1);
	if (!buf)
		return (0);
	i = 1;
	while (!ft_strchr(line, '\n') && i != 0)
	{
		i = read(fd, buf, BUFFER_SIZE);
		if (i == -1)
		{
			free (buf);
			return (0);
		}
		buf[i] = '\0';
		line = ft_strjoin1(line, buf);
	}
	free (buf);
	return (line);
}

char	*get_line(char *text)
{
	int		i;
	char	*line;

	i = 0;
	if (!text[0])
		return (0);
	while (text[i] && text[i] != '\n')
	i++;
	line = (char *) malloc (sizeof(char) * (i + 2));
	if (!line)
		return (0);
	i = 0;
	while (text[i] && text[i] != '\n')
	{
		line[i] = text [i];
		i++;
	}
	if (text[i] == '\n')
	{
		line[i] = text[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*save_text(char *text)
{
	int		i;
	int		y;
	char	*str;

	i = 0;
	while (text[i] && text[i] != '\n')
	i++;
	if (!text[i])
	{
		free (text);
		return (0);
	}
	str = (char *) malloc (sizeof(char) * ft_strlen(text) + 1);
	if (!str)
		return (0);
	i++;
	y = 0;
	while (text[i] != '\0')
	{
		str[y++] = text [i++];
	}
	str[y] = '\0';
	free (text);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*save;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	save = read_line(fd, save);
	if (!save)
		return (0);
	line = get_line(save);
	save = save_text(save);
	return (line);
}
/*
#include <stdlib.h>
#include <fcntl.h>

int	main(void)
{
	char	*str;
	int	fd;
	fd = open ("get_next_line.c", O_RDONLY);

	str = get_next_line(fd);
	int	i = 0;
	while (i < 20)
	{
	printf("%s", str);
	str = get_next_line(fd);
	i++;
	}*/
