本项目参考paper[Towards security defect prediction with AI](https://arxiv.org/pdf/1808.09897.pdfv)和该paper的[code](https://github.com/cmu-sei/sa-bAbI)。 该项目可以**将c源文件转换成tokens.**

# 使用方法


1. 在**working_directory**文件下创建一个**sa-train-1000**文件夹，然后再在该目录下创建一个**src**文件夹
  
```shell
  cd working_directory
```

```shell
  mkdir sa-train-1000
```

```shell
  mkdir src
```

If I have made those directories, you needn't make them again and just keep
your project hierarchy consistent with me.

2. 将需要token化的所有c文件放在 **/working_directory/sa-train-1000/src**文件夹下。
  
3. 在项目根目录的终端中运行如下命令

   ```shell
   docker-compose build
   ```

   ```shell
   ./sa_gen_tokens.sh /working_directory/sa-train-1000/
   ```

# 结果

**/working_directory/sa-train-1000/tokens**中将生成对应的tok文件！