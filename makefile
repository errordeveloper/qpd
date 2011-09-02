%/.git/:
	echo git submodule update --init $(@:/.git/=)

init-submodules: widgets/.git/ projects/.git/


basic-example: init-submodules
	cd widgets/ && $(MAKE) $@


.PHONY: basic-example
