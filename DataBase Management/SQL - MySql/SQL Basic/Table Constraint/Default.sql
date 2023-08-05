-- sql - Defailt constraint
CREATE TABLE Test(
    id int,
    -- set None if user not given
    user char(10) Default 'None'
);