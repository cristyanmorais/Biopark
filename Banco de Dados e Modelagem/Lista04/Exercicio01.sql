create database controle_livros;

use controle_livros;

create table editoras(
	id_editora int primary key not null auto_increment,
    nome varchar(50) not null
);

create table livros(
	id_livro int primary key not null auto_increment,
	nome varchar(50) not null,
    id_categoria int,
    id_autor int,
    id_editora int,
    
    constraint livedi foreign key (id_editora) references editoras(id_editora)
);

create table autores(
	id_autor int primary key not null auto_increment,
    nome varchar(50) not null
);

create table categorias(
	id_categoria int primary key not null auto_increment,
    nome varchar(50) not null
);

create table livaut(
	id_livro int,
    id_autor int,
    
    constraint livaut foreign key (id_livro) references livros(id_livro),
    constraint autliv foreign key (id_autor) references autores(id_autor)
);

create table livcat(
	id_livro int,
    id_categoria int,
    
    constraint livcat foreign key (id_livro) references livros(id_livro),
    constraint catliv foreign key (id_categoria) references categorias(id_categoria)
);

insert into editoras values(1, 'gabriel_nava');
insert into editoras values(2, 'jose_klak');
insert into livros values(1, 'paula_valente', 1, 1, 1);
insert into livros values(2, 'marcus_silverio', 2, 2, 2);
insert into autores values(1, 'lucas_passarote');
insert into autores values(2, 'gabriel');
insert into categorias values(1, 'jose');
insert into categorias values(2, 'lucas');
insert into livaut values (1, 1);
insert into livaut values (2, 2);
insert into livcat values (1, 1);
insert into livcat values (2, 2);

update editoras
set nome = "editora_manlet"
where id_editora = 1;
update livros
set nome = "livro_velho"
where id_livro = 2;
update autores
set nome = "dodoi"
where id_autor = 1;
update categorias
set nome = "menino_cardapio"
where id_categoria = 1;

delete from livaut
where id_livro = 1;
delete from livaut
where id_autor = 1;
delete from livaut
where id_livro = 2;
delete from livaut
where id_autor = 2;

delete from livcat
where id_livro = 1;
delete from livcat
where id_categoria = 1;
delete from livcat
where id_livro = 2;
delete from livcat
where id_categoria = 2;

delete from livros
where id_livro = 1;
delete from autores
where id_autor = 1;
delete from categorias
where id_categoria = 1;
delete from editoras
where id_editora = 1;