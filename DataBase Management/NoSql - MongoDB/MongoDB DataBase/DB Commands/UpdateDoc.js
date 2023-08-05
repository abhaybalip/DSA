// MongoDB

use('tets')

db.getCollection('phone')
db.phone.insertOne({
    Brand:"Apple",
    Model:'s23'
})

db.phone.updateOne(
    // specify doc
    {'Brand':'Apple'},
    // specify field
    {$set:{
        'Model':'iphone 14'
    }}
)