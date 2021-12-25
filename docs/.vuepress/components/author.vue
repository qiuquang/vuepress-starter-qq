<template>
  <div class="author" >
      <i class="author-com img-a" title="作者" /><span class="author-text">发槑爱好者</span>
      <i class="author-com img-t" title="时间" /><span class="author-text"> {{page.lastUpdated}}</span>
  </div>
</template>
<script>
export default {
  data() {
    return {};
  },
  computed: {
      page() {
          return this.$page
      }
  },
  filters: {},
  methods: {},
  mounted() {},
};
</script>
<style lang="scss" scoped>
.author{
    width: 100%;
    vertical-align: middle;
    display: table;
    &-com{
        display: table-cell;
        height: 16px;
        width: 16px;
        line-height: 16px;
        background-position: 100% 70%;
        background-repeat: no-repeat;
        vertical-align: middle;
    }
    .img-a{
        background-image: url("/img/author.png");
    }
    .img-t{
        background-image: url("/img/time.png");
    }
    &-text{
        margin: 0 5px;
    }
}
</style>