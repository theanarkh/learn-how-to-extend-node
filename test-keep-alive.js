const net = require('net');
net.createServer((socket) => {
    socket.setKeepAlive(true, 1000, 1000, 1)
}).listen(10000);
