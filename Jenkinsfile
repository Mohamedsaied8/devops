pipeline {
    agent {
        dockerfile {
            args '-v '-v C:\\Users\\admin\\AppData\\Local\\Jenkins\\.jenkins:/mnt -w /mnt'
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
