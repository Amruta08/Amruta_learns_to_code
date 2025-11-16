// SPDX-License-Identifier: MIT
pragma solidity ^0.8.0;

contract mappings {
    // Mappings
    //stores data in key:value pairs
    //mapping(key_datatype => value_datatype) NameOfMapping;

    // adding item
    // NameOfMapping[key] = value;

    mapping(uint256 => string) names;

    constructor() {
        names[1] = "Adam";
        names[2] = "Bruce";
        names[3] = "Carl";
    }
}
