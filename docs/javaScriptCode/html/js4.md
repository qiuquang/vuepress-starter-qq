![prototype.png](../asset/fa2e078a6a7744868c2cb9e9ea815477~tplv-k3u1fbpfcp-watermark.image)

```javascript
1. js分为函数对象和普通对象，每个对象都有__ proto __属性，但是只有函数对象才有prototype属性
2. 实例属性__ proto__是一个对象，它有两个属性，constructor和 __ __proto__；
3. 原型对象prototype有一个默认的constructor属性，用于记录实例是由哪个构造函数创建；
两个原则：
准则1：原型对象（即Person.prototype）的constructor指向构造函数本身
1. Person.prototype.constructor == Person   
 准则2：实例（即person01）的__proto__和原型对象指向同一个地方
2. person01.__proto__ == Person.prototype   

特殊：
// (Object本质也是函数)
Object.__proto__ = Function.prototype
// Function.prototype本质也是普通对象
Function.prototype.__proto__ =  Object.prototype
// 声明父类
function Person() {
    this.company = '凯亚';
}
function KF() {
    this.position = '开发'
}
function KF2() {
    this.position = '开发2'
}
let pyk = new KF();
console.log('pyk', pyk);
// 修改原型链
KF2.prototype = new Person();
let qq = new KF2();
console.log('qq', pyk);

Person.prototype.location = '城阳'
KF.prototype.addName = 'add'
```

