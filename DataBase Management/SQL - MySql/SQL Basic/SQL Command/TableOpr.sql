-- sql - Table Operation
-- creat table
CREATE TABLE Test(
    Id int,
    user VARCHAR(10),
    lev int
);
INSERT INTO Test VALUES(10,'User 1',10);
INSERT INTO Test VALUES(15,'User 2',5);
INSERT INTO Test VALUES(12,'User 3',7);

-- creat table from existing one
CREATE TABLE Test2 as select Id,user,lev from Test;

-- delete / drop table
DROP TABLE Test;

-- delete only table data
TRUNCATE TABLE Test2;

DROP TABLE Test2;