cppBuildEnv
===========
# �f�B���N�g���\��
## ���x��1
* Main
���s�t�@�C�����쐬����\�[�X�R�[�h���i�[����f�B���N�g��
* Lib
���ʃ��C�u�������쐬����\�[�X�R�[�h���i�[����f�B���N�g��


## ���x��2
* bin
�r���h�ɂ�鐶�������i�[����f�B���N�g��
* src
�\�[�X�R�[�h���i�[����f�B���N�g��
* test
�e�X�g�R�[�h���i�[����f�B���N�g��
* obj
�r���h�ɂ�钆�Ԑ��������i�[����f�B���N�g��
* count
�K�͑���̌��ʓ����i�[����f�B���N�g��
* gcov
�J�o���b�W���茋�ʓ����i�[����f�B���N�g��
* html
Doxygen�ɂ�鎩�������h�L�������g���i�[����f�B���N�g��

# �r���h�菇
## �r���h
(���炩����src�f�B���N�g���ֈړ�����j
% make

## �e�X�g���s�iGoogle Test Framework���K�v�j
�i���炩����test�f�B���N�g���ֈړ�����j
% make
% make run

# �R�}���h
* run
bin�f�B���N�g���̎��s�t�@�C���iTARGET)�����s����
* debug
�f�o�b�O�\���ł̃r���h���s
* release
�����[�X�\���ł̃r���h���s
* clean
�r���h�̐������A���Ԑ��������폜
* count
�K�͑�������s����iCodeCount���K�v�j
* tag
�^�O���𐶐�����ictag���K�v�j
* dox
doxygen�̎��s�idoxygen���K�v�j
���x��1�̃f�B���N�g�����ɂ���Doxyfile�̐ݒ���g�p����
* indent
�\�[�X�R�[�h�̐��`���s���iuncrustify���K�v�j
���x��1�f�B���N�g���Ɠ������x���ɂ���uncrustify.cfg�̐ݒ���g�p����

# �v���W�F�N�g���ƂɕK�v�Ȑݒ�
build�f�B���N�g������Makefile�Asrc,test�f�B���N�g���ɂ���Makefile��
�v���W�F�N�g���̐ݒ�ƃR�����g���Ă�����́i�R���p�C���̃t���O�Ȃǁj
�̓v���_�N�g�ɍ��킹�ďC�����Ă��������B

# �⑫
��{�I�ɂ͐��Y���̃\�[�X�R�[�h��src�A�e�X�g�R�[�h��test�ɒu����
���ꂼ��̃f�B���N�g����make�R�}���h���g���Ƃ����z��ł��B

