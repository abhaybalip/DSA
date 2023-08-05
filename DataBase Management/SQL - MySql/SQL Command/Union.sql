-- sql - Union Operator
-- applies on columns having same data type
CREATE TABLE Test(
    Id int,
    user char(10),
    lev int
);
INSERT INTO Test VALUES(10,"user 1",0);
INSERT INTO Test VALUES(20,"user 2",1);
INSERT INTO Test VALUES(30,"user 3",1);
INSERT INTO Test VALUES(40,"user 4",2);
INSERT INTO Test VALUES(50,"user 5",2);
INSERT INTO Test VALUES(60,"user 6",2);

CREATE TABLE Test2(
    Id int,
    code char(1)
);
INSERT INTO Test2 VALUES(10,'A');
INSERT INTO Test2 VALUES(20,'A');
INSERT INTO Test2 VALUES(30,'A');
INSERT INTO Test2 VALUES(40,'B');

SELECT Id FROM Test Union SELECT Id FROM Test2;

SELECT lev FROM Test Union SELECT Id FROM Test2;

DROP TABLE Test;
DROP TABLE Test2;