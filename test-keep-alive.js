const net = require('net');
net.createServer((socket) => {
    socket.setKeepAlive(true, 1000, 1000, 1)
}).listen({
    host: '192.168.71.141',
    port: 10000
});
