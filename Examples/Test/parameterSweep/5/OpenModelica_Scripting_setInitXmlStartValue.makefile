# Makefile generated by OpenModelica

# Dynamic loading uses -O0 by default
SIM_OR_DYNLOAD_OPT_LEVEL=-O0
CC=gcc
CXX=g++
LINK=g++ -shared -Xlinker --export-all-symbols -fPIC
EXEEXT=.exe
DLLEXT=.dll
DEBUG_FLAGS=
CFLAGS= $(DEBUG_FLAGS) ${SIM_OR_DYNLOAD_OPT_LEVEL} -falign-functions -msse2 -mfpmath=sse ${MODELICAUSERCFLAGS} 
CPPFLAGS= -I"C:/OpenModelica1.11.0-64bit//include/omc/c" 
LDFLAGS= -L"C:/OpenModelica1.11.0-64bit//lib//omc" -Wl,-rpath,'C:/OpenModelica1.11.0-64bit//lib//omc'  -lregex -lexpat -lomcgc -lpthread -fopenmp -loleaut32 -lz -lhdf5  -lOpenModelicaRuntimeC -lomcgc -lexpat -lregex -static-libgcc -luuid -loleaut32 -lole32 -lws2_32 -llis -lumfpack -lklu -lcolamd -lbtf -lamd -lsundials_idas -lsundials_kinsol -lsundials_nvecserial -lipopt -lcoinmumps -lpthread -lm -lgfortranbegin -lgfortran -lmingw32 -lgcc_eh -lmoldname -lmingwex -lmsvcrt -luser32 -lkernel32 -ladvapi32 -lshell32 -lopenblas -lcminpack
PERL=perl
MAINFILE=OpenModelica_Scripting_setInitXmlStartValue.c

.PHONY: OpenModelica_Scripting_setInitXmlStartValue
OpenModelica_Scripting_setInitXmlStartValue: $(MAINFILE) OpenModelica_Scripting_setInitXmlStartValue.h OpenModelica_Scripting_setInitXmlStartValue_records.c
	 $(CC) $(CFLAGS) $(CPPFLAGS) -c -o OpenModelica_Scripting_setInitXmlStartValue.o $(MAINFILE)
	 $(CC) $(CFLAGS) $(CPPFLAGS) -c -o OpenModelica_Scripting_setInitXmlStartValue_records.o OpenModelica_Scripting_setInitXmlStartValue_records.c
	 $(LINK) -o OpenModelica_Scripting_setInitXmlStartValue$(DLLEXT) OpenModelica_Scripting_setInitXmlStartValue.o OpenModelica_Scripting_setInitXmlStartValue_records.o "-LC:/OpenModelica1.11.0-64bit//lib//omc" "-LC:/OpenModelica1.11.0-64bit//lib/" "-L%APPDATA%/.openmodelica/binaries/OpenModelica" "-LC:/OpenModelica1.11.0-64bit/lib/omc/Resources/Library/mingw64" "-LC:/OpenModelica1.11.0-64bit/lib/omc/Resources/Library/win64" "-LC:/OpenModelica1.11.0-64bit/lib/omc/Resources/Library" -lModelicaExternalC $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) -lm