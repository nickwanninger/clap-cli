const assert = require('assert')
const clap = require('../index.js')

describe('clap', () => {
	it('should insert claps between words', () => {
		assert.equal(clap('this is a test'), 'this 👏 is 👏 a 👏 test')
	})
})
