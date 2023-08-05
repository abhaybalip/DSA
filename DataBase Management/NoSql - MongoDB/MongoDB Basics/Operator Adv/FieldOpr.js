// MongoDB - Field Opr

// $Rename Opr
db.books.updateMany( {}, { $rename: { "nmae": "name" } } )

// $Set Opr
db.users.updateOne(
    { _id: ObjectId("user_id") },
    {
       $set: {
          age: 30,
          email: "new-email@example.com"
       }
    }
);

// $Unset Opr
db.users.updateOne(
    { _id: ObjectId("60cfa2d6e7884b72f0a8c927") },
    { $unset: { email: "" } }
);