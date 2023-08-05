// MongoDB - Collection

use('test');

// create collection
db.getCollection('phone');

db.phone.insertOne({
    brand : 'samsung',
    model : 'm01s',
    color : 'grey',
    ram : 3
});


// drop collection
db.phone.drop();