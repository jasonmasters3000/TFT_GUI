# Make a jui library
# make a hal library
# for test, link together with test ile
#
# this is the hardware library to use to draw
HW_LIB=-ldrawtext
CXX=g++
CXXFLAGS=-g -I../jui/inc -I../hal
LD=g++
LDFLAGS=-g -L../jui -L../hal -ljui $(HW_LIB)

# TODO libraries and dependencies on them
# and then pat subst to get correct LDFLAG
SRCS=windemo.cpp demo.cpp

all: demo windemo

%.o: %.cpp $(SRCS)
	$(CXX) -c -o $@ $< $(CXXFLAGS) 

demo: demo.o
	$(LD) -o $@ $^ $(LDFLAGS)

windemo: windemo.o 
	$(LD) -o $@ $^ $(LDFLAGS)


.PHONY: clean

clean:
	rm -f *.o *~ core *.exe

