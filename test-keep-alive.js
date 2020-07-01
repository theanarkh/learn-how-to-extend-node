const net = require('net');
net.createServer((socket) => {
    socket.setKeepAlive(true, 1000, 10, 1);
	socket.on('error',()=> {});
}).listen(10000);
