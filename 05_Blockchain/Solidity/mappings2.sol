// SPDX-License-Identifier: MIT
pragma solidity ^0.8.0;

contract mappings2 {
    // nested mappings
    mapping(address => mapping(uint256 => book)) public mybooks;

    struct book {
        string title;
        string author;
    }

    function addMyBook(
        uint256 _id,
        string memory _title,
        string memory _author
    ) public {
        // msg.sender - ethereum addres of person who calls this function
        mybooks[msg.sender][_id] = book(_title, _author);
    }
}
