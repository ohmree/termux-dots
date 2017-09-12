#!/data/data/com.termux/files/usr/bin/env node

const readline = require('readline')
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
})

if ((var str = rl.readline())) let str = process.argv[3]
let mnam = str.split('\n')
let jeff = ""
for (let i = 0; i < mnam.length; ++i) {
    jeff += mnam[i][i]
}
console.log(jeff)

//(mnam[i] == '\n') && i++
