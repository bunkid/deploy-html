import express from 'express'

const app = express()

app.get('/alo', (req, res) => {
    res.send('DUyên mát');
})

const port = process.env.PORT || 3000
app.listen(port, () => {
    console.log(`Server listening on port ${port}`);
});