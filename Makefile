# ASCII Live Client Makefile
# Usage:
#   make          # Build the project
#   make install  # Install to /usr/local/bin
#   make uninstall # Remove from system
#   make clean    # Clean build artifacts

# Config
BIN_NAME = ascii_live_client
PREFIX = /usr/local
SRC = src/client.cpp
CXX = g++
CXXFLAGS = -o

.PHONY: all install uninstall clean

all: $(BIN_NAME)

$(BIN_NAME): $(SRC)
	$(CXX) $(CXXFLAGS) $< -o $@

install: $(BIN_NAME)
	install -Dm755 $(BIN_NAME) $(DESTDIR)$(PREFIX)/bin/$(BIN_NAME)
	@echo "Installed to $(DESTDIR)$(PREFIX)/bin/$(BIN_NAME)"

uninstall:
	rm -f $(DESTDIR)$(PREFIX)/bin/$(BIN_NAME)
	@echo "Removed from $(DESTDIR)$(PREFIX)/bin/$(BIN_NAME)"

clean:
	rm -f $(BIN_NAME)
