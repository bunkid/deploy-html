const express = require('express')
const fs = require('fs');
const app = express()
const port = 3000

app.use(express.urlencoded());
app.use(express.json())

const users = [
    {
      id: 1,
      name: "Toi la nguoi 1",
      Age: 18
    },
    {
      id: 2,
      name: "Toi la nguoi 2",
      Age: 19
    },
    {
      id: 3,
      name: "Toi la nguoi 3",
      Age: 20
    },
    {
      id: 4,
      name: "Toi la nguoi 4",
      Age: 21
    }
  ]

  const logToken = (req, res, next) => {
    req.user= 'ten'
    const token = req.headers['authorization']
    if (token) {
        console.log('Authorization bearer token',  token)
    }
    else {
        console.log('ko co token')
    }
    next();
  }
  
  app.get('/users'
  // ,logToken
  ,(req, res) => {
    req.user // biết ai đang đăng nhập 
    fs.readFile('data.json', 'utf8', (err, data) => {
        if (err) {
          res.send('lỗi đọc file')
          return
      }
      res.send(data)
    })
})

app.listen(port, () => { 
    console.log(`Example app listening on port ${port}`)
  })