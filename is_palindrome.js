var isPalindrome = function (x) {
  if (x < 0) return false;

  const num = "" + x;

  const runCount = num.length % 2 == 0 ? num.length / 2 : (num.length + 1) / 2;

  for (let i = 0; i < runCount; i++) {
    if (num[i] != num[num.length - i - 1]) return false;
  }

  return true;
};
