all: slides html pdf

install:
	brew install asciidoctor 
	#É preciso adicionar $HOME/.gem/ruby/VERSAO/bin ao path
	gem install asciidoctor-pdf asciidoctor-revealjs --user-install
	
slides:
	asciidoctor-revealjs "README.adoc" -o slides.html

clean:
	rm -rf "html"
	rm -f slides.html
