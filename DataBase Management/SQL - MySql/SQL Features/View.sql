-- sql - View
CREATE TABLE Test(
    id int,
    user char(10)
);
INSERT INTO Test VALUES(1,'u1');
INSERT INTO Test VALUES(2,'u2');
INSERT INTO Test VALUES(3,'u3');

-- creating view
CREATE VIEW  person As
select id,user from Test;

SELECT * from person;

-- replace
create or replace view person as
select id from Test;

SELECT * from person;

-- delete view
DROP VIEW Person;