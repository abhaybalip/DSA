-- sql - Where
CREATE TABLE Test(
    id int,
    user char(10),
    lev int
);
INSERT INTO Test VALUES(10,"user 1",0);
INSERT INTO Test VALUES(20,"user 2",1);
INSERT INTO Test VALUES(30,"user 3",1);
INSERT INTO Test VALUES(40,"user 4",1);
INSERT INTO Test VALUES(50,"user 5",2);

select * from Test where id = 10;
select user from Test WHERE id = 20;

INSERT INTO Test VALUES(10,"user 1",0);
INSERT INTO Test VALUES(10,"usre 6",2);

SELECT * from Test WHERE Id = 10;
-- -- where with and operation
SELECT * from Test WHERE Id = 10 && lev = 2;
-- -- where with or operation
SELECT * from Test where lev = 1 || lev = 2;
-- wheere with nor operation
SELECT * from Test where lev != 0;

-- all logical operator can applied
drop TABLE Test;