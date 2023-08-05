-- sql - Copy Table

use Test_db;
CREATE TABLE Test(select ID,Name,CountryCode from world.city);

SELECT * from Test;