// MongoDB
// cleare query cache

use("test")

show('collections')

db.getCollection('user').getPlanCache().clear();

db.runCommand({
    planCacheClear: user,
      query: {Age: {$gte: 19}},
      sort: Name
});