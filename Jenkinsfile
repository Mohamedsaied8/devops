pipeline {
    agent {
        dockerfile {
            filename 'dockerfile'
            args '-v $WORKSPACE:/mnt'
        }
    }
    stages {
        stage('Build') {
            steps {
                sh 'make -f mnt/makefile'
            }
        }
        
    }
}
