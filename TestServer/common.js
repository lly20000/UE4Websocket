var fs = require('fs')
const WebSocket = require('ws');
var fs = require('fs');

function CreateWebSocketServer(host, port)
{
    var server = new WebSocket.Server({ port: port, host:host} );
    server.on('connection', function connection(client, req) {
    client.on('message', function incoming(message) {
         //cb.OnRequest(client, message);
         client.send("rsp:" + new Date(), null, (error)=>{
             console.log("send error:" + error)
         })
    });

    client.on('close', function (errno, message) {
        console.log("closed:" + errno + " " + message)
    });
    
    client.on('error', function(err){
        console.log("error:" + err);
    } )
});
}


CreateWebSocketServer("localhost", 8080)
