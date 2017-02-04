fileCompil = main
libs = `pkg-config --libs sdl2`
cflags = `pkg-config --cflags sdl2`

compil: main.cpp
	g++ $^ -o $@ `pkg-config --libs --cflags sdl2`

clean:
	rm -f $(fileCompil)

git:
	iceweasel https://github.com/Draenne/SpaceshipSurvivor_qbHQ256s.git
