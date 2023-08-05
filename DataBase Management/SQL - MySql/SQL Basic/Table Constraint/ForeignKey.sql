-- sql - Foreign Key
CREATE TABLE Test(
    Id int,
    user char(10)
    -- consider key from another table
    Foreign Key(Personal_Id) Reference Person(Id);
);
INSERT INTO Test VALUES(1,'u1');
INSERT INTO Test VALUES(3,'u3');
INSERT INTO Test VALUES(2,'u2');

DROP TABLE Test;