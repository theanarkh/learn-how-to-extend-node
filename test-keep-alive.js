const net = require('net');
net.createServer((socket) => {
	console.time('hello')
//	socket.setKeepAlive(true, 1000, 1);
	socket.setTCPTimeout(50);
	socket.on('error',(a,b)=> {console.log(a,b,'\n')});
	socket.on('close',function () {
     		console.timeEnd('hello')
	});
}).listen(10000);
