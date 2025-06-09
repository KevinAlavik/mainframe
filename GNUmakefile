# mainframe v1.0 Copyright (c) 2025 Kevin Alavik 
SRC_DIR     := src
OBJ_DIR     := build/$(SRC_DIR)
BIN_DIR     := bin
LIB_DIR     := lib

CC          := cc
LD          := $(CC)
CFLAGS      := -std=c89 -Wall -Wextra -Werror -pedantic -Iinclude
LDFLAGS     :=

SRCS        := $(wildcard $(SRC_DIR)/*.c)
OBJS        := $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRCS))

TARGET      := $(BIN_DIR)/mf
LIB_NAME    := mf
LIB_STATIC  := $(LIB_DIR)/lib$(LIB_NAME).a

.PHONY: all lib clean clean-lib

all: lib $(TARGET)

lib:
	$(MAKE) -C $(LIB_DIR)

$(TARGET): $(OBJS) $(LIB_STATIC) | $(BIN_DIR)
	$(LD) $(LDFLAGS) -o $@ $^ -L$(LIB_DIR) -l$(LIB_NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BIN_DIR):
	mkdir -p $@

$(OBJ_DIR):
	mkdir -p $@

clean-lib:
	$(MAKE) -C $(LIB_DIR) clean

clean: clean-lib
	rm -rf $(OBJ_DIR) $(BIN_DIR)

