-- sql - Not Null
CREATE TABLE Test(
    Id int Not Null,
    user char(10)
);
INSERT INTO Test VALUES(1,'u1');
INSERT INTO Test VALUES(3,'u3');
INSERT INTO Test VALUES(2,'u2');

-- error line : Insert Into Test(user) Values('u 4');
DROP TABLE Test;