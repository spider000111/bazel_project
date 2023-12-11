cc_binary(
    name = "main",
    srcs = ["main.cpp"],
    deps = ["//cpp_gmock_bank:icici_server"],
)

cc_library(
    name = "icici_server",
    srcs = ["icici_server.cpp"],
    hdrs = ["icici_server.h"],
    visibility = ["//visibility:public"],
    deps = ["//cpp_gmock_bank:Iserver"],
)

cc_library(
    name = "Iserver",
    srcs = ["Iserver.cpp"],
    hdrs = ["Iserver.h"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "mock_server",
    srcs = ["mock_server.cpp"],
    hdrs = ["mock_server.h"],
    visibility = ["//visibility:public"],
)