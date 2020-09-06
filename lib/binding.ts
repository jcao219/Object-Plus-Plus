const addon = require('../build/Release/obj-plus-plus-native');

interface ObjPlusPlus {
    createObject(something: string): { msg: string };
}

export = addon as ObjPlusPlus;

