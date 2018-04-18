phase.png pos.png vel.png : SS_graph.py tray.txt
	python SS_graph.py

tray.txt : gravity
	./gravity > tray.txt
	rm gravity

gravity:
	c++ SS_gravity.cpp -o gravity
