#
#   gpio
#   created by Ilya Shishkin
#   cortl@8iter.ru
#   https://github.com/cortl0/gpio
#   licensed by GPL v3.0
#

NAME = broadcom_bcm2835_generator
TARGET = $(NAME).out

.PHONY: all clean

all: $(TARGET)

clean:
	rm $(TARGET)

$(TARGET): $(NAME).cpp
	g++ -std=c++17 -o $(TARGET) $(NAME).cpp
	./$(TARGET)
