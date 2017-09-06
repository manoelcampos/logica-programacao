SOURCE=index
all: slides html pdf

install:
	#Install bundler, that in turn downloads Ruby dependencies inside the Gemfile: http://bundler.io
	sudo gem install bundler
	#Asciidoctor Reveal.js Configurations
	bundle config --local github.https true
	bundle --path=.bundle/gems --binstubs=.bundle/.bin
	#Install build dependencies using Bundler
	bundler

slides:
	bundle exec asciidoctor-revealjs "$(SOURCE).adoc" -o slides.html

html:
	asciidoctor -a allow-uri-read -b html5 "$(SOURCE).adoc" 

pdf:
	#"book" is a custom attribute used to selectively include content into the generated file when the attribute is defined by command line
	asciidoctor-pdf -a allow-uri-read -a book "$(SOURCE).adoc" 

clean:
	rm -f "$(SOURCE).html" "slides.html" "$(SOURCE).pdf"
	
