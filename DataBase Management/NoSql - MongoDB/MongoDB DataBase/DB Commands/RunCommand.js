// MongoDB - Run Command

db.getCollection('language');

db.runCommand({
    insert: 'language',
    documents: [
        {
            name: 'c language',
            ext: 'c'
        }
    ],
    ordered: false,
    writeConcern: null,
    bypassDocumentValidation: null
});

db.runCommand({
    delete: 'language',
    deletes: [
        {
            name: 'java language'
        }
    ]
});

db.runCommand({
    update : 'language',
    updates: [
        {$set: null}
    ]
});

db.runCommand({
    find: "user",
    filter: { Age: { $gte: 18 }},
    projection: { Name: 1,Age : 1,city: 1 },
    sort: { Name: 1 },
    limit: 6
});

db.runCommand({
    findAndModify: "user",
    query: { Name: "" },
    update: { $inc: { Age: 1 } },
    upsert: true
});