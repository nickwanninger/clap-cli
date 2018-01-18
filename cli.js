#!/usr/bin/env node

const clap = require('./index')

const words = process.argv.splice(2).join(' ')
if (words.length > 0) {
	// print the args but clapped
	console.log(clap(words))
} else {
	// print the data from stdin
	process.stdin.on('data', function(data) {
		data = data.toString('utf8')
		console.log(clap(data))
	})
	process.stdin.on('end', () => process.exit(0))
}
