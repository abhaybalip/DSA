-- sql - Index
CREATE TABLE Test(
    id int,
    user char(10)
);
INSERT INTO Test VALUES(1,'u1');
INSERT INTO Test VALUES(2,'u2');
INSERT INTO Test VALUES(3,'u3');

-- create index for row
CREATE Index Idx on Test(Id,user);

-- delete index
DROP index idx on Test;

-- Auto Increment Index
CREATE TABLE Tets2(select * from Test);
CREATE Index indx on Test2;
ALTER TABLE Test2 AUTO_INCREMENT = 100;

DROP TABLE Test,Test2;