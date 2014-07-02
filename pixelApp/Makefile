CXX = g++

CXXFLAGS = -g -Wall -c -std=c++11
INCLUDE = -I../libraries/PixelGame -I../libraries/PixelShared
LDFLAGS = -L../libraries/PixelGame -L../libraries/PixelShared
EXE = pixelApp
OBJS = main.o

all: $(EXE)

$(EXE): $(OBJS)
	$(CXX) $(LDFLAGS) $(OBJS) -lPixelShared -lPixelGame -lSDL2 -o $@

.cpp.o: %.cpp %.h
	$(CXX) $(CXXFLAGS) $(INCLUDE) $< -o $@

clean:
	rm *.o && rm $(EXE)
