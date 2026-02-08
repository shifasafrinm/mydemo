const http = require("http");
const server = http.createServer((req,res)=> {
    res.write("hello from node.js");
    res.end();
});
server.listen(3000,()=>{ 
    console.log("server http://localhost:3000");
});