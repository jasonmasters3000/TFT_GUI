IDIR =inc
SDIR = src
CXX=g++
CXXFLAGS=-g -I$(IDIR) -I../hal
AR=ar
OBJDIR=obj

DEPS = $(wildcard $(IDIR)/*.h)
SRCS := $(wildcard $(SDIR)/*.cpp)
OBJS := $(patsubst $(SDIR)/%.cpp,$(OBJDIR)/%.o,$(SRCS))

all: objdir libjui.a

objdir:
	@mkdir -p $(OBJDIR)

$(OBJDIR)/%.o: $(SDIR)/%.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

libjui.a: $(OBJS)
	$(AR) r -o $@ $^

settings:
	echo $(DEPS)
	echo $(OBJS)
	echo $(SRCS)

.PHONY: clean settings

clean:
	rm -f $(OBJDIR)/*.o libjui.a 

