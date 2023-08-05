-- sql - Null Function
CREATE TABLE Test(
    id int,
    user char(10),
    lev int
);
INSERT INTO Test VALUES(10,"user 1",0);
INSERT INTO Test VALUES(20,"user 2",1);
INSERT INTO Test VALUES(30,"user 3",1);
INSERT INTO Test VALUES(40,"user 4",2);
INSERT INTO Test(id,user) VALUES(50,"user 5");
INSERT INTO Test(id,user) VALUES(60,"user 6");

-- replace null value
SELECT id,user,IfNull(lev,"No Level") FROM Test;

DROP TABLE Test;