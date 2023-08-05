// MongoDB - Update Opr

// $currentDate : 
db.users.updateOne(
    { _id: ObjectId("your_document_id") },
    {
      $currentDate:{
        lastModified:{ $type: "date" },
        dateOnly: true
      }
    }
);

// $inc Opr : Increment value
db.users.updateOne(
    { _id: ObjectId("user_id") }, // Specify the user by their unique _id
    { $inc: { points: 10 } } // Increment the points field by 10
);

// $min Opr : It changes the value of the field to a specified value if the specified value is less than the current value of the filed.
db.books.update( { _id: 21 }, { $min: { highprice: 500 } } );

// $Max Opr : It changes the value of the field to a specified value if the specified value is greater than the current value of the filed.
db.books.update( { _id: 21 }, { $max: { highprice: 950 } } )


// $Mul Opr
db.books.update(
  { _id: 1 },
  { $mul: { price: NumberDecimal("180.25"), qty: 2 } }
)