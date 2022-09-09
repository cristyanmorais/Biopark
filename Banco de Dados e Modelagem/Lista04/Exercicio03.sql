CREATE DATABASE ESCOLA2;
USE ESCOLA2;

CREATE TABLE instrutores (
	  id INT NOT NULL AUTO_INCREMENT,
	  nome VARCHAR(50) NOT NULL,
	  email VARCHAR(50) NOT NULL,
	  valor_hora INTEGER  NULL,
	  certificados VARCHAR(255) NULL,
	  PRIMARY KEY(id)
);
CREATE TABLE cursos (
	  id INTEGER NOT NULL AUTO_INCREMENT,
	  nome VARCHAR(50) NOT NULL,
	  requisito VARCHAR(255) NULL,
	  carga_horaria SMALLINT  NULL,
	  preco DOUBLE  NULL,
	  PRIMARY KEY(id)
);
 
CREATE TABLE alunos (
	  id INT NOT NULL AUTO_INCREMENT,
	  cpf CHAR(11) NOT NULL,
	  nome VARCHAR(50) NOT NULL,
	  email VARCHAR(50) NOT NULL,
	  fone CHAR(14) NOT NULL,
	  data_nascimento DATE NULL,
	  PRIMARY KEY(id)
);
 
CREATE TABLE turmas (
	  id INTEGER NOT NULL AUTO_INCREMENT,
	  instrutores_id INT NOT NULL,
	  cursos_id INTEGER NOT NULL,
	  data_inicio DATE NULL,
	  data_final DATE NULL,
	  carga_horaria SMALLINT  NULL,
	  PRIMARY KEY(id),
	  INDEX turmas_FKIndex1(cursos_id),
	  INDEX turmas_FKIndex2(instrutores_id),
	  CONSTRAINT CURSO_TURMA_FK FOREIGN KEY(cursos_id)
      REFERENCES cursos(id),
	  CONSTRAINT INSTRUTOR_TURMA_FK FOREIGN KEY(instrutores_id)
      REFERENCES instrutores(id)
);
 
CREATE TABLE matriculas (
	  id INTEGER NOT NULL AUTO_INCREMENT,
	  turmas_id INTEGER  NOT NULL,
	  alunos_id INT NOT NULL,
	  data_matricula DATE ,
	  PRIMARY KEY(id),
	  CONSTRAINT ALUNO_MATRICULA_FK FOREIGN KEY(alunos_id)
	  REFERENCES alunos(id),
	  CONSTRAINT TURMA_MATRICULA_FK FOREIGN KEY(turmas_id)
	  REFERENCES turmas(id)
);

insert into alunos
values (1, 1234, 'aluno1', 'aluno1@gmail.com', 1234, 010101);
insert into alunos
values (2, 1235, 'aluno2', 'aluno2@gmail.com', 1235, 010101);
insert into alunos
values (3, 1236, 'aluno3', 'aluno3@gmail.com', 1235, 010101);
insert into alunos
values (4, 1237, 'aluno4', 'aluno4@hgmail.com', 1235, 010101);
insert into alunos
values (5, 1238, 'aluno5', 'aluno5@gmail.com', 1235, 010101);
select * from alunos;

insert into cursos
values (1, 'curso1', 'requisito1', 1, 1);
insert into cursos
values (2, 'curso2', 'requisito2', 2, 2);
insert into cursos
values (3, 'curso3', 'requisito3', 3, 3);
insert into cursos
values (4, 'curso4', 'requisito4', 4, 4);
insert into cursos
values (5, 'curso5', 'requisito5', 5, 5);
select * from cursos;

insert into instrutores
values (1, 'instrutor1', 'inst1@gmail.com', 1, 'certificados1');
insert into instrutores
values (2, 'instrutor2', 'inst2@gmail.com', 2, 'certificados2');
insert into instrutores
values (3, 'instrutor3', 'inst3@gmail.com', 3, 'certificados3');
insert into instrutores
values (4, 'instrutor4', 'inst4@gmail.com', 4, 'certificados4');
insert into instrutores
values (5, 'instrutor5', 'inst5@gmail.com', 5, 'certificados5');
select *from instrutores;

insert into turmas
values (1, 1, 1, 010101, 020101, 11);
insert into turmas
values (2, 2, 2, 010101, 020101, 11);
insert into turmas
values (3, 3, 3, 010101, 020101, 11);
insert into turmas
values (4, 4, 4, 010101, 020101, 11);
insert into turmas
values (5, 5, 5, 010101, 020101, 11);
select *from turmas;

insert into matriculas
values (1, 1, 1, 010101);
insert into matriculas
values (2, 2, 2, 010101);
insert into matriculas
values (3, 3, 3, 010101);
insert into matriculas
values (4, 4, 4, 010101);
insert into matriculas
values (5, 5, 5, 010101);
select *from matriculas;

update instrutores
set nome = 'outro'
where id = 1;
select *from instrutores;
update instrutores
set email = 'outro@gmail.com'
where nome = 'mudou';
select *from instrutores;
update cursos
set nome = 'outro'
where id = 1;
select *from cursos;
update cursos
set requisito = 'outro'
where nome = 'outro';
select *from cursos;
update turmas
set instrutores_id = 5
where id = 1;
select *from turmas;
update turmas
set instrutores_id = 5
where id = 2;
select *from turmas;

delete from matriculas
where id = 5;
delete from matriculas
where id = 4;
select *from matriculas;
delete from turmas
where id = 5;
delete from turmas
where id = 4;
select *from turmas;
delete from cursos
where id = 5;
delete from cursos
where id = 4;
select *from cursos;
delete from alunos
where id = 5;
delete from alunos
where id = 4;
select *from alunos;
delete from instrutores
where id = 1;
delete from instrutores
where id = 2;
select *from instrutores;