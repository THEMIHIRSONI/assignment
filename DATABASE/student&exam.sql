create database class;
use class
create table student
(
roll_no int auto_increment,
student_name varchar(20),
branch varchar(20),
primary key( roll_no)
);
insert into student(roll_no,student_name,branch) values (1,"jay","computer science");
insert into student(roll_no,student_name,branch) values (2,"suhani","electronic & com");
insert into student(roll_no,student_name,branch) values (3,"kirti","electronic & com");