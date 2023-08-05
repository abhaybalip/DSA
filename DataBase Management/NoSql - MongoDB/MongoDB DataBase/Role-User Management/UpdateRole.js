// MongoDb - Update Role

db.adminCommand({
    updateRole: "readWrite",
    privileges:[
        {
            resource: { db: "test", collection: "" },
            actions: ['find']
        }
    ],
    roles:[
        { role: "readWrite", db: "test" }
    ],
      writeConcern: null
});