// // class Person {
// //     constructor(name) {
// //         this.name = name;
// //     }
// //     getName = function () {
// //         console.log('Person:', this.name);
// //     }
// // }

// // class Gamer extends Person {
// //     constructor(name, age) {
// //         super(name);
// //         this.age = age;
// //     }
// // }

// // const asuna = new Gamer('qq', 25);
// // asuna.getName();
// // console.log(asuna)
// // console.log(asuna.__proto__)

// // 一、call apply bind使用
// // let a = {
// //     name: 'jack',
// //     getName: function (msg) {
// //         return msg + this.name;
// //     }
// // }
// // let b = {
// //     name: 'lili'
// // }

// // console.log(a.getName('hi~ '));
// // console.log(a.getName.apply(b, ['hhhh~']));
// // console.log(a.getName.call(b, 'hhhhcall~'));
// // let bbb = a.getName.bind(b, 'hhhhbind~')
// // console.log(bbb());

// // 判断数据类型start
// // console.log(Object.prototype.toString.call({}))
// // console.log(Object.prototype.toString.call([]))
// // console.log(Object.prototype.toString.call(''))

// // // 判断数据类型end

// // // 二、类数组借用方法
// // let arrayLike = {
// //     0: 'java',
// //     1: 'script',
// //     length: 2
// // }

// // Array.prototype.push.call(arrayLike, 'mmmm1');
// // Array.prototype.push.call(arrayLike, 'mmmm2');
// // Array.prototype.push.call(arrayLike, 'mmmm3');
// // console.log(typeof arrayLike);
// // console.log(arrayLike);

// // const carr = [1,2,3,4,5,6];
// // console.log(Math.max(...carr));
// // console.log(Math.min.apply(Math, carr))


// // function getNum(nums) {
// //     for(let i = 0; i< nums.length; i++) {
// //         const one = nums[i];
// //         const two = nums[i+1];
// //         for(let j = 0; j< nums.length; j++){
// //             if(one+two+nums[j]===0 && j !== (i +2)){
// //                 console.log(one,two,nums[j])
// //             }
// //         }
// //     }
// // }
// // getNum(nums)

// // let nums = [-1,0,1,2,-1,-4]
// // /**
// //  * @param {number[]} nums
// //  * @return {number[][]}
// //  */
// //  var threeSum = function(nums) {
// //     const arr = [];
// //     for(let i = 0; i < nums.length; i++) {
// //         const one = nums[i];
// //         const two = nums[i+1];
// //         for(let j = 0; j< nums.length; j++){
// //             if(one+two+nums[j]===0 && j !== (i +2)){
// //                 console.log(one,two,nums[j])
// //                 let flag = false;
// //                 arr.forEach(item => {
// //                     if(item.includes(one)&&item.includes(two)&&item.includes(nums[j])) {
// //                         flag = true
// //                     }
// //                 })
// //                 console.log(flag)
// //                 if(!flag) {
// //                  arr.push([one,two,nums[j]]);
// //                 }
// //             }
// //         }
// //     }
// //     return arr;
// // };
// // threeSum(nums)

// // let nums = [-5,-1,10,-15,10,-11,-8,-14,5,3,9,3,-11,-4,0,5,5,1,14,2,-13,0,-10,-12,-2,4,-9,-7,14,-2,3,-6,13,-10,-14,8,-14,-15,1,7,4,-5,-13,8,-1,-6,-10,-11,10,11,6,13,-4,11,-14,1,1,14,9,-8,-2,-11,1,-12,-14,-6,3,10,-6,-11,-6,5,-9,-4,-10,5,5,-5,1,1,13,-8,-1,-14,-11,-8,2,-3,-9,-12,4,4,14,12,-1,8,-9,-13,3,0,13,12,-9,12,-7,-12,2,5,-1,-11]
// let nums = [-1,0,1,2,-1,-4]
// /**
//  * @param {number[]} nums
//  * @return {number[][]}
//  */
//  var threeSum = function(nums) {
//      if(nums.length < 3) {
//          return [];
//      }
//     const arr = [];
//     for(let i = 0; i < nums.length; i++) {
//         for (let m = 0; m< nums.length; m++) {
//             for ( let n=0; n< nums.length; n++) {
//                 if(nums[i]+ nums[m]+ nums[n] === 0 && (i!==m&&i!==n&&m!==n)) {
//                     let flag = false;
//                     arr.forEach(item => {
//                       const pp = [...item]
//                       const oneindex =  pp.findIndex(one=> one === nums[i])
//                       if(oneindex!== -1) {
//                           pp.splice(oneindex, 1)
//                         const twoindex = pp.findIndex(two=> two === nums[m])
//                         if(twoindex!== -1) {
//                             pp.splice(twoindex, 1)
//                             const threeindex =  pp.findIndex(three=> three === nums[n])
//                             if(threeindex!== -1) {
//                                 flag = true;
//                             }
//                         }
//                       }
//                     })
//                     if(!flag) {
//                         arr.push([nums[i],nums[m],nums[n]]);
//                     }
//                 }
//             }

