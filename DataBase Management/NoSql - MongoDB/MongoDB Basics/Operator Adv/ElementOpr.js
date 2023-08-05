// MongoDB - Element Operator

// Exist Opr
db.books.find({'qty':{$exists: true, $nin:[ 5, 15 ]}})

// Type Opr
db.books.find({"bookid" :{$type : 2}});

// Element Match Opr
db.books.find(
    {'results':{$elemMatch:{$gte: 500,$lt: 400}}});

// field is an array that contains all the specified elements
db.books.find({'tags': {$all:[ "Java", "MongoDB", "RDBMS"]}});

// Array of size Opr
db.collection.find({'field':{$size: 2}});