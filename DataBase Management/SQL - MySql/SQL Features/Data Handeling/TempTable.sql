-- sql - Temporary Table

use Test_db;
create temporary table test(
    id int,
    name char(10),
    code char(5)
);

INSERT INTO test VALUES(01,'rohan','5gh');
INSERT INTO test VALUES(02,'sahil','6kh');
INSERT INTO test VALUES(03,'ramesh','8gm');

SELECT * from test;

drop TABLE test;