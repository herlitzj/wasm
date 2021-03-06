const express = require('express')
const app = express()
const PORT = process.env.PORT || 8080

app.use(express.static('public'));

app.get('/', function (req, res) {
   res.sendFile(path.join(__dirname,'public', 'index.html'));
});

app.listen(PORT, () => console.log(`Example app listening on port ${PORT}!`))