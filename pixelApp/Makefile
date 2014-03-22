CXX = g++

# Mac
SDL = -framework SDL2

CXXFLAGS = -Wall -c -std=c++11
INCLUDE = -I../libraries/PixelGame -I../libraries/PixelShared
LDFLAGS = $(SDL) -L../libraries/PixelGame -L../libraries/PixelShared
EXE = pixelApp
OBJS = main.o

all: $(EXE)

$(EXE): $(OBJS)
	$(CXX) $(LDFLAGS) $(OBJS) -lPixelShared -lPixelGame -o $@

.cpp.o: %.cpp %.h
	$(CXX) $(CXXFLAGS) $(INCLUDE) $< -o $@

clean:
	rm *.o && rm $(EXE)