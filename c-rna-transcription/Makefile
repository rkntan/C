CC = gcc
CFLAGS = -Wall -Wextra -I test-framework
SRC_DIR = src
FRAMEWORK_DIR = test-framework
TEST_DIR = test
TEST_SRC = test/test_rna_transcription.c  # Your test source file
OBJ = $(SRC_DIR)/rna_transcription.o $(FRAMEWORK_DIR)/unity.o $(TEST_SRC:.c=.o)  # Include the test object
EXEC = test_rna.exe

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) -mconsole $(OBJ) -o $(EXEC)

$(SRC_DIR)/rna_transcription.o: $(SRC_DIR)/rna_transcription.c
	$(CC) $(CFLAGS) -c $(SRC_DIR)/rna_transcription.c -o $(SRC_DIR)/rna_transcription.o

$(FRAMEWORK_DIR)/unity.o: $(FRAMEWORK_DIR)/unity.c
	$(CC) $(CFLAGS) -c $(FRAMEWORK_DIR)/unity.c -o $(FRAMEWORK_DIR)/unity.o

$(TEST_SRC:.c=.o): $(TEST_SRC)  # Rule to compile the test source file
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	del /Q $(SRC_DIR)\*.o
	del /Q $(FRAMEWORK_DIR)\*.o
	del /Q $(TEST_DIR)\*.o
	del /Q $(EXEC)
