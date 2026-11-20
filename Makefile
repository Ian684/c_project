CC ?= cc
CFLAGS ?= -std=c11 -Wall -Wextra -Wpedantic
SOURCES := $(sort $(wildcard *.c))
PROGRAMS := $(SOURCES:.c=)
BIN_DIR := bin
.PHONY: all check clean
all: $(addprefix $(BIN_DIR)/,$(PROGRAMS))
$(BIN_DIR):
	mkdir -p $@
$(BIN_DIR)/%: %.c | $(BIN_DIR)
	$(CC) $(CFLAGS) $< -o $@
check: all
	@echo "Built $(words $(SOURCES)) C exercises successfully."
clean:
	rm -rf $(BIN_DIR)
