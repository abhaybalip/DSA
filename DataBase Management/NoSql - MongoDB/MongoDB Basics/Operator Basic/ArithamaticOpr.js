// MongoDB - Arithamatic Opr

// $add Opr
db.books.aggregate([
    {$project: {
        item: 1, total: {
            $add: [ "$price", "$tax" ]
        }}
    }
])

// $subtract Opr
db.sales.aggregate( [ { $project: { item: 1, total: { $subtract: [ { $add: [ "$price", "$fee" ] }, "$discount" ] } } } ] )

// $multiply Opr
db.sales.aggregate( [ { $project: { date: 1, item: 1, total: { $multiply: [ "$price", "$quantity" ] } } } ] )

// $divide Opr
db.planning.aggregate( [ { $project: { name: 1, workdays: { $divide: [ "$hours", 8 ] } } } ] )

// $mod Opr
db.planning.aggregate(
    [
      { $project: { remainder: { $mod: [ "$hours", "$tasks" ] } } }
    ]
) 