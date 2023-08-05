-- sql - Update Command
CREATE TABLE Test(
    id int,
    user char(10),
    lev int
);
INSERT INTO Test VALUES(10,"user 1",0);
INSERT INTO Test VALUES(20,"user 2",1);
INSERT INTO Test VALUES(30,"user 3",1);
INSERT INTO Test VALUES(50,"user 5",2);
INSERT INTO Test VALUES(40,"user 4",1);

insert into Test(id,lev) VALUES(60,2);
insert into Test(id,user) VALUES(70,"user 7");

-- update data at where condition
UPDATE Test set user="user 6" where id = 60;
UPDATE Test set lev = 3 WHERE id = 70;

UPDATE Test SET lev = 2 WHERE user = "user 4";

-- update data at all pos
UPDATE Test SET user = "user";

drop TABLE Test;