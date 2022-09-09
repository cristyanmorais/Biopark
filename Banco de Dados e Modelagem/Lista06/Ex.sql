use controledelivros;

select nome from estilo order by nome;

select nome from autor order by nome desc;

select nome, telefone from editora;

select nome from editora;

select nome from estilo order by nome desc;

select id_estilo from estilo where id_estilo = 3;

select id_autor from autor where id_autor = 3;

select id_editora from editora where id_editora = 3;

select livro.titulo, editora.nome from livro
inner join editora on livro.id_livro = editora.id_editora;

select livro.titulo, editora.nome from livro
inner join editora on livro.id_livro = editora.id_editora
where editora.nome like 'a%';

select livro.titulo, editora.nome, estilo.nome, autor.nome from livro
inner join editora on livro.id_editora = editora.id_editora
inner join estilo on livro.id_estilo = estilo.id_estilo
inner join autor on livro.id_autor = autor.id_autor;

select livro.titulo, editora.nome from livro
inner join editora on livro.id_editora=editora.id_editora 
where editora.telefone = '12345';

select livro.titulo, autor.nome from livro
inner join autor on livro.id_autor=autor.id_autor 
where autor.idade = 35;

select livro.titulo, editora.nome as editora, autor.nome as autor from livro
inner join editora on livro.id_editora=editora.id_editora
inner join autor on livro.id_autor=autor.id_autor 
where autor.nome = 'dan brown';

select livro.titulo, editora.nome as editora, autor.nome as autor from livro
inner join editora on livro.id_editora=editora.id_editora
inner join autor on livro.id_autor=autor.id_autor 
where autor.nome = 'dan brown' and autor.idade = 35;

select livro.titulo, editora.nome as editora, autor.nome as autor from livro
inner join editora on livro.id_editora=editora.id_editora
inner join autor on livro.id_autor=autor.id_autor 
where autor.nome = 'dan brown' or editora.telefone = '123345';

select livro.titulo, estilo.nome from livro
inner join estilo on livro.id_estilo=estilo.id_estilo 
where estilo.nome = 'romance';

select livro.titulo, estilo.nome from livro
inner join estilo on livro.id_estilo=estilo.id_estilo 
inner join editora
where editora.nome = 'globo';

select livro.titulo as titulo, editora.nome as editora, autor.nome as autor from livro
inner join editora
inner join autor;