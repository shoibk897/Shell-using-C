#include "shell.h"

int main() {
	
	if (isatty(STDIN_FILENO) == 1) {
		shell();
	}	
	
	return 0;	
}
