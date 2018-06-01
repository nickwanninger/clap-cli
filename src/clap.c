#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>

#define clapstr L" 👏 "

void
printchar(char c) {
	if (c == ' ') {
		wprintf(L"%ls", clapstr);
	} else {
		wprintf(L"%lc", c);
	}
}


int
main(int argc, char **argv) {
	argv++;
	argc--;
	setlocale(LC_ALL, "");
	char c = 0;
	if (argc == 0) {
		while (!feof(stdin)) {
			c = fgetc(stdin);
			printchar(c);
		}
		return 0;
	}
	int		i = 0;
	for (i = 0; i < argc; i++) {
		while ((c = *argv[i]++)) {
			printchar(c);
		}
		if (i != argc - 1) {
			wprintf(L"%ls", clapstr);
		}
	}
	printf("\n");
	return 0;
}
