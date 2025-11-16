// SPDX-License-Identifier: MIT
pragma solidity ^0.8.0;

contract Mycontract {
    // State Variables
    int256 public myInt = 1;
    uint public myUint  = 1;
    uint256 public myUint256  = 1;
    uint8 public myUint8 = 1;

    string public myString = "Hello, world!";
    bytes32 public myBytes32 = "Hello, world!";

    address public myAddress =  0xABdf616378fcd9EC926a599529edDf395cEb6cBD;

    // creating a structure
    struct MyStruct {
        uint256 myUint256;
        string mystring;
    }

    // passing values into Mystruct
    MyStruct public myStruct = MyStruct(1, "Hello, world!");


    // // Local Variables
    // function getValue() public pure returns(uint) {
    //     uint value = 1;
    //     return value;
    // }

    // Arrays

    // creating arrays

    // 1D arrays
    uint[] public uintArray = [1,2,3];
    string[] public stringArray = ["apple","banana", "carrot"];
    string[] public value;

    // 2D arrays
    uint256[][] public array2D = [[1, 2, 3], [4, 5, 6]];

    //Manipulating arrays

    
    // _value -> parameter of function
    // memory -> holds functions argument data and is wiped after execution.
    // storage -> holds data persistently and consumes more gas

// Function to add an value to array
function addValue(string memory _value) public{
    value.push(_value);
}

//  Function to find length of array
function valueCount() public view returns(uint){
    return value.length;
}

}