var http = require('http');
var dt = require('./myfirstmodule');

http.createServer(function(req,res){
    res.writeHead(200,{'content-type': 'text/html'});
res.write("the date and time is currently: " + dt.myDateTime());
res.end();
}).listen(8080); 
exports.myDateTime=function(){
    return new Date().toString();
};