-- sql - Math Function
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

-- return minimum or maximum value
SELECT MIN(Id) FROM Test;
SELECT Max(Id) FROM Test;

-- return count for data
SELECT count(Id) FROM Test;
SELECT count(Id) FROM Test WHERE Id>20;

-- return sum of column
SELECT Sum(Id) FROM Test;

-- return average of column
SELECT Avg(lev) FROM Test WHERE lev>0;

drop TABLE Test;