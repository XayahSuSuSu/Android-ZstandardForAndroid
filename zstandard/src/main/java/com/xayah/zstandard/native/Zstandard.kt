package com.xayah.zstandard.native

class Zstandard {
    init {
        System.loadLibrary("zstandard")
    }

    external fun version(): String
}
