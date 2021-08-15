pipeline {
    agent {
        dockerfile {
            filename 'Dockerfile'
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
