CXX = g++
CXXFLAGS = -std=c++11 -Wall
src = ZadKcpp.cpp ZadBin2Dec.cpp ZadParzysta.cpp ZadPrzekazywanieTablic.cpp ZadDec2Bin.cpp
include = ZadKcpp.h ZadBin2Dec.h ZadParzysta.h ZadPrzekazywanieTablic.h ZadDec2Bin.h
OBJS = $(SRCS:.cpp=.o)
TARGET = ZadKcpp
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

%.o: %.cpp $(HDRS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
