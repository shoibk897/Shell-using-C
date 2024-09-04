#include "shell.h"

int main() {
    if (isatty(STDIN_FILENO)) {
        shell();
    }
    return 0;
}
