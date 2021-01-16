<template>
<div class="practice">
    <div v-for="(item, index) in list" :key="index">
        <el-input v-model="item.desc"></el-input>
        <el-radio-group v-if="item.type==='single'" v-model="item.answer">
            <el-radio v-for="(choitem, choindex) in item.choiceArr" :key="choindex" :label="choitem.label">{{choitem.choice}}</el-radio>
        </el-radio-group>
         <el-checkbox-group v-if="item.type==='multiple'" v-model="item.answer">
            <el-checkbox v-for="(choitem, choindex) in item.choiceArr" :key="choindex" :label="choitem.label">{{choitem.choice}}</el-checkbox>
        </el-checkbox-group>
        <div class="line">
            <el-button @click="showAnswer(item)" type="primary">{{item | showText}}</el-button>
        </div>
        <el-input type="textarea" v-model="item.correctAnswer" v-if="item.showCorrectAnswer"></el-input>
    </div>
    <el-button @click="sure" type='primary'>提交</el-button>
</div>
</template>
<script>
export default {
  data() {
    return {
        list: [
            {
                // 题目描述
                desc: '题目1',
                // 单选 single 多选  multiple 
                type: 'single',
                // 读者选择的答案
                answer: '',
                correctAnswer: '正确答案描述11111111',
                showCorrectAnswer: false,
                // 选项abcd或者abcde
                choiceArr: [
                    {
                        label: 'A',
                        choice: 'AAAAAAAAAAAA'
                    },
                    {
                        label: 'B',
                        choice: 'BBBBBBBBBBBBBB'
                    },
                    {
                        label: 'C',
                        choice: 'CCCCCCCCCCCC'
                    },
                    {
                        label: 'D',
                        choice: 'DDDDDDDDDDD'
                    },
                ]
            },
            {
                desc: '题目2',
                type: 'multiple',
                answer: [],
                correctAnswer: '正确答案描述11111111',
                showCorrectAnswer: false,
                choiceArr: [
                    {
                        label: 'A',
                        choice: 'AAAAAAAAAAAA'
                    },
                    {
                        label: 'B',
                        choice: 'BBBBBBBBBBBBBB'
                    },
                    {
                        label: 'C',
                        choice: 'CCCCCCCCCCCC'
                    },
                    {
                        label: 'D',
                        choice: 'DDDDDDDDDDD'
                    },
                    {
                        label: 'E',
                        choice: 'EEEEEEEEEEEEEE'
                    },
                ]
            },
            {
                desc: '题目3',
                type: 'single',
                answer: '',
                correctAnswer: '正确答案描述11111111',
                showCorrectAnswer: false,
                choiceArr: [
                    {
                        label: 'A',
                        choice: 'AAAAAAAAAAAA'
                    },
                    {
                        label: 'B',
                        choice: 'BBBBBBBBBBBBBB'
                    },
                    {
                        label: 'C',
                        choice: 'CCCCCCCCCCCC'
                    },
                    {
                        label: 'D',
                        choice: 'DDDDDDDDDDD'
                    },
                ]
            },
            {
                desc: '题目4',
                type: 'single',
                answer: '',
                correctAnswer: '正确答案描述11111111',
                showCorrectAnswer: false,
                choiceArr: [
                    {
                        label: 'A',
                        choice: 'AAAAAAAAAAAA'
                    },
                    {
                        label: 'B',
                        choice: 'BBBBBBBBBBBBBB'
                    },
                    {
                        label: 'C',
                        choice: 'CCCCCCCCCCCC'
                    },
                    {
                        label: 'D',
                        choice: 'DDDDDDDDDDD'
                    },
                ]
            },
        ]
    }
  },
  filters: {
      showText(item) {
          return item.showCorrectAnswer ? '收起' : '解析';
      }
  },
  methods: {
      showAnswer(val) {
          val.showCorrectAnswer = !val.showCorrectAnswer;
      },
      sure() {
          console.log(this.list);
      }
  },
  mounted () {
  }
}
</script>
<style lang="scss" scoped>
.practice {
    .line {
        margin: 10px 0;
    }
}
</style>