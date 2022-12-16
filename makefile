#Place this makefile in the same directory as your all .cpp and .h files
#at the command prompt
#make ./<TARGET>

SOURCES = main.cpp

####### Specify the target name ######
TARGET = movie

#-------Do Not Change below this line-------------
#Compile with g++
CC = g++

#use -g for gnu debugger and -std= for c++11 compiling
CXXFLAGS = -g -std=c++11
OBJS:= ${SOURCES:.cpp=.o}

###### Tabs Matter!#########
$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS)

.cpp.o:
	$(CC) -c $(CXXFLAGS) $(INCDIR) $<

$(INCS): $(OBJS)

#In order to get rid of all .o files create, at the command prompt
#make clean
clean:
	rm -f $(OBJS) $(TARGET) core
