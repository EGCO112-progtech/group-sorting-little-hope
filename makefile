compile: main.c 
	 gcc  main.c -o sort

runSelection: selection
	  ./selection

run: bubble
	 ./bubble


clean: bubble
	 rm bubble
