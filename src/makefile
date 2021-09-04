IDIR =../include
CC=gcc
CFLAGS=-I$(IDIR)

ODIR=../bin
LDIR =../lib

LIBS=-lm

_DEPS = func.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = init.exe eventManager.exe module.exe
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.exe: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

init: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)
