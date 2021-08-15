pipeline {
    agent {
        dockerfile {
            args '-v $WORKSPACE:/mnt -w /mnt'
            customWorkspace 'GoogleTest'
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
