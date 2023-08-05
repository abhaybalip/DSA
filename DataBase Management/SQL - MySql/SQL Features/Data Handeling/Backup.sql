-- sql - DataBase BackUp

CREATE DATABASE Test_DataBase;

CREATE TABLE Test(
    id int,
    user char(10),
    lev int
);
INSERT INTO Test VALUES(10,"user 1",0);
INSERT INTO Test VALUES(20,"user 2",1);
INSERT INTO Test VALUES(30,"user 3",1);
INSERT INTO Test VALUES(40,"user 4",2);
INSERT INTO Test VALUES(50,"user 5",2);
INSERT INTO Test VALUES(60,"user 6",2);

SELECT id,user,lev FROM Test
INTO outfile 'C:\Users\abhay\Documents\MySql\backup.txt';

drop table Test;