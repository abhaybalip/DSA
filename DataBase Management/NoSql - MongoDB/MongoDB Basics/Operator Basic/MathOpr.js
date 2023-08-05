// MongoDB - Math Opr

// abs Opr
db.score.aggregate([
   {
     $school: { marks: { $abs: { $subtract: [ "$max", "$min" ] } } }
   }
])

// round Opr
db.samples.aggregate( [ { $project: { roundedValue: { $round: [ "$value", 1 ] } } } ] )

// ceil Opr
db.samples.aggregate([ { $project: { value: 1, ceilingValue: { $ceil: "$value" } } } ])

// floor Opr
db.samples.aggregate( [ { $project: { value: 1, floorValue: { $floor: "$value" } } } ] )

// trunc Opr
db.samples.aggregate( [ { $project: { truncatedValue: { $trunc: [ "$value", 1 ] } } } ] )

// expoent Opr
db.accounts.aggregate( [ { $project: { effectiveRate: { $subtract: [ { $exp: "$rate"}, 1 ] } } } ] )

// pow Opr
db.quizzes.aggregate( [ { $project: { variance: { $pow: [ { $stdDevPop: "$scores.score" }, 2 ] } } } ] )

// sqrt Opr
db.points.aggregate([
    {
      $project: {
         distance: {
            $sqrt: {
                $add: [
                   { $pow: [ { $subtract: [ "$p2.y", "$p1.y" ] }, 2 ] },
                   { $pow: [ { $subtract: [ "$p2.x", "$p1.x" ] }, 2 ] }
                ]
            }
         }
      }
    }
 ])
 
// ln Opr
db.sales.aggregate( [ { $project: { x: "$year", y: { $ln: "$sales"  } } } ] )

// log Opr
db.examples.aggregate([
   { $project: { bitsNeeded:
      {
         $floor: { $add: [ 1, { $log: [ "$positiveInt", 2 ] } ] } } }
      }
])
