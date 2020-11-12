#include <stdio.h>

void other() {
    printf("I want to sleep :(");
    fflush(stdout);
}

void input() {
    char buffer[10];
    gets(buffer);
    puts(buffer);
    fflush(stdout);
}

int main() {
    printf("%p\n", &other);
    input();
    return 0;
}
