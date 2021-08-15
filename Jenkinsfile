pipeline {
    agent {
        dockerfile {
            args '-v $WORKSPACE:/mnt -w /mnt'
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
