-- sql - Basics
-- creating database
CREATE DATABASE Test_DataBase;

-- create table
CREATE TABLE Personal_Info(
    Id int,
    Name char(10),
    Age int
);

-- add data to table
INSERT INTO personal_info VALUES(10,"User1",20);
INSERT INTO personal_info VALUES(20,"User2",20);
INSERT INTO personal_info VALUES(30,"User3",20);

-- display table
SELECT * FROM personal_info;

-- delete column
delete from Personal_Info where Id = 10

-- delete table
drop table Personal_Info;

-- delete database
drop DATABASE Test_DataBase;