XCBC Core
=============

Setup
---------------------
XCBC Core is the original XCBC client and it builds the backbone of the network. It downloads and, by default, stores the entire history of XCBC transactions, which requires a few hundred gigabytes of disk space. Depending on the speed of your computer and network connection, the synchronization process can take anywhere from a few hours to a day or more.

To download XCBC Core, visit [xcbccore.org](https://computationbenefactorcoin.com/en/download/).

Running
---------------------
The following are some helpful notes on how to run XCBC Core on your native platform.

### Unix

Unpack the files into a directory and run:

- `bin/xcbc-qt` (GUI) or
- `bin/xcbcd` (headless)

### Windows

Unpack the files into a directory, and then run xcbc-qt.exe.

### macOS

Drag XCBC Core to your applications folder, and then run XCBC Core.

### Need Help?

* See the documentation at the [XCBC Wiki](https://computationbenefactorcoin.com/)
for help and more information.
* Ask for help on [XCBC StackExchange](https://xcbc.stackexchange.com).
* Ask for help on #xcbc on Libera Chat. If you don't have an IRC client, you can use [web.libera.chat](https://computationbenefactorcoin.com/).
* Ask for help on the [XCBCTalk](https://computationbenefactorcoin.com/) forums, in the [Technical Support board](https://computationbenefactorcoin.com/index.php?board=4.0).

Building
---------------------
The following are developer notes on how to build XCBC Core on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [Dependencies](dependencies.md)
- [macOS Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Windows Build Notes](build-windows.md)
- [FreeBSD Build Notes](build-freebsd.md)
- [OpenBSD Build Notes](build-openbsd.md)
- [NetBSD Build Notes](build-netbsd.md)
- [Android Build Notes](build-android.md)
- [Gitian Building Guide (External Link)](https://github.com/ComputationBenefactorCoin/xcbc/docs/blob/master/gitian-building.md)

Development
---------------------
The XCBC repo's [root README](/README.md) contains relevant information on the development process and automated testing.

- [Developer Notes](developer-notes.md)
- [Productivity Notes](productivity.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- [Source Code Documentation (External Link)](https://computationbenefactorcoin.com/)
- [Translation Process](translation_process.md)
- [Translation Strings Policy](translation_strings_policy.md)
- [JSON-RPC Interface](JSON-RPC-interface.md)
- [Unauthenticated REST Interface](REST-interface.md)
- [Shared Libraries](shared-libraries.md)
- [BIPS](bips.md)
- [Dnsseed Policy](dnsseed-policy.md)
- [Benchmarking](benchmarking.md)

### Resources
* Discuss on the [XCBCTalk](https://computationbenefactorcoin.com/) forums, in the [Development & Technical Discussion board](https://computationbenefactorcoin.com/index.php?board=6.0).
* Discuss project-specific development on #xcbc-core-dev on Libera Chat. If you don't have an IRC client, you can use [web.libera.chat](https://computationbenefactorcoin.com/-core-dev).

### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [xcbc.conf Configuration File](xcbc-conf.md)
- [Files](files.md)
- [Fuzz-testing](fuzzing.md)
- [I2P Support](i2p.md)
- [Init Scripts (systemd/upstart/openrc)](init.md)
- [PSBT support](psbt.md)
- [Reduce Memory](reduce-memory.md)
- [Reduce Traffic](reduce-traffic.md)
- [Tor Support](tor.md)
- [ZMQ](zmq.md)

License
---------------------
Distributed under the [MIT software license](/COPYING).
