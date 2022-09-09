create database revendedora;

use revendedora;

create table automovel(
	renavam char(11) primary key unique,
    placa char(7) unique,
    marca varchar(20) not null,
    modelo varchar(20) not null,
    ano_fabricacao int not null,
    ano_modelo int not null,
    cor varchar(20) not null,
    motor varchar(20) not null,
    numero_portas int not null,
    tipo_combustivel varchar(10) not null,
    preco float not null
);

create table clientes(
	id_cliente int primary key unique auto_increment,
    nome varchar(15) not null,
    sobrenome varchar(15) not null,
    telefone char(11),
    id_endereco int
);

create table endereco_completo(
	id_endereco int primary key,
    rua varchar(50) not null,
    numero int not null,
    complemento varchar(50),
    bairro varchar(20) not null,
    cidade varchar(20) not null,
    estado varchar(20) not null,
    cep char(8) not null
);

create table vendedores(
	id_vendedor int primary key unique auto_increment,
    nome varchar(15) not null,
    sobrenome varchar(15) not null,
    telefone char(11),
    id_endereco int,
    data_admissao date not null,
    salario_fixo float not null
);

create table negocios(
	id_negocio int primary key auto_increment,
    data_negocio date not null,
    preco float not null,
    id_cliente int not null,
    id_vendedor int not null,
    renavam char(11) not null
);

alter table clientes add constraint mora_c foreign key (id_endereco) references endereco_completo(id_endereco);

alter table vendedores add constraint mora_v foreign key (id_endereco) references endereco_completo(id_endereco);

alter table negocios add constraint compra foreign key (id_cliente) references clientes(id_cliente);
alter table negocios add constraint vende foreign key (id_vendedor) references vendedores(id_vendedor);
alter table negocios add constraint negociado foreign key (renavam) references automovel(renavam);