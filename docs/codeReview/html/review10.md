# 代码 review20210628

## 1.滚动条默认从顶部展示

```javascript
document.getElementsByClassName("view_wrap")[0].scrollTop = 0;
// 写的位置？
```

## 2.内存泄露与优化

1. 过多的缓存未释放；
2. 闭包太多未释放；
3. 定时器或者回调太多未释放；
4. 太多无效的 DOM 未释放；
5. 全局变量太多未被发现。

```javascript
// 1.声明变量时避免全局声明
function foo() {
  // 全局变量=> window.bar
  this.bar = "默认this指向全局";
  // 没有声明变量，实际上是全局变量=>window.bar
  bar = "全局变量";
}
foo();
// 2.在你使用完数据后，及时解除引用（闭包中的变量，DOM 引用，定时器清除）
// 3. 组织好你的代码逻辑，避免死循环等造成浏览器卡顿、崩溃的问题
```

## 3.同源策略和跨域方案

### 1.什么是同源？

协议、域名（IP）、端口均相同

### 2.解决跨域问题的方案

接口请求的跨域问题：正向代理和反向代理（nginx）

```javascript
// 本地发送的请求 Request URL: http://localhost:8081/amos/comprehensive/deal/queryForDeal
// 本地转发 配置
      '/amos': {
        target: http://192.168.163.157:8000,
          // proxy的changeOrigin是false：请求头中host仍然是浏览器发送过来的host；如果设置成true：发送请求头中host会设置成target。
          // localhost:8081 target:IP
          // true request的host会变成IP
          // false request的host仍是原来的localhost：8081
        changeOrigin: true,
        //是否启动websocket
        ws: true
        // pathRewrite: {
        //   '^/amos': '',
        // },
      },
// nginx配置
// server location 匹配/amos 转发到amos自己的后台地址

```

页面嵌套的跨域问题：iframe 标签解决跨域问题

```
http://192.168.163.131:8080/ns_train/flowEvents/todoView
```
