## como ejecutar en local este sitio web
### a traves de github pages.

1) Instalar ruby

	>$ sudo apt-get install ruby-full

2) Comprobar la version de ruby
	
	>$ ruby --version
	> ruby 2.X.X

Debe instalar  ruby 2.1.0 o mayor

3) Instalar el bundler

	>$ sudo gem install bundler
	
4) Instalar las dependencias (requerira password durante la instalacion)

	>$ bundle install
	
5) para ejecutar la pagina local

	>$ bundle exec jekyll serve
