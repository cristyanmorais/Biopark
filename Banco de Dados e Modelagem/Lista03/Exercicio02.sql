create database eleicao;

use eleicao;

create table cargo(
	codigo_cargo int primary key unique not null,
    nome_cargo varchar(30) unique not null,
    check(nome_cargo != 'Prefeito' and nome_cargo != 'Vereador'),
    salario float not null default 17000.00,
    numero_vagas int unique not null
);

create table candidato(
	numero_candidato int primary key unique not null,
    nome varchar(40) unique not null,
    codigo_cargo int not null,
    codigo_partido int not null
);

create table partido(
	codigo_partido int primary key unique not null,
    sigla char(5) unique not null,
    nome varchar(40) unique not null,
    numero int unique not null
);

create table eleitor(
	titulo_eleitor varchar(30) primary key unique not null,
    zona_eleitoral char(5) not null,
    sessao_eleitoral char(5) not null,
    nome varchar(40) not null
);

create table voto(
	titulo_eleitor varchar(30) unique not null,
    numero_candidato int not null
);

alter table voto 
add constraint possui 
foreign key (numero_candidato) references candidato(numero_candidato);


alter table candidato
add constraint possui2 
foreign key (codigo_cargo) references cargo(codigo_cargo);

alter table candidato
add constraint possui3 
foreign key (codigo_partido) references partido(codigo_partido);