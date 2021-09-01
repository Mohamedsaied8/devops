pipeline {
    agent {
        dockerfile {
            args '-v $WORKSPACE:/mnt'
            customWorkspace 'GoogleTest'
        }
    }
    stages {
        stage('UnitTesting') {
            steps {
				cleanWs()
				checkout scm
				sh 'make -f makefile'
            }
        }
        
    }
}
