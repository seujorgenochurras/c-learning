.PHONY: clean
#Params: 1, file name
define putIntoOut
	${shell mkdir -p $(outDirName)}
	gcc $(1) -o ${outDirName}/compiled;
endef

define putIntoObjects
	${shell mkdir -p $(objectsDirName)}
	gcc -c $(1) -o ${objectsDirName}/${subst .c,.o,${notdir $(1)}};
endef
# outDir := ${shell mkdir -p out}
# objectsDir := ${shell mkdir -p ${outDir}/object}

sourceFile = src

allFiles := ${shell find ${sourceFile} -wholename "**.c*" -type f}

outDirName = out
objectsDirName = ${outDirName}/object

all: ${outDirName}/compiled run

run: ${outDirName}/compiled
	${outDirName}/compiled

${outDirName}/compiled: $(objectsDirName)/*.o
	${call putIntoOut,$^}

out/object/*.o: out/object/%.o : src/%.c
	echo $@
	${foreach file,$?,${call putIntoObjects,${file}}}

clean:
	@rm *.o

