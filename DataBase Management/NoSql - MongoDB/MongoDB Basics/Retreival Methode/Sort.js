// MongoDB - Sort

// Ascending Order
db.user.find().sort({Age:-1});

// Descending Order
db.user.find().sort({Age:1});