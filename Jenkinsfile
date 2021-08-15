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
				cleanWs()
				checkout scm
				sh 'make -f makefile'
            }
        }
        
    }
}
