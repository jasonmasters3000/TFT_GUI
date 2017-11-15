# Make a jui library
# make a hal library
# for test, link together with test ile
#
CXX=g++
CXXFLAGS=-g
LD=g++
LDFLAGS=-g

SUBDIRS=jui hal demo

all: $(SUBDIRS)
	for DIR in $(SUBDIRS); do \
		make -C $$DIR ; \
	done;


.PHONY: clean

clean:
	rm -f *.o *~ core demo.exe
	for DIR in $(SUBDIRS); do \
		make -C $$DIR clean ; \
	done;

