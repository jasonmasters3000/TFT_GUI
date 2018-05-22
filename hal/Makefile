SDIR = src
CXX=g++
CXXFLAGS=-g -I. -I../jui/inc
AR=ar
OBJDIR=obj

# this is a dependency for all versions
DEPS = haldraw.h
#different libs may have different deps
#DEPS = $(wildcard $(IDIR)/*.h)
#src / object files for each library
TEXTSRCS := $(wildcard text/*.cpp)
TEXTOBJS := $(patsubst text/%.cpp,$(OBJDIR)/%.o,$(TEXTSRCS))

#all the src/object files - append to these vars
ALLSRC=$(TEXTSRCS)
ALLOBJS=$(TEXTOBJS)

all: objdir libdrawtext.a

#$(OBJDIR)/%.o: $(SDIR)/%.cpp $(DEPS)
$(OBJDIR)/%.o: $(ALLSRC) $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

#construct each library
libdrawtext.a: $(TEXTOBJS)
	$(AR) r -o $@ $^

#target to create object directory
objdir:
	@mkdir -p $(OBJDIR)
settings:
	echo $(DEPS)
	echo $(OBJS)
	echo $(SRCS)

.PHONY: clean settings objdir

clean:
	rm -f $(OBJDIR)/*.o *.a 

