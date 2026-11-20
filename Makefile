CC ?= cc
CFLAGS ?= -std=c11 -Wall -Wextra -Wpedantic
LDFLAGS ?=

PROGRAMS := hello malloc StringToOther array_stats reverse_string factorial prime_check linked_list word_count
SOURCES := hello.c malloc.c StringToOther.c array_stats.c reverse_string.c factorial.c prime_check.c linked_list.c word_count.c
BIN_DIR := bin

.PHONY: all check clean

all: $(PROGRAMS:%=$(BIN_DIR)/%)

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

$(BIN_DIR)/hello: hello.c | $(BIN_DIR)
	$(CC) $(CFLAGS) $(LDFLAGS) $< -o $@

$(BIN_DIR)/malloc: malloc.c | $(BIN_DIR)
	$(CC) $(CFLAGS) $(LDFLAGS) $< -o $@

$(BIN_DIR)/StringToOther: StringToOther.c | $(BIN_DIR)
	$(CC) $(CFLAGS) $(LDFLAGS) $< -o $@

$(BIN_DIR)/%: %.c | $(BIN_DIR)
	$(CC) $(CFLAGS) $(LDFLAGS) $< -o $@

check: all
	@echo "Built $(words $(SOURCES)) C exercises successfully."

clean:
	rm -rf $(BIN_DIR)
