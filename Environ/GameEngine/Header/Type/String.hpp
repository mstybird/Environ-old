#pragma once

#include "Char.hpp"
#include "Integer.hpp"
#include "InterFace\IEquateble.hpp"
#include "BetweenValue.hpp"
#include "Boolean.hpp"

#include<string>

namespace Environ {
	/**
		@class String
		@brief std::String�̊g��
	*/
	class String:
		std::string,
		public IEquateble<Object>
	{
	public:

		/**
		@brief �󕶎�����쐬����
		*/
		String();

		/**
		@brief
		@param �L���p�V�e�B�B�����������񕶎�����菬�����l���w�肵���ꍇ�͖��������B
		*/
		String(const Int aCapacity);

		/**
		@brief
		@param ����������
		*/
		String(const char aObject);

		/**
		@brief
		@param ������������
		*/
		String(const char* aObject);

		/**
		@brief
		@param ������������
		*/
		String(const Object& aObject);

		/**
		@brief �w�肵��������ŏ�����
		@param ������������
		@param �L���p�V�e�B�B�����������񕶎�����菬�����l���w�肵���ꍇ�͖��������B
		*/
		String(const Object& aObject,const Int aCapacity);

		/**
		@brief ������J������
		*/
		~String();


		/**
		@brief const char*�`���̕�������擾����
		@return ���̕������const char�|�C���^
		*/
		operator const char*();


		/**
		@brief �w�蕶�����������
		@param ������
		@return ���̃C���X�^���X�̎Q��
		*/
		String& operator=(const Object& aObject);


		/**
		@brief
		@param
		@return ���̃C���X�^���X�̎Q��
		*/
		String& operator+=(const Object& aObject);


		/**
		@brief	��������r����
		@param	��r�p������
		@return ���S��v�����true�B����ȊO��false
		*/
		Boolean operator==(const Object& aObject)const;

		/**
		@brief	��������r����
		@param	��r�p������
		@return	���S��v���Ȃ����true�B��v�����ꍇ��false
		*/
		Boolean operator!=(const Object& aObject)const;


		/**
		@brief ������̒������擾����
		@return ������̒���(�o�C�g��)
		*/
		Int Length()const;

		/**
		@brief	�w�肵���ʒu�̕������擾����
		@param	�ʒu�ƂȂ�C���f�N�X�B
		@return �w��C���f�N�X���w�������B
				�͈͊O�A�N�Z�X�������ꍇ��'\0'��Ԃ�
		*/
		Char At(const Int aIndex)const;


		/**
		@brief �����ɕ������ǉ�����
		@param ������
		@return ���̃C���X�^���X�̎Q��
		*/
		String& Append(const Object& aObject);

		/**
		@brief	�����ɕ������ǉ�����
		@param	�ǉ����镶����
		@param	�ǉ����镶����͈̔�
		@return ���̃C���X�^���X�̎Q��
		*/
		String& Append(const Object&, const Between aBetween);


		/**
		@brief	�������������
		@param	������镶����
		@return ���̃C���X�^���X�̎Q��
		*/
		String& Set(const Object& aObject);

		/**
		@brief
		@param	������镶����
		@param	������镶����͈̔�
		@return ���̃C���X�^���X�̎Q��
		*/
		String& Set(const Object&, const Between aBetween);


		/**
		@brief	�����񂪐����݂̂ō\������Ă��邩���ׂ�
		@return	�����݂̂������ꍇ��true��Ԃ�
		*/
		Boolean IsDigits()const;

		/**
		@brief	�����񂪔��p�A���t�@�x�b�g�݂̂ō\������Ă��邩���ׂ�
		@return	���p�A���t�@�x�b�g�݂̂������ꍇ��true��Ԃ�
		*/
		Boolean IsAlpha()const;

		/**
		@brief	�����񂪔��p�A���t�@�x�b�g�̑啶���݂̂ō\������Ă��邩���ׂ�
		@return	���p�A���t�@�x�b�g�̑啶���݂̂������ꍇtrue��Ԃ�
		*/
		Boolean IsUpper()const;

		/**
		@brief	�����񂪔��p�A���t�@�x�b�g�̏������݂̂ō\������Ă��邩���ׂ�
		@return	���p�A���t�@�x�b�g�̏������݂̂������ꍇtrue��Ԃ�
		*/
		Boolean IsLower()const;


		/**
		@brief	���̕�����Ɋ܂܂�锼�p�A���t�@�x�b�g�����ׂđ啶���ɂ���
		@return ���̃C���X�^���X�̎Q��
		*/
		String& Uppering();

		/**
		@brief	���̕�����Ɋ܂܂�锼�p�A���t�@�x�b�g�����ׂď������ɂ���
		@return ���̃C���X�^���X�̎Q��
		*/
		String& Lowering();

		/**
		@brief	���̕�����Ɋ܂܂�锼�p�A���t�@�x�b�g�����ׂđ啶���ɂ������̂��擾����
		@return �ϊ����ꂽ������
		*/
		String  GetUpper()const;

		/**
		@brief	���̕�����Ɋ܂܂�锼�p�A���t�@�x�b�g�����ׂď������ɂ������̂��擾����
		@return �ϊ����ꂽ������
		*/
		String  GetLower()const;


		/**
		@brief	���ۂ̕�����̃T�C�Y��ύX����B���ɂ��镶����T�C�Y��菬�����l���w�肵���ꍇ�́A���̃T�C�Y�̍����̕��������������
		@param	�ύX��̃T�C�Y
		@return ���̃C���X�^���X�̎Q��
		*/
		String& Resize(const Int aSize);

		/**
		@brief	������̃L���p�V�e�B��ύX����B���ɂ��镶����T�C�Y��菬�����l���w�肵���ꍇ�́A���̃T�C�Y�̍����̕��������������
		@param	�ύX��̃L���p�V�e�B
		@return ���̃C���X�^���X�̎Q��
		*/
		String& Reserve(const Int aSize);


		/**
		@brief	�w�肵���͈͂̕�������폜����BBetween::Step���L���Ȓl�������ꍇ�́A���̃X�e�b�v���ɏ]���ĕ������폜����
		@param	�͈͎w��C���X�^���X
		@return ���̃C���X�^���X�̎Q��
		*/
		String& Erasing(const Between aBetween);


		/**
		@brief	�w�肵���͈͂ŕ�������\������B
				Between::Step���L���Ȓl�������ꍇ�́A
				���̃X�e�b�v���ɏ]���ĕ�������\������B
				�����Ȕ͈͂������ꍇ(�J�n�C���f�N�X��-1��)�́A�L���Ȕ͈͂Ɏ��܂�悤�ɒ��������B
			
		@param	�͈͎w��C���X�^���X
		@return ���̃C���X�^���X�̎Q��
		*/
		String& Subbing(const Between aBetween);


		/**
		@brief	�w�肵���͈͂̕�������擾����
				Between::Step���L���Ȓl�������ꍇ�́A
				���̃X�e�b�v���ɏ]���ĕ�������\������B
				�����Ȕ͈͂������ꍇ(�J�n�C���f�N�X��-1��)�́A�L���Ȕ͈͂Ɏ��܂�悤�ɒ��������B
		@param	�͈͎w��C���X�^���X
		@return	�͈͕�����
		*/
		String GetSub(const Between& aBetween)const;


		/**
		@brief	�w��ʒu�ɕ������ǉ�����B
		@param	�ǉ�����ʒu�B�����ȃC���f�N�X���w�肵���ꍇ�͐擪or�����ɒǋL�����B
		@param	�ǉ����镶����
		@return ���̃C���X�^���X�̎Q��
		*/
		String& Insert(const Int aIndex,const Object& aObject);

		/**
		@brief	�w��ʒu�ɕ������ǉ�����B
		@param	�ǉ�����ʒu�B�����ȃC���f�N�X���w�肵���ꍇ�͐擪or�����ɒǋL�����B
		@param	�ǉ����镶����
		@param	�ǉ����镶����͈͎̔w��C���X�^���X
		@return ���̃C���X�^���X�̎Q��
		*/
		String& Insert(const Int aIndex,const Object&, const Between& aBetween);


		/**
		@brief	�w�肵���͈͂�ʂ̕�����Œu��������
		@param	�u��������͈́B�����Ȕ͈͂������ꍇ�A�擪or������͈͂̐擪�E�I�[�ɐݒ肳���B
		@param	�u�������镶����
		@return ���̃C���X�^���X�̎Q��
		*/
		String& Replacing(const Between& aReplaceBetween, const Object& aObject);

		/**
		@brief	�w�肵���͈͂�ʂ̕�����Œu��������
		@param	�u��������͈́B�����Ȕ͈͂������ꍇ�́A������̐擪�E�I�[�Ɏ����I�ɏC�������B
		@param	�u�������镶����
		@param	�u�������镶����͈̔�
		@return ���̃C���X�^���X�̎Q��
		*/
		String& Replacing(const Between& aReplaceBetween, const String&, const Between& aStringBetween);


		/**
		@brief	���������������
		@param	����������
		@param	�����͈́B�����Ȕ͈͂������ꍇ�́A������̐擪�E�I�[�Ɏ����I�ɏC�������B
		@return	���������ꍇ���̌�������������̐擪�ƂȂ�C���f�N�X�B
				������Ȃ������ꍇ�́A-1
		*/
		Int Find(const Object&, const Between& aFindBetween)const;

		/**
		@brief	���������������
		@param	����������
		@param	�����J�n�ʒu�B�����Ȉʒu�������ꍇ�́A������̐擪�E�I�[�Ɏ����I�ɏC�������B
		@return	���������ꍇ���̌�������������̐擪�ƂȂ�C���f�N�X�B
		������Ȃ������ꍇ�́A-1
		*/
		Int Find(const Object&, const Int& aStartIndex)const;

		/**
		@brief	������𖖔����猟������
		@param	����������
		@param	�����J�n�ʒu�B������0�Ƃ���B�����Ȉʒu�������ꍇ�́A������̐擪�E�I�[�Ɏ����I�ɏC�������B
		@return	���������ꍇ���̌�������������̐擪�ƂȂ�C���f�N�X�B
		������Ȃ������ꍇ�́A-1
		*/
		Int FindBack(const Object&, const Int& aStartIndex)const;



		/**
		@brief	��������r����
		@param	��r������
		@return	���S��v�����trour���Ԃ�B
		*/
		virtual Boolean Equal(const Object& aValue)const override;

	protected:
	private:
	};
}