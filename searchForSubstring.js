//zoho problem
//strore a string in a two dimensional array
//find the given word in that two dimensional array both from left to right and from top to bottom

const str = "WELCOMETOZOHOCORPORATION";
let word = "ocr";
let strArray = [];
let temp = [];
for (let i = 0; i < str.length; i++) {
  temp.push(str[i]);
  if ((i + 1) % 5 == 0 || i == str.length - 1) {
    strArray.push(temp);
    temp = [];
  }
}
let indexes = "";
let count = 0;
for (let i = 0; i < strArray.length; i++) {
  for (let j = 0; j < strArray[i].length; j++) {
    //for left to right
    if (word[0].toUpperCase() == strArray[i][j]) {
      for (let k = 0; k < word.length; k++) {
        if (
          strArray[i][j + k] &&
          word[count].toUpperCase() == strArray[i][j + k]
        ) {
          count++;
          if (count == word.length) {
            indexes = `<${i},${j}>\n<${i},${j + count - 1}>`;
            count = 0;
          }
        } else {
          count = 0;
          break;
        }
      }
    }

    //for top to bottom
    if (count == 0 && word[0].toUpperCase() == strArray[j][i]) {
      for (let k = 0; k < word.length; k++) {
        if (
          strArray[j + k] &&
          word[count].toUpperCase() == strArray[j + k][i]
        ) {
          count++;
          if (count == word.length) {
            indexes = `<${j},${i}>\n<${j + count - 1},${i}>`;
            count = 0;
          }
        } else {
          count = 0;
          break;
        }
      }
    }
  }
}
console.log(indexes);
