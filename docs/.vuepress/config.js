module.exports = {
    title: '发槑の地方',
    description: '发槑 地方 发槑爱好者',
    head: [
        ['link', { rel: 'icon', href: '/img/logo.png' }],
        ['meta', { name: 'google', content: 'notranslate' }],
      ],
    markdown: {
      lineNumbers: true
    },
    themeConfig: {
        logo: '/img/logo.png',
        nav: require("./nav.js"),
        sidebar: require("./sidebar.js"),
        search: true,
    },
    configureWebpack: {
      resolve: {
        alias: {
          '@alias': '.vuepress/public/img/'
        }
      }
    }
  }