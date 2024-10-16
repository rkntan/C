CC = gcc
CFLAGS = -Wall -Wextra -I test-framework
SRC_DIR = src
FRAMEWORK_DIR = test-framework
TEST_DIR = test
TEST_SRC = test/test_eliuds_eggs.c  # Your test source file
OBJ = $(SRC_DIR)/eliuds_eggs.o $(FRAMEWORK_DIR)/unity.o $(TEST_SRC:.c=.o)  # Include the test object
EXEC = test_eliuds_eggs.exe

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) -mconsole $(OBJ) -o $(EXEC)

$(SRC_DIR)/eliuds_eggs.o: $(SRC_DIR)/eliuds_eggs.c
	$(CC) $(CFLAGS) -c $(SRC_DIR)/eliuds_eggs.c -o $(SRC_DIR)/eliuds_eggs.o

$(FRAMEWORK_DIR)/unity.o: $(FRAMEWORK_DIR)/unity.c
	$(CC) $(CFLAGS) -c $(FRAMEWORK_DIR)/unity.c -o $(FRAMEWORK_DIR)/unity.o

$(TEST_SRC:.c=.o): $(TEST_SRC)  # Rule to compile the test source file
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	del /Q $(SRC_DIR)\*.o
	del /Q $(FRAMEWORK_DIR)\*.o
	del /Q $(TEST_DIR)\*.o
	del /Q .\*.exe
# 	del /Q $(EXEC)
