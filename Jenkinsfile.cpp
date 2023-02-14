pipeline{
  agent{
    docker{
      image 'node:14'
    }
  }
}
stages{
  stage('Clone repository'){
    steps{
      git branch: 'main',
      url: 
}
