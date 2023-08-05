-- sql - Joins
-- Inner Join , Outer Join , Left Join , Right Join
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

-- Inner Join - Intersection
SELECT Test2.Id , Test2.code , Test.Id , Test.user
FROM Test2 INNER JOIN Test ON Test.Id = Test2.Id;

-- Left Join - all data from left
SELECT Test2.Id , Test2.code , Test.Id , Test.user
FROM Test2 LEFT JOIN Test ON Test.Id = Test2.Id;

-- Right Join - all data from right
SELECT Test2.Id , Test2.code , Test.Id , Test.user
FROM Test2 RIGHT JOIN Test ON Test.Id = Test2.Id;

-- Outer Join - Union
SELECT Test2.Id , Test2.code , Test.Id , Test.user
FROM Test2 JOIN Test ON Test.Id = Test2.Id;