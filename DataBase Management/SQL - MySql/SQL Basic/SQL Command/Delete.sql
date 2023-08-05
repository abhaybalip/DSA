-- sql - Delete Command
CREATE TABLE Test(
    Id int,
    name char(10)
);
INSERT into Test VALUES(10,"user 1");
INSERT into Test VALUES(20,"user 2");
INSERT into Test VALUES(30,"user 3");
INSERT into Test VALUES(40,"user 4");
INSERT into Test VALUES(50,"user 5");

-- delete operation on row
Delete from Test where Id = 10;

delete from Test where Id = 20 && name = "user 2";

-- delete all records
delete * from Test;

-- delete table
DROP TABLE Test;

-- delete datbase
DROP DATABASE Test_database;