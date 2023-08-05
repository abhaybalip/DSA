// MongoDB - Delete Doc

use('test')

db.user.insertOne({
    Name:'name_surname'
});

db.user.remove({
    Name:'name_surname'
});