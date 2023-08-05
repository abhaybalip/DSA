// MongoDb - Logical Operator

// Not Opr
db.products.find({"price":{$not:{$gt:200}}})

// And Opr
db.products.find({"price":{$and:[true,false]}})

// Or Opr
db.products.find({"price":{$and:[true,true]}})

// Nor Opr
db.products.find({"price":{$nor:[true,true]}})

// Nand Opr
db.products.find({"price":{$nand:[true,true]}})