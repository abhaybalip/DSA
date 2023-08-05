-- sql - Alter Operation
CREATE Table Test(
    Id int,
    user char(10),
    lev int
);
INSERT INTO Test VALUES(10,'User 1',10);
INSERT INTO Test VALUES(15,'User 2',5);
INSERT INTO Test VALUES(12,'User 3',7);

-- rename table
ALTER TABLE Test Rename Test_table;

-- Add column
ALTER TABLE test_table ADD column code char(5);
-- delete / drop column
ALTER TABLE test_table DROP code;
-- rename column
ALTER TABLE test_table rename column Id to user_id;

-- modify column
ALTER TABLE test_table modify column user char(20);

DROP TABLE test_table;