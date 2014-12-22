CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

SRC = $(shell find . -name *.cpp)

OBJS = $(SRC:%.cpp=%.o)

BIN = bin

LIBS =

TARGET =	$(BIN)/Test_c++

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all: $(TARGET)

%.o: %.cc
	g++ -c $< -o $@
	
.PHONY: clean

clean:
	rm -f $(OBJS) $(TARGET)
