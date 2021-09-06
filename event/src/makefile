IDIR =../include
CC=gcc
CFLAGS=-I$(IDIR)

BINS=../bin

_LIBS = event_manager.h module.j
LIBS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = event_manager.o init.o module.o
OBJ = $(patsubst %,$(BINS)/%,$(_OBJ))


$(BINS)/%.o: %.c $(LIBS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(BINS)/event_manager: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) 

