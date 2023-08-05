// MongoDB - Projection Opr

// $project Opr :
// $ : limits the contents of an array from the query results to contain only the first element matching the query document.
db.users.aggregate(
    [{
      $project: {
        _id: 0, // Ex cluded 
        name: 1, // In cluded
        email: 1
      }
    }]
)

// $meta Opr
db.products.find(
    {$text: {$search: "smartphone"}},
    {score: {$meta: "textScore"}}
)

// $slice :
// limit no of output froma a array
db.books.find({},{comments: {$slice: [5,5]}})