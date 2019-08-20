pipeline {
    agent {
        label 'hemtt'
    }

    stages {
        stage('Keys') {
            steps {
                withCredentials([
                    file(credentialsId: 'FFP_JSRS_PRIVATE_KEY', variable: 'FFP_JSRS_PRIVATE_KEY'),
                    file(credentialsId: 'FFP_JSRS_PUBLIC_KEY', variable: 'FFP_JSRS_PUBLIC_KEY')
                ]) {
                    bat 'mkdir releases\\keys'
                    bat 'copy %FFP_JSRS_PRIVATE_KEY% releases\\keys'
                    bat 'copy %FFP_JSRS_PUBLIC_KEY% releases\\keys'
                }
            }
        }

        stage('Build') {
            steps {
                bat 'hemtt build --release'
            }
        }

        stage('Archive Build') {
            steps {
                archiveArtifacts artifacts: 'releases/**/*'
            }
        }

        stage('Publish to Steam Workshop') {
            when {
                branch 'master'
            }

            steps {
                publishSteamWorkshop '1220451406', 'releases/1.0.0/@ffp_jsrs', env.GIT_COMMIT
            }
        }
    }
}

void publishSteamWorkshop(String id, String mod, String changeNote) {
    bat "\"C:\\Program Files (x86)\\Steam\\SteamApps\\common\\Arma 3 Tools\\Publisher\\PublisherCmd.exe\" update /changeNote:$changeNote /id:$id /path:$mod"
}
