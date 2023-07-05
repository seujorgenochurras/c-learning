.PHONY: clean all run $(allObjectFolders)
vpath %.c $(allCFolders)
.DEFAULT_GOAL := all

includes := "/Program Files/Java/jdk-19/include/**" \
"/msys64/mingw64/include/c++/12.1.0/pstl"

outDirName = out
objectsDirName = ${outDirName}/object

srcFolder:= src
allCFiles:= ${shell find $(srcFolder) -wholename "*.c" -type f}
allObjectFiles:= $(addprefix $(objectsDirName)/,$(allCFiles:.c=.o))

allObjectFolders := $(sort $(dir $(allObjectFiles)))

allCFolders:= ${shell find $(srcFolder) -type d}

$(outDirName)/compile: $(allObjectFiles)
	gcc $^ $(addprefix -I,$(includes)) -o $(outDirName)/compile

$(allObjectFiles): $(objectsDirName)/%.o: %.c 
	@gcc -c $< -o ${objectsDirName}/$(^:.c=.o);


all: $(allObjectFolders) $(outDirName)/compile $(allObjectFiles) 

run: $(outDirName)/compile
	@$(outDirName)/compile

clean:
	@rm -rf out/

$(allObjectFolders):
	mkdir -p $(outDirName)
	mkdir -p $(dir $(allObjectFiles))