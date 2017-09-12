#include <cstdio>
#define enter clear_buffer()

void clear_buffer() {
    char c = getchar();
    while(!(c == EOF || c == '\n')) {
        c = getchar();
    }
}
