# PageOffice.js前端开发流程

## 1.pageoffice引入

```javascript
// rem.js 动态引入pageoffice
// 动态引入pageOffice文件
function imoprtPageOffice() {
  const s = document.createElement('script');
  s.type = 'text/javascript';
  s.src = '/amos/workflow/pageoffice.js';
  document.body.appendChild(s);
}

```

## 2.调用生成wordFileId接口

页面内容修改后，点击保存的时候调用此方法，生成wordFileId

```javascript
// 型号合格证信息保存完后，生成型号合格证的wordid
async saveBeforeData() {
    this.showloading = true;
    const [err, data] = await this.$awaitWrap(saveTypeCertificate(this.getlist));
    if (data) {
        const params = {};
        params[this.$route.query.type] = this.getlist.certificateId;
        console.log(params);
        const [err1, data1] = await this.$awaitWrap(getCreateCertificateWord(params));
        if (data1) {
            this.$message({ message: '保存成功', type: 'success' });
        } else if (err1) {
            this.$message('保存失败', err1);
        }
        // 返回上一页面
        this.goback();
    }
    this.showloading = false;
},
```



## 3.编辑格式按钮显示隐藏

```javascript
/**
  * 编辑格式按钮显示隐藏
  * this.getlist.wordFileId 生成的word文件的id，其余权限和原来的编辑按钮权限一样
  */
editStyleFlag() {
    return this.getlist.wordFileId && (this.beforeBtnShow || this.afterBtnShow) && this.$route.query.id !== '0';
}
```

## 4.调用pageoffice编辑格式

```javascript
async editStyle() {
      await this.$confirm('请在word中仅进行格式调整，如需更新内容，请在当前页面更新内容后再次点击生成word，重新调整格式！', '警告', {
        confirmButtonText: '我已知晓',
        cancelButtonText: '取消编辑',
        type: 'warning'
      });
      const url = `${this.$baseURL}/workflow/page-office/word?certificateId=${this.$route.query.id * 1}&fileType=1`;
      // const url = `http://172.16.1.12:8003/page-office/word?certificateId=${this.$route.query.id * 1}&fileType=1`;
      // eslint-disable-next-line no-undef
      POBrowser.openWindowModeless(url, 'width=1200px;height=800px;');
    },
```

