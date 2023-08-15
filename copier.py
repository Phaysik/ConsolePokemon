#!/usr/bin/env python3
"""
Author   : Matthew Moore
Date     : 08/13/2023
Revision : 08/13/2023
"""

from re import sub


def main() -> None:
    types: list[str] = [
        "Electric",
        "Grass",
        "Ice",
        "Fighting",
        "Poison",
        "Ground",
        "Flying",
        "Psychic",
        "Bug",
        "Rock",
        "Ghost",
        "Dragon",
        "Dark",
        "Steel",
        "Fairy",
    ]
    folders: list[str] = ["MonoTypes", "DualTypes"]
    templateSrcDir: str = "tests/types"

    for i in range(len(types) - 1):
        for folder in folders:
            srcDir: str = f"{templateSrcDir}/{types[i]}Type/{folder}"
            newDir: str = f"{templateSrcDir}/{types[i + 1]}Type/{folder}"
            srcFileName: str = f"{srcDir}/{types[i].lower()}Type{folder}Test.cpp"
            newFileName: str = f"{newDir}/{types[i + 1].lower()}Type{folder}Test.cpp"
            fileContent: list[str] = []
            with open(srcFileName, "r") as file:
                fileContent = file.readlines()

            joinedContent: str = "".join(fileContent)
            nameReplaced: str = sub(
                types[i],
                types[i + 1],
                sub(types[i].lower(), types[i + 1].lower(), joinedContent),
            )
            dateReplaced: str = sub(r"\d{2}/\d{2}/\d{4}", "08/15/2023", nameReplaced)
            typeAndTypeReplaced: str = sub(
                f"{types[i + 1]}And{types[i + 1]}",
                f"{types[i + 1]}And{types[i]}",
                dateReplaced,
            )
            typeXTypeReplaced: str = sub(
                f"Types{types[i + 1]}, {types[i + 1]}x{types[i + 1]}",
                f"Types{types[i + 1]}, {types[i + 1]}x{types[i]}",
                typeAndTypeReplaced,
            )

            finalReplaced: str = typeXTypeReplaced

            if folder == "MonoTypes":
                finalReplaced = typeXTypeReplaced.replace(
                    f"{types[i + 1]}x{types[i + 1]}", f"{types[i + 1]}x{types[i]}", 1
                )
                finalReplaced = finalReplaced.replace(
                    f", {types[i + 1]}Type", f", {types[i]}Type", 2
                )

            with open(newFileName, "w+") as file:
                file.write(finalReplaced)

            print(f"Written to {types[i + 1]}/{folder}")


if __name__ == "__main__":
    main()
