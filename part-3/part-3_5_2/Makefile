teacher: Teacher.o part-3_5_2.o
	g++ -o $@ $^

%.o : %.cpp
	g++ -c -o $@ $<

clean:
	rm -f *.o teacher
