# Plik Makefile

# Zmienne
CXX = g++
CXXFLAGS = -Wall -std=c++17
SRC_DIR = src
BUILD_DIR = build
TARGET = $(BUILD_DIR)/main

# Lista plików źródłowych
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
MAIN_SRC = main.cpp

# Lista plików obiektowych
OBJS = $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SRCS))

# Domyślny cel (plik wykonywalny)
all: $(TARGET)

# Kompilacja plików obiektowych
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Kompilacja pliku wykonywalnego
$(TARGET): $(OBJS) $(MAIN_SRC)
	$(CXX) $(CXXFLAGS) $(OBJS) $(MAIN_SRC) -o $(TARGET)

# Czyszczenie
clean:
	rm -rf $(BUILD_DIR)

# Utworzenie katalogu build
$(shell mkdir -p $(BUILD_DIR))

.PHONY: all clean