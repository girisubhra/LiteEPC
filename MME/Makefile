############################################################################
#               Makefile for MME						
#	
#		TO BUILD: make all
#		TO REBUILD: make clean; make all
#          @@Written by Subhra Prakash Giri
#############################################################################

CC		= gcc
CFLAGS 		= $(EXTRA_DEFINE) -g -c -o 
LIB 		= -lpthread
INCLUDE 	= -Ihdr
OBJDIR 		= obj
SGWOBJ          = obj
SRCDIR 		= src
HDRDIR 		= hdr
TARGET 		= mme
EXTRA_DEFINE  += -DTEST_043 
TARGET_OBJ = test.o
SOURCES=$(SRCDIR)/mme.c\
	$(SRCDIR)/mme_messages.c\
	$(SRCDIR)/test.c
OBJS=$(SOURCES:.c=.o)
.c.o:$(SOURCES) 
	$(CC) $(CFLAGS) $@ $(INCLUDE) $< $(DEFS)

$(TARGET): $(OBJS) 
	$(CC) $(OBJS) -o $@
	mv $(SRCDIR)/*.o $(OBJDIR)

all: $(TARGET) 
clean:
	rm -f $(TARGET)
	rm -f $(OBJDIR)/*.o
	rm -f $(SRCDIR)/*.o
