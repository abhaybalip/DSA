-- sql - Data Order
create table Test(
    id int,
    user char(10),
    lev int
);
INSERT INTO Test VALUES(1,"user 1",0);
INSERT INTO Test VALUES(5,"user 2",1);
INSERT INTO Test VALUES(2,"user 3",1);
INSERT INTO Test VALUES(6,"user 4",2);
INSERT INTO Test VALUES(7,"user 5",2);
INSERT INTO Test VALUES(10,"user 6",2);

-- display data in ASC or DESC order
select * from Test ORDER BY id ASC;
SELECT * from Test order by user Asc;

select id,user from Test order BY lev DESC;

drop TABLE Test;