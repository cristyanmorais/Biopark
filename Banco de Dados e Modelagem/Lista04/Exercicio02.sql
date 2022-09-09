create database escola;
use escola;

create table professor(
	id_professor int primary key,
    nome varchar(50)
);

create table turma(
	id_turma int primary key,
    nome varchar(50)
);

create table aluno(
	id_aluno int primary key,
    nome varchar(50),
    id_turma int,
    
    foreign key (id_turma) references turma(id_turma)
);

create table aula(
	id_aula int primary key,
    nome varchar(50),
    id_professor int,
    
    foreign key (id_professor) references professor(id_professor)
);

create table protur(
	id_professor int,
    id_turma int,
    
    foreign key (id_professor) references professor(id_professor),
    foreign key (id_turma) references turma(id_turma)
);

create table aluaul(
	id_aluno int,
    id_aula int,
    
    foreign key (id_aluno) references aluno(id_aluno),
    foreign key (id_aula) references aula(id_aula)
);

insert into professor values(1, 'jose');
insert into professor values(2, 'gabriel');
insert into turma values(1, 'lucas');
insert into turma values(2, 'klak');
insert into aluno values(1, 'lucas', 1);
insert into aluno values(2, 'paula', 2);
insert into aula values(1, 'nava', 1);
insert into aula values(2, 'passarote', 2);
insert into protur values(1, 1);
insert into protur values(2, 2);
insert into aluaul values(1, 1);
insert into aluaul values(2, 2);

update professor set nome = "menino cardapio" where id_professor = 1;
update turma set nome = "esquizofrenico" where id_turma = 1;
update aluno set nome = "hipocrita" where id_turma = 1;
update aula set nome = "manlet fodao" where id_aula = 1;

delete from protur where id_professor = 2;
delete from protur where id_turma = 2;
delete from aluaul where id_aluno = 2;
delete from aluaul where id_aula = 2;
delete from aula where id_aula = 2;
delete from aluno where id_aluno = 2;
delete from turma where id_turma = 2;
delete from professor where id_professor = 2;