/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alluengo <alluengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 17:37:41 by alluengo          #+#    #+#             */
/*   Updated: 2025/11/13 17:28:16 by alluengo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdint.h>

typedef struct s_list
{
	void						*content;
	unsigned long long			content_size;
	struct s_list				*next;
}	t_list;
//INT
int				ft_atoi(const char *str);
int				ft_isascii(int c);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
int				ft_strcmp(char *s1, char *s2);
int				ft_strlen(const char *str);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_tolower(int c);
int				ft_toupper(int c);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
int				ft_lstsize(t_list *lst);

//LONG
long			ft_atol(const char *str);

//CHAR
char			*ft_strcat(char *dest, char *src);
char			*ft_strchr(char *str, int c);
char			*ft_strcpy(char *dest, char *src);
char			*ft_strdup(const char *src);
char			*ft_strncat(char *dest, char *src, size_t nb);
char			*ft_strncpy(char *dest, char *src, size_t n);
char			*ft_strnstr(const char *str, const char *to_find, size_t n);
char			*ft_strrchr(const char *str, int c);
char			*ft_strstr(char *str, char *to_find);
char			*ft_substr(const char *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(const char *s1, const char *set);
char			*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char			*ft_itoa(int n);
char			**ft_split(char const *s, char c);

//VOID
void			ft_bzero(void *str, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t count);
void			*ft_memset(void *s, int c, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
void			*ft_calloc(size_t nmemb, size_t size);
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_lstadd_front(t_list **lst, t_list *new);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));

//SIZE_T
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
size_t			ft_strlcat(char *dest, const char *src, size_t size);

//T_LIST
t_list			*ft_lstnew(void *content);
t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));

#endif
