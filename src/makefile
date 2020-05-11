#
#   gpio
#   created by Ilya Shishkin
#   cortl@8iter.ru
#   https://github.com/cortl0/gpio
#   licensed by GPL v3.0
#

NAME = example
TARGET = $(NAME).out

PREFIX = /usr/local/bin

.PHONY: all clean install uninstall

all: $(TARGET)

clean:
	rm $(TARGET)

$(TARGET): cpu.cpp main.cpp
	g++ -std=c++17 -o $(TARGET) cpu.cpp main.cpp

install:
	install $(TARGET) $(PREFIX)

uninstall:
	rm -rf $(PREFIX)/$(TARGET)
