/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <korojrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:46:19 by korojrat          #+#    #+#             */
/*   Updated: 2023/02/20 13:48:47 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int		ft_atoi(const char *nptr); // TODO: ft_atoi
void	ft_bzero(void *s, size_t n); // TODO: ft_bzero
void	*ft_calloc(size_t nmemb, size_t size); // TODO: ft_calloc

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

void	*ft_memchr(const void *s, int c, size_t n); // TODO: ft_memchr
int		ft_memcmp(const void *s1, const void *s2, size_t n); // TODO: ft_memcmp
void	*ft_memmove(void *dst, const void *src, size_t n); // TODO: ft_memmove
void	*ft_memset(void *s, int c, size_t n); // TODO: ft_memset

char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t n); // TODO: strlcat
size_t	ft_strlcpy(char *dst, const char *src, size_t n);
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
char	*ft_strrchr(const char *s, int c);

int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
