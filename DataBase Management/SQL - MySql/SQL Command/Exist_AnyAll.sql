-- sql - Exist , Any , All Operator
-- returns boolean value
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

SELECT * FROM Test WHERE EXISTS (SELECT Id FROM Test WHERE lev<0);
SELECT * FROM Test WHERE EXISTS(SELECT Id FROM Test WHERE Id>10);

SELECT * FROM Test WHERE lev = ANY(SELECT lev FROM Test WHERE Id<30);
SELECT * FROM Test WHERE Id = ANY (SELECT Id FROM Test WHERE Id>10);


SELECT * FROM Test WHERE Id = All(SELECT Id FROM Test WHERE Id>30);
SELECT * FROM Test WHERE Id = All(SELECT Id FROM Test WHERE Id=0);


DROP TABLE Test;