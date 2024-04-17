#include <unistd.h>

void ft_putendl_fd(char *s, int fd)
{
    write(fd, s, ft_strlen(s));
    write(fd, "\n", 1);
}

int main() {
    char *text = "Hello, world!\n";
    int fd = 1;
    ft_putendl_fd(text, fd);
    return 0;
}
