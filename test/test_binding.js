const opp = require("../dist/binding.js");

const s = opp.createObject(String(Symbol('lol')));
console.log(s);