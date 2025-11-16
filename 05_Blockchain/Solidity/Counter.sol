// SPDX-License-Identifier: MIT
// Declare solidity version
pragma solidity ^0.8.0;

contract Counter {
    // Contract code goes here...

    // Unsigned integer (+ve integers)
    uint256 public count;

    // Constructor - Gets run only once when the contract is deployed to the blockchain
    constructor() {
        count = 0;
    }

    // Function which returns the count
    // visiblity - public (function can be called outside of smart contract)
    // Visibility - internal (function can be called only inside smart contract)
    // returns(datatype) - spcifies datatype the function returns
    function getCount() public view returns (uint256) {
        return count;
    }

    // Function which increments the count
    function incrementCount() public {
        count++;
    }
}
