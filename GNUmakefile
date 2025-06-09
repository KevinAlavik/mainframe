# mainframe v1.0 Copyright (c) 2025 Kevin Alavik #
SRC_DIR     := src
OBJ_DIR     := build/$(SRC_DIR)
BIN_DIR     := bin

CC          := cc
LD          := $(CC)
CFLAGS      := -std=c89 -Wall -Wextra -Werror -pedantic
LDFLAGS     :=

SRCS        := $(wildcard $(SRC_DIR)/*.c)
OBJS        := $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRCS))

TARGET      := $(BIN_DIR)/mf

.PHONY: all
all: $(TARGET)

$(TARGET): $(OBJS) | $(BIN_DIR)
	$(LD) $(LDFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BIN_DIR):
	mkdir -p $@

$(OBJ_DIR):
	mkdir -p $@

.PHONY: clean
clean:
	rm -rf $(BUILD_DIR) $(BIN_DIR)

