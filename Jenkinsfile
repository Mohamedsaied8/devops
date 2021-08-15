pipeline {
    agent {
        dockerfile {
            args '-v $WORKSPACE:/mnt'
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