//         }
//     }
//     return arr;
// };
// const p = threeSum(nums)
// console.log('pppp', p)



// // // let nums = [-5,-1,10,-15,10,-11,-8,-14,5,3,9,3,-11,-4,0,5,5,1,14,2,-13,0,-10,-12,-2,4,-9,-7,14,-2,3,-6,13,-10,-14,8,-14,-15,1,7,4,-5,-13,8,-1,-6,-10,-11,10,11,6,13,-4,11,-14,1,1,14,9,-8,-2,-11,1,-12,-14,-6,3,10,-6,-11,-6,5,-9,-4,-10,5,5,-5,1,1,13,-8,-1,-14,-11,-8,2,-3,-9,-12,4,4,14,12,-1,8,-9,-13,3,0,13,12,-9,12,-7,-12,2,5,-1,-11]
// // let nums = [-1,0,1,2,-1,-4]
// // /**
// //  * @param {number[]} nums
// //  * @return {number[][]}
// //  */
// //  var threeSum = function(numss) {
// //      let nums = numss.sort()
// //      if(nums.length < 3) {
// //          return [];
// //      }
// //     const arr = [];
// //     for(let i = 0; i < nums.length; i++) {
// //         for (let m = 0; m< nums.length; m++) {
// //             for ( let n=0; n< nums.length; n++) {
// //                 if(nums[i]+ nums[m]+ nums[n] === 0 && (i!==m&&i!==n&&m!==n)) {
// //                     let flag = false;
// //                     arr.forEach(item => {
// //                       const pp = [...item]
// //                       const oneindex =  pp.findIndex(one=> one === nums[i])
// //                       if(oneindex!== -1) {
// //                           pp.splice(oneindex, 1)
// //                         const twoindex = pp.findIndex(two=> two === nums[m])
// //                         if(twoindex!== -1) {
// //                             pp.splice(twoindex, 1)
// //                             const threeindex =  pp.findIndex(three=> three === nums[n])
// //                             if(threeindex!== -1) {
// //                                 flag = true;
// //                             }
// //                         }
// //                       }
// //                     })
// //                     if(!flag) {
// //                         arr.push([nums[i],nums[m],nums[n]]);
// //                     }
// //                 }
// //             }

// //         }
// //     }
// //     return arr;
// // };
// // const p = threeSum(nums)
// // console.log('pppp', p)


// 闭包
// function fun1() {
//     var a = 1;
//     return function() {
//         console.log(a)
//     }
// }

// fun1();
// var result = fun1();
// result();  // 1
// a = 3
// function fun1() {
//     // a = 2
//     function fun2() {
//       console.log(a);  //2
//     }
//     return fun2;
//   }
//   var result = fun1();
//   result();

// var fun3;
// function fun1() {
//   var a = 2
//   fun3 = function() {
//     console.log(a);
//   }
// }
// fun1();
// fun3();


// const json = '{"result":true, "count":2}'
// const obj = JSON.parse(json)
// console.log(obj)

// const p = JSON.parse(json, (k,v)=>{
//     if(k === '') return v;
//     return v*2;
// })


// console.log(p)

// var a = Array(6)
// console.log(a)
var b = {1: 0}
var obj = {0: 'a', 1: 'b', 2:'c', length: 3};
Array.from(obj, function(value,index){
console.log(value,index, this, arguments,arguments.length)
}, obj)

