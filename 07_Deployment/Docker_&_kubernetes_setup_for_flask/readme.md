## Docker and Kubernetes commands

### Build the image
```
docker build -t <image_name> .
```

### Run the container
```
docker run -p 5000:5000 <image_name>
```

### Find Running containers
```
docker ps
```

### Stop running a container
```
docker stop <CONTAINER_ID>
```

### Create tag for the image
```
docker tag <image_name> <docker_username>/<image_name>:latest
```

### login into docker
```
docker login
```

### Push image to docker hub
```
docker push <docker_username>/<image_name>:latest
```

### Creates kubernetes resources based on the defined configuration
```
kubectl apply -f deployment.yaml
```

### Get deployments and services
```
kubectl get deployments
kubectl get services
```

### Delete deployments and services
```
kubectl delete deployment app
kubectl delete service <image_name>-service
```