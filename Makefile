CC = clang
WARNINGS = -Wall -Werror -Wfloat-equal -Wformat -g
CFLAGS = -std=c99 -I./include
LDLIBS = -lm
exe = clap

all: $(exe)

$(exe):
	$(CC) $(WARNINGS) $(CFLAGS) src/clap.c -o $@
