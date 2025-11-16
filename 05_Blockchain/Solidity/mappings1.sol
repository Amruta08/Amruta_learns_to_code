// SPDX-License-Identifier: MIT
pragma solidity ^0.8.0;

contract mappings1 {
    // Combining mappings and structures
    mapping(uint256 => book) public books;

    struct book {
        string title;
        string author;
    }

    // function to add books
    function addBook(
        uint256 _id,
        string memory _title,
        string memory _author
    ) public {
        books[_id] = book(_title, _author);
    }
}
