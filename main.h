/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/27 05:00:57 by vchaillo          #+#    #+#             */
/*   Updated: 2015/06/01 18:32:49 by mwilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <ctype.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <math.h>

int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_islower(int c);
int		ft_isupper(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	ft_putchar(char c);
void	ft_bzero(void *s, size_t n);
int		ft_puts(const char *s);
char	*ft_strcat(char *restrict s1, const char *restrict s2);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memalloc(size_t len);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
char	*ft_strdup(const char *s1);
char	*ft_strcpy(char *, const char *);
char	*ft_strncpy(char *s1, const char *s2, size_t n);
char	*ft_strchr(const char *s1, int c);
char	*ft_strnew(size_t);
void	ft_cat(int fd);
int		ft_abs(int c);

#endif
