CC 	= g++ -std=c++14
CFLAGS 	= -g -I/opt/homebrew/include 
LDFLAGS = -L/opt/homebrew/lib -ljsoncpp -lmicrohttpd -ljsonrpccpp-common -ljsonrpccpp-server -lcurl -ljsonrpccpp-client -I/opt/homebrew/include

OBJS = Person.o Thing.o GPS.o Time.o Record.o main.o

all: main

main: $(OBJS)
	$(CC) $(CFLAGS) -o main $(OBJS) $(LDFLAGS)

Person.o: Person.cpp Person.h
	$(CC) $(CFLAGS) -c Person.cpp

Thing.o: Thing.cpp Thing.h
	$(CC) $(CFLAGS) -c Thing.cpp

GPS.o: GPS.cpp GPS.h
	$(CC) $(CFLAGS) -c GPS.cpp

Time.o: Time.cpp Time.h
	$(CC) $(CFLAGS) -c Time.cpp

Record.o: Record.cpp Record.h
	$(CC) $(CFLAGS) -c Record.cpp

main.o: main.cpp Person.h Thing.h GPS.h Time.h Record.h
	$(CC) $(CFLAGS) -c main.cpp

clean:
	rm -f main *.o



