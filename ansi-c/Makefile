vpath %.c $(allSrcFolders)
.PHONY: $(allObjectFolders) clean all

objectFolderName := object
outFolderName := out
srcFolderName := src
allCFiles := ${shell find ${srcFolderName} -wholename "*.c" -type f}
allSrcFolders := $(shell find $(srcFolderName) -type d)
allObjectFiles := $(addprefix ${objectFolderName}/,$(allCFiles:.c=.o))
allObjectFolders := $(sort $(dir $(allObjectFiles)))


all: $(allObjectFolders) $(allObjectFiles) $(outFolderName)/out

run : $(outFolderName)/out
	@$(outFolderName)/out

$(allObjectFiles) : $(objectFolderName)/%.o : %.c 
	gcc -c $< -o $(objectFolderName)/${^:.c=.o}

$(outFolderName)/out : $(allObjectFiles)
	gcc $^ -o $(outFolderName)/out

clean:
	rm -rf $(outFolderName)
	rm -rf $(objectFolderName)

$(allObjectFolders):
	mkdir -p $(outFolderName)
	mkdir -p $(dir $(allObjectFolders))