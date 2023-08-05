// MongoDB - DataBase

var DataBase = 'test_database'

// use DataBase : if exist else create and use

show('dbs');

use(DataBase);

// Drop DataBase
db.dropDatabase();