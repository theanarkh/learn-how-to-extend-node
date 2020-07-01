const net = require('net');
const socket = net.connect({port: 10000});
console.time('hello');
socket.on('close', () => {
    console.log(console.timeEnd('hello'))
})
