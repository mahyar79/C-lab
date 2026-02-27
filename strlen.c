
#include <stdio.h>

size_t ft_strlen(const char *str){
    size_t len= 0;
    while (*str != '\0'){
        len++;
        str++;
    }
    return len;
}

int main(void) {
    printf("%zu\n", ft_strlen("hello"));
    printf("%zu\n", ft_strlen(""));
    return 0;
}
