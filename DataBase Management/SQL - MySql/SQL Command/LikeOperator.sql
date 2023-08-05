-- sql - Like Operator
CREATE TABLE Test(
    Id int,
    code char(10)
);
INSERT INTO Test VALUES(10,"cibco");
INSERT INTO Test VALUES(20,"cbbur");
INSERT INTO Test VALUES(30,"ocwec");
INSERT INTO Test VALUES(40,"nobwj");
INSERT INTO Test VALUES(50,"nxobu");

-- Like operator condition
-- start with
SELECT * FROM Test WHERE code LIKE "c%";
-- end with
SELECT * FROM Test WHERE code LIKE "%c";
-- check for value in between
SELECT * FROM Test WHERE code LIKE "%c%";
-- start with and end with
SELECT * FROM Test WHERE code Like "c%b";

-- _ represents single character
-- start with value at pos 2nd
SELECT * FROM Test WHERE code Like "_c%";

DROP TABLE Test;