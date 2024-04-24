TARGET 	= $(BIN_DIR)/myprog
OBJ_DIR = ../obj 
BIN_DIR = ../bin 
INC_DIR = ../inc 
SRC_DIR = .
OBJS 	= 	$(OBJ_DIR)leerfichero.o \
			$(OBJ_DIR)main.o

CFLAGS = -Wall -I$(INCDIR)

$(TARGET) : $(OBJS)
	mkdir -p $(BIN_DIR)
	gcc -c $(OBJS) -o $(TARGET)

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	mkdir -p $(OBJ_DIR)
	gcc -c -MD $< -o $@

-include $(OBJ_DIR)/*.d

.PHONY : clean
clean:
	@rm -r $(OBJ_DIR) $(BIN_DIR)
