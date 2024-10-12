// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterEdge",
    products: [
        .library(name: "TreeSitterEdge", targets: ["TreeSitterEdge"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterEdge",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterEdgeTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterEdge",
            ],
            path: "bindings/swift/TreeSitterEdgeTests"
        )
    ],
    cLanguageStandard: .c11
)
