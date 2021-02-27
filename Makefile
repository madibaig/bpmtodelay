bpmtodelay: bpmtodelay.c
		gcc ./bpmtodelay.c -o bpmtodelay

install: bpmtodelay
		cp ./bpmtodelay	~/.local/bin/bpmtodelay

uninstall:
		rm ~/.local/bin/bpmtodelay

clean:
		rm bpmtodelay

.PHONY: clean install uninstall
