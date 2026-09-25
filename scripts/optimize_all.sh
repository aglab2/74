for file in ./levels/*; do
    if [ -d "$file" ]; then
        python ./scripts/mesh_optimizer.py $file/custom_c/custom.model.inc.c $file/custom_c/custom.model.inc.h
    fi
done
