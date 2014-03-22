CXX = g++
AR = ar

CXXFLAGS = -Wall -c -std=c++11
INCLUDE = -I../PixelGame -I.
OBJS = PixelMain_Game_p1.o \
	PixelMain_Game_p2.o \
	PixelMain_Game_vs.o \
	PixelMain_Game.o \
	PixelMain_Intro.o \
	PixelMain_Menu.o \
	Hero.o \
	PixelMain.o
	
LIB = libPixelShared.a

all: $(LIB)

$(LIB): $(OBJS)
	$(AR) rcs $@ $^

.cpp.o: %.cpp %.h
	$(CXX) $(CXXFLAGS) $(INCLUDE) $< -o $@

clean:
	rm *.o && rm $(LIB)