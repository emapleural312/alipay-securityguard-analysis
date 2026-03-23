# Alipay SecurityGuard Analysis — Reproducible Verification Environment
# Usage:
#   docker build -t alipay-verify .
#   docker run -v /path/to/Alipay.apk:/apk/Alipay.apk alipay-verify
#
# Expected APK: Alipay v10.8.30.8000
# SHA-256: 2eebd18eb78b2bdcc737c568a8057345255b9660dbf6f5af83743644effcaad2

FROM eclipse-temurin:17-jdk-jammy

ENV DEBIAN_FRONTEND=noninteractive
ENV JADX_VERSION=1.5.1
ENV APKTOOL_VERSION=2.10.0

# Install dependencies
RUN apt-get update && apt-get install -y --no-install-recommends \
    curl unzip python3 ripgrep file xxd \
    && rm -rf /var/lib/apt/lists/*

# Install jadx with generous memory
RUN curl -sL "https://github.com/skylot/jadx/releases/download/v${JADX_VERSION}/jadx-${JADX_VERSION}.zip" \
    -o /tmp/jadx.zip && \
    unzip -q /tmp/jadx.zip -d /opt/jadx && \
    chmod +x /opt/jadx/bin/jadx && \
    rm /tmp/jadx.zip
ENV PATH="/opt/jadx/bin:${PATH}"
# 12GB heap for 210MB APK decompilation
ENV JADX_OPTS="-Xmx12g"

# Install apktool
RUN curl -sL "https://github.com/iBotPeaches/Apktool/releases/download/v${APKTOOL_VERSION}/apktool_${APKTOOL_VERSION}.jar" \
    -o /opt/apktool.jar

# Install baksmali
RUN curl -sL "https://github.com/google/smali/releases/download/v2.5.2/baksmali-2.5.2.jar" \
    -o /opt/baksmali.jar

WORKDIR /work
COPY scripts/verify.sh /work/verify.sh
COPY scripts/signatures.txt /work/signatures.txt
RUN chmod +x /work/verify.sh

ENTRYPOINT ["/work/verify.sh"]
CMD ["/apk/Alipay.apk"]
