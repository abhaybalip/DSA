-- sql - procedure
CREATE DATABASE Test_db;
use Test_db;
CREATE TABLE Test(
    id int,
    user char(10)
);
-- create procedure
CREATE procedure InsertData(In pid int,In puser char(10))
begin
insert into Test values(pid,puser);
end;

-- call procedure
call InsertData(10,'u10');
call InsertData(20,NULL);

CREATE procedure DisplayData(In pid int)
begin
select id,user from Test where id = pid;
end;
call DisplayData(10);

drop DATABASE Test_db;