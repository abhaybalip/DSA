// MongoDB - Evaluation Operator

// Expression Opr
db.store.find({$expr:{$gt:["$product","price"]}})

// Json Schema Opr
db.store.find({$jsonSchema:{
    "key": "value"
}})

// Regex Opr
db.books.find({price:{$regex:/789$/}})

// Text Pattern Opr
db.books.find({
    $text: {
      $search: "search string",
      $caseSensitive: false,
      $diacriticSensitive: false
    }
  })