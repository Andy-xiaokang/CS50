def main():
    media_type = {
        'gif': 'image/gif',
        'jpg': 'image/jpeg',
        'jpeg': 'image/jpeg',
        'png': 'image/png',
        'pdf': 'application/pdf',
        'txt': 'text/plain',
        'zip': 'application/zip'
    }
    s = input('File name: ').lower().strip().split('.')[-1]
    if s in media_type:
        print(media_type[s])
    else:
        print("application/octet-stream")

main()