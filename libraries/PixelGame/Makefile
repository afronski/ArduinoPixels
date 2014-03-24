CXX = g++
AR = ar

CXXFLAGS = -g -Wall -c -std=c++11
INCLUDE = -I../PixelShared -I.
OBJS = SDLPixelRenderer.o
	
LIB = libPixelGame.a

all: $(LIB)

$(LIB): $(OBJS)
	$(AR) rcs $@ $^

.cpp.o: %.cpp %.h
	$(CXX) $(CXXFLAGS) $(INCLUDE) $< -o $@

clean:
	rm *.o && rm $(LIB)
