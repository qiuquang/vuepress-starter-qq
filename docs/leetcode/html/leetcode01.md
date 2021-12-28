# 1.两数之和

## 题目

给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target 的那 两个 整数，并返回它们的数组下标。

你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。

你可以按任意顺序返回答案。

```
输入：nums = [2,7,11,15], target = 9
输出：[0,1]
解释：因为 nums[0] + nums[1] == 9 ，返回 [0, 1] 。
```

```
输入：nums = [3,2,4], target = 6
输出：[1,2]
```

```
输入：nums = [3,3], target = 6
输出：[0,1]
```

## 答案

::: details 点击查看 JavaScript 代码（暴力解法）

```js
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    for(let i=0; i<nums.length; i++) {
            for(let j =0; j<nums.length; j++) {
                if(i!==j && nums[i]+nums[j] === target) {
                    return [i, j]
                }
            }
    }

};
```



![](../assets/image-20211228224429162.png)

:::

::: details 点击查看高级代码（哈希表法）

```javascript
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    const map = new Map();
    for(let i=0; i<nums.length; i++) {
        const cha = target - nums[i]; // 求出差值
        if(map.has(cha)) {
            return [i, map.get(cha)]
        } else {
            map.set(nums[i], i)
        }
    }
};
```

![image-20211228224603608](../assets/image-20211228224603608.png)

:::