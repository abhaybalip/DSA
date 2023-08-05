-- sql - Aliases
CREATE TABLE Test(
    Id int,
    user char(10),
    lev int
);
INSERT INTO Test VALUES(10,"user 1",0);
INSERT INTO Test VALUES(20,"user 2",1);
INSERT INTO Test VALUES(30,"user 3",1);
INSERT INTO Test VALUES(40,"user 4",1);
INSERT INTO Test VALUES(50,"user 5",2);
INSERT INTO Test VALUES(60,"user 6",2);

SELECT * FROM Test AS Test_tb;
SELECT user FROM Test as Test_user;
SELECT Id AS Test_Id , user AS Test_user ,lev AS Test_lev FROM Test;

SELECT MIN(Id) AS Test_Min_Id, Max(Id) AS Test_Max_Id FROM Test;

-- select table AS
SELECT T.user,T.lev FROM Test AS T;

SELECT T.user FROM Test AS T WHERE Id BETWEEN 10 and 30;

DROP TABLE Test;