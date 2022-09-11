
.SUFFIXES: .tex .make
.SUFFIXES: .tex .cpp
.SUFFIXES: .tex .h

P2CODE=../Lab1.d/P1.d
P2CODETeX=P2CodeTeX.d
#
CPP2CODE=CppPractice
CPP2CODETeX=CppPracticeTeX
#
P2SOURCETeX = Practica02.tex $(P2CODETeX)/hello.tex 

.cpp.tex:
	highlight -t 8  -O latex $(CPP2CODE)/$*.cpp | awk -f ../la2tex.awk > $(CPP2CODETeX)/$*.tex

.make.tex:
	highlight -t 8  -O latex $(CPP2CODE)/$*.make | awk -f ../la2tex.awk > $(CPP2CODETeX)/$*.tex

.h.tex:
	highlight -t 8  -O latex $(CPP2CODE)/$*.h | awk -f ../la2tex.awk > $(CPP2CODETeX)/$*.tex

Practica02 : Practica02.pdf Practica02.html

Practica02.html : $(P2SOURCETeX)
	latex2html Practica02.tex

Practica02.pdf :$(P2SOURCETeX)
	pdflatex Practica02.tex

$(P2CODETeX)/hello.tex : $(P2CODE)/hello.cpp
	highlight -t 8  -O latex $(P2CODE)/hello.cpp | awk -f ../la2tex.awk > $(P2CODETeX)/hello.tex


clean:
	rm $(P2CODETeX)/*.tex
