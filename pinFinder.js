//Given problem is a person who forget about a pin which is four digit.
//but he knows the absolute difference between first two digits.
//i.e if pin is abcd differences D1 = a-b (or) D1 = b-a and D2 = c-d or D2 = d-c
//you have to find the pin with this.
//but you have n number of testcases.
//the input was given as multiple lines.
//the first line in the input is the number which tells that how many test cases was given.
//the next lines are the actual test cases.
//in any test cases the first and second differences are seperated by space.
//you have to print the possible pins on the new line
const str = "2\n3 4\n2 3";
pinFind(str);

function pinFind(input) {
  const count = input.slice("0", input.indexOf("\n"));

  const testCases = input
    .slice(input.indexOf("\n") + 1, input.length) //slices the testcases from the number of testcases line
    .split("\n") //every test cases are splitted into a array elements
    .map((testCase) => {
      return testCase.split(" ");
    }); //two differences are splitted into array elements

  testCases.forEach((testCase) => {
    let str = "";
    for (let i = 9; i >= 0; i--) {
      for (let j = 9; j >= 0; j--) {
        str = `${i}${Math.abs(i - testCase[0])}${j}${Math.abs(
          j - testCase[1]
        )}\n`;
        console.log(str);
      }
    }
  });
}
