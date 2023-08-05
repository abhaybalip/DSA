-- sql - Time Data
-- Data Types : Date , timestamp , year , date time
CREATE TABLE Test(
    user char(10),
    dob date
);
INSERT INTO Test VALUES('user 1','2023-01-01');

-- Incorrect format : INSERT INTO Test VALUES('user 2','2-2-2023');

CREATE TABLE Test2(
    user int,
    t TIMESTAMP
);

-- now function insert current date-time
INSERT INTO Test2 VALUES(10,now());