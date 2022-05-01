//Given a string with multiple lines
//the first line represents the number of sequence of numbers
//the sequence are surrounded by curly braces
//we have to find the sum of sequences and output those in new lines
let str = "3\n{1,2,3}\n{1,4,6,8}\n{1,2}";
function stringSum(input) {
  let result = "";
  const testcases = input
    .slice(input.search("\n") + 1, input.length)
    .replace(/{/g, "")
    .replace(/}/g, "")
    .split("\n")
    .map((cases) => cases.split(","));
  testcases.forEach((cases) => {
    let total = 0;
    cases.forEach((num) => {
      total += Number(num);
    });
    result += `${total}\n`;
  });
  console.log(result);
}
