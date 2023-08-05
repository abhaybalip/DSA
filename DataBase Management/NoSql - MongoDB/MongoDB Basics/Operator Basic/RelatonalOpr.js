// MongoDB - Operator

// Equal to
db.products.find({"price":{$eq : 999}})

// Greater than
db.products.find({"price":{$gt:999}})

// Greater than - Equal to
db.products.find({"price":{$gte:999}})

// Less than
db.products.find({"price":{$lt:999}})

// Less than - Equal to 
db.products.find({"price":{$lte:999}})


// Equal to In Array
db.products.find({"price":{$in:[999,888,777]}})

// Not Equal to In Array
db.products.find({"price":{$nin:[0,100,200]}})