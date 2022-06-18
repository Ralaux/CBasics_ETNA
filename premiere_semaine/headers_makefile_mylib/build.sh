#!/bin/bash

echo "void my_putchar(char c);" > lib/my/libmy.a
echo "void my_putstr(const char *str);" >> lib/my/libmy.a
echo "int my_strlen(const char *str);" >> lib/my/libmy.a
echo "int my_getnbr(const char *str);" >> lib/my/libmy.a
echo "void my_putnbr(int nb);" >> lib/my/libmy.a
echo "void my_isneg(int nb);" >> lib/my/libmy.a
echo "void my_swap(int *a, int *b);" >> lib/my/libmy.a
echo "char *my_strcpy(char *dest, const char *src);" >> lib/my/libmy.a
echo "char *my_strncpy(char *dest, const char *src, int n);" >> lib/my/libmy.a
echo "int my_strcmp(const char *s1, const char *s2);" >> lib/my/libmy.a
echo "int my_strncmp(const char *s1, const char *s2, int n);" >> lib/my/libmy.a
echo "char *my_strcat(char *dest, const char *src);" >> lib/my/libmy.a
echo "char *my_strncat(char *dest, const char *src, int nb);" >> lib/my/libmy.a
echo "char *my_strstr(char *str, const char *to_find);" >> lib/my/libmy.a
echo "char *my_strdup(const char *src);" >> lib/my/libmy.a

cat lib/my/libmy.a
