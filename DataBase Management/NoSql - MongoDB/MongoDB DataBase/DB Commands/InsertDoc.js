// MongoDB - 
// Inserting Documents in collection

use('test')

// Insert Single Doc
db.user.insertOne({
    Name:"random_name",
    Age: 10,
    gender:' '
})
// Insert Array of Doc
db.user.insertMany([
    {
        Name:"random_name",
        Age: 10,
        gender:'M'
    },
    {
        Name:"random_name",
        Age: 9,
        gender:'M'
    },
    {
        Name:"random_name",
        Age: 8,
        gender:'M'
    }
])

// Insert Bulk API
var bulk = db.user.initializeUnorderedBulkOp();
bulk.insertMany([]);
bulk.execute();