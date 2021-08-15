pipeline {
    agent {
        dockerfile {
            args '-v D:\work\training\devops\mnt:/mnt -w /mnt'
        }
    }
    stages {
        stage('UnitTesting') {
            steps {
                sh 'make -f makefile'
            }
        }
        
    }
}
