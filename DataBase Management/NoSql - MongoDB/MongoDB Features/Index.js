// MongoDB - Indexing

db.language.createIndex({ext: -1}, {name: 'ext_index'});

db.language.find({ext: 'c'})