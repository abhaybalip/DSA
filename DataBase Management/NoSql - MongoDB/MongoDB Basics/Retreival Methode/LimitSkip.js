// MongoDB - Limit

// No of documents to show
db.user.find().limit(1);

// Skip Methode
// skip first n documents
db.user.find().skip(2);