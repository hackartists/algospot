CC = llvm-gcc
CFLAGS = -Wimplicit-function-declaration
CFILE = main.c
OUTDIR = products
TESTFILE = test.txt
CPCLIP = pbcopy

%.alg:
	@echo 'Starting to build $@.'
	$(CC) $(CFLAGS) $@/$(CFILE) -o $(OUTDIR)/$@
	@echo 'Completed building $@.'
	@echo 'Starting to test $@'
	$(OUTDIR)/$@ < $@/$(TESTFILE)
	@echo 'Completed testing $@'
	@echo 'Copy source code to clipboard $@'
	$(CPCLIP) < $@/$(CFILE)
	@echo 'Completed copying source code'
