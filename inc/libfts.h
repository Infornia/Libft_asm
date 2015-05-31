/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfts.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/20 13:33:45 by mwilk             #+#    #+#             */
/*   Updated: 2015/05/31 14:46:16 by mwilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_bzero(void *mem, size_t size);
char		*ft_strcat(char *, const char *);
int			ft_isalpha(int);
int			ft_isdigit(int);
int			ft_isalnum(int);
int			ft_isascii(int);
int			ft_isprint(int);
int			ft_toupper(int);
int			ft_tolower(int);
char		*ft_puts(const char *);
int			ft_strlen(char *);
void		*ft_memset(void *, int, size_t);
void		*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
char		*ft_strdup(const char *s1);
void		ft_cat(int fd);
