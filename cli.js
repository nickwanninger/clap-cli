#!/usr/bin/env node

const clap = require("./index")

console.log(clap(process.argv.splice(2).join(" ")))
