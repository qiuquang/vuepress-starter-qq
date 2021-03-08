# 代码review20210308

## 1.class动态绑定语法

![image-20210308095439071](../assets/image-20210308095439071.png)

```javascript
// 对象形式
:class="{active: isSelected === item.value, flex_1: isHalve, no_flex: !isHalve}"
```

![image-20210308095809882](../assets/image-20210308095809882.png)

```javascript
// 数组形式
:class="[isSelected === item.value ? 'active':'', isHalve ? 'flex_1' : 'no_flex']"
```

![image-20210308100016389](../assets/image-20210308100016389.png)

## 2. 结合饿了么组件使用，避免原生html

![image-20210308133025554](../assets/image-20210308133025554.png)

## 3.try…catch…finally

![image-20210308111153060](../assets/image-20210308111153060.png)

## 4.一个if用三目运算符替换

![image-20210308130641447](../assets/image-20210308130641447.png)

```javascript
// 修改后   
tableHeight() {
    return this.maxHeight ? this.maxHeight : (document.documentElement.clientHeight - 210);
}
```

## 5.优雅的返回boolean值

![image-20210308132506636](../assets/image-20210308132506636.png)

```javascript
    // 巧用boolean值
    showAdd() {
        return this.buttonList.indexOf('add') !== -1;
        // if (this.buttonList.indexOf('add') !== -1) {
        //    return true;
        // }
        // return false;
    },
```

