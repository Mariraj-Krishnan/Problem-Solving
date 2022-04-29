var twoSum = function (nums, target) {
  const completed = {};

  for (let i = 0; i < nums.length; i++) {
    var wanted = target - nums[i];

    if (completed[wanted] != null) {
      return [completed[wanted], i];
    } else {
      completed[nums[i]] = i;
    }
  }
};
