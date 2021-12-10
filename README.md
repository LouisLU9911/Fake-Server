# Fake-Server

This is a repo forked from the original [repo](https://github.com/qinguoyi/TinyWebServer).
And this repo is used to learn the design and details of a CPP server by the author.

## Supported platforms

* Ububtu Linux 18.04

## Build

**Step 1:** Install libmysqlclient-dev

```bash
apt-get install libmysqlclient-dev
```

**Step 2:** Bazel build

```bash
bazel build //:server
```

## Run

```bash
./bazel-bin/server
```

## Format

```bash
make format
# If you want to use buildifier, you should run the following commands:
go install github.com/bazelbuild/buildtools/buildifier@latest
buildifier -r ./
```

## Roadmap

* [X] Use [Bazel](https://bazel.build/)
* [ ] Resolve all TODOs
* [ ] Use github CI
* [ ] Figure out the bottleneck
* [ ] Improve the performance
