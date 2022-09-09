create database clinica;

use clinica;

create table sala(
	id_sala int primary key auto_increment,
    numero_sala int unique not null,
    check (numero_sala > 1 && numero_sala < 50),
    andar int unique not null,
    check (andar < 12)
);

create table medicos(
	id_medico int primary key auto_increment,
    crm varchar(15) unique not null,
    nome varchar(40) not null,
    idade int,
    check(idade > 23),
    especialidade char(20) not null default 'Ortopedia',
    cpf varchar(15) unique not null,
    data_de_admissao date
);

create table pacientes(
	id_paciente int primary key auto_increment,
    rg varchar(15) unique not null,
    nome varchar(40) not null,
    data_nascimento date,
    cidade char(30) default 'Itabuna',
    doenca varchar(40) not null,
    plano_saude varchar(40) not null default 'SUS'
);

create table funcionarios(
	id_funcionario int primary key auto_increment,
    matricula varchar(15) unique not null,
    nome varchar(40) not null,
    data_nascimento date not null,
    data_admissao date not null,
    cargo varchar(40) not null default 'Assistente Medico',
    salario float not null default 510.00
);

create table consultas(
	id_consulta int primary key unique not null,
    data_horario datetime
);

alter table sala
add id_medico int;

alter table sala
add constraint atende
foreign key (id_medico) references medicos(id_medico);


alter table consultas
add id_medico int;

alter table consultas
add constraint realiza
foreign key (id_medico) references medicos(id_medico);

alter table consultas
add id_paciente int;

alter table consultas
add constraint faz
foreign key (id_paciente) references pacientes(id_paciente);