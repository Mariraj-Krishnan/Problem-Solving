var romanToInt = function (s) {
  let result = 0;
  const conversion = {
    I: 1,
    V: 5,
    X: 10,
    L: 50,
    C: 100,
    D: 500,
    M: 1000,
  };

  for (let i = 0; i < s.length; i++) {
    if (i < s.length - 1) {
      if (
        (s[i] == "I" && (s[i + 1] == "V" || s[i + 1] == "X")) ||
        (s[i] == "X" && (s[i + 1] == "L" || s[i + 1] == "C")) ||
        (s[i] == "C" && (s[i + 1] == "D" || s[i + 1] == "M"))
      ) {
        result += conversion[s[i + 1]] - conversion[s[i]];
        i++;
        continue;
      }
    }

    result += conversion[s[i]];
  }
  return result;
};
