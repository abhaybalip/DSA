// MongoDB - Role Creation

db.createRole({
    role: "admin",
    privileges: [
        { resource: { db: "test" }, actions: ["read", "write"] }
    ]
});

db.adminCommand({
    createRole: "admin",
    privileges: [
        { resource: { db: "test", collection: "" }, actions: [ "find", "update", "insert", "remove" ] },
    ],
    roles: [
        { role: "readWrite", db: "test" }
    ],
    writeConcern: null
});