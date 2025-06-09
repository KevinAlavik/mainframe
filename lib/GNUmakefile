# mainframe v1.0 Copyright (c) 2025 Kevin Alavik 
LIB_NAME := mf
SRC_DIR  := .
OBJ_DIR  := build
AR       := ar
CC       := cc
CFLAGS   := -std=c89 -Wall -Wextra -Werror -pedantic

SRCS     := $(wildcard $(SRC_DIR)/*.c)
OBJS     := $(patsubst %.c,$(OBJ_DIR)/%.o,$(notdir $(SRCS)))

.PHONY: all clean

all: lib$(LIB_NAME).a

$(OBJ_DIR):
	mkdir -p $@

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

lib$(LIB_NAME).a: $(OBJS)
	$(AR) rcs $@ $^

clean:
	rm -rf $(OBJ_DIR) lib$(LIB_NAME).a

