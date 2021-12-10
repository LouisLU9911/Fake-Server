package(default_visibility = ["//visibility:public"])

cc_library(
    name = "http-lib",
    srcs = [
        ":http_conn.cpp",
    ],
    deps = [
        ":http-hdr",
        "//CGImysql:CGImysql-lib",
    ],
)

# TODO: Solve the circular dependency
cc_library(
    name = "http-hdr",
    hdrs = [
        ":http_conn.h",
    ],
    deps = [
        "//CGImysql:CGImysql-lib",
        "//lock:lock-lib",
        "//log:log-lib",
        "//timer:timer-hdr",
    ],
)
