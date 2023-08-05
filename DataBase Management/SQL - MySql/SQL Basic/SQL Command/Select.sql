-- sql - Selection

CREATE TABLE Person(
    Id int,
    name char(10)
);
INSERT into person VALUES(10,"user 1");
INSERT into person VALUES(20,"user 2");
INSERT into person VALUES(30,"user 3");
INSERT into person VALUES(40,"user 4");
INSERT into person VALUES(50,"user 5");

-- display only specified column
SELECT id from person;

-- select entire column
SELECT * from person;

-- select according to where condition
SELECT * from person where Id = 50;

INSERT into person VALUES(10,"user 6");
INSERT into person VALUES(10,"user 7");

-- avoid duplicate data
SELECT DISTINCT Id from person;

-- count data
SELECT count(Id) from person;

-- count data without duplicates
SELECT count(DISTINCT Id) from person;

-- limited selection
SELECT * FROM person WHERE Id>20
LIMIT 3;

DROP TABLE person;