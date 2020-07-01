const net = require('net');
net.createServer((socket) => {
	console.time('hello')
//	socket.setKeepAlive(true, 1000, 1);
	socket.setTCPTimeout(50);
	socket.on('error',(a,b)=> {console.log(a,b,'\n')});
	socket.on('close',function () {
     		console.timeEnd('hello')
	});
	socket.on('timeout', ()=> {console.log('aha')})
	setTimeout(() => {socket.write('1', (a,b,c) => {console.log(a,b,c)});setTimeout(() => {socket.write('1',(a,b,c) => {console.log(a,b,c)});}, 1000)}, 5000)
}).listen(10000);
