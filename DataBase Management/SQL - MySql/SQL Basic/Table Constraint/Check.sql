-- sql - Check
CREATE TABLE Test(
    Id int,
    user char(10),
    age int not null,
    -- check condition for entered data
    check(age>0)
);