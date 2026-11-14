#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004265B8
// Address: 0x4265b8 - 0x426c68
void sub_004265B8_0x4265b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004265B8_0x4265b8");
#endif

    switch (ctx->pc) {
        case 0x426668u: goto label_426668;
        case 0x4266a0u: goto label_4266a0;
        case 0x426760u: goto label_426760;
        case 0x4267f0u: goto label_4267f0;
        case 0x426828u: goto label_426828;
        case 0x4268d8u: goto label_4268d8;
        case 0x4269a8u: goto label_4269a8;
        case 0x4269e8u: goto label_4269e8;
        case 0x426aacu: goto label_426aac;
        case 0x426b00u: goto label_426b00;
        case 0x426b40u: goto label_426b40;
        case 0x426bf4u: goto label_426bf4;
        default: break;
    }

    ctx->pc = 0x4265b8u;

    // 0x4265b8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x4265b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x4265bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4265bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4265c0: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x4265c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x4265c4: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x4265c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x4265c8: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x4265c8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4265cc: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x4265ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x4265d0: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x4265d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x4265d4: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x4265d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x4265d8: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x4265d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x4265dc: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x4265dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x4265e0: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x4265e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x4265e4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4265e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x4265e8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4265e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x4265ec: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x4265ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x4265f0: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x4265f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x4265f4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x4265f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x4265f8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4265f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x4265fc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4265fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x426600: 0x14c200d0  bne         $a2, $v0, . + 4 + (0xD0 << 2)
    ctx->pc = 0x426600u;
    {
        const bool branch_taken_0x426600 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x426604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426600u;
        // 0x426604: 0x8fc50014  lw          $a1, 0x14($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426600) {
            ctx->pc = 0x426944u;
            goto label_426944;
        }
    }
    ctx->pc = 0x426608u;
    // 0x426608: 0x14e300cf  bne         $a3, $v1, . + 4 + (0xCF << 2)
    ctx->pc = 0x426608u;
    {
        const bool branch_taken_0x426608 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x42660Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426608u;
        // 0x42660c: 0x8fc3000c  lw          $v1, 0xC($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426608) {
            ctx->pc = 0x426948u;
            goto label_426948;
        }
    }
    ctx->pc = 0x426610u;
    // 0x426610: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x426610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x426614: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x426614u;
    {
        const bool branch_taken_0x426614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x426618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426614u;
        // 0x426618: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x426614) {
            ctx->pc = 0x426644u;
            goto label_426644;
        }
    }
    ctx->pc = 0x42661Cu;
    // 0x42661c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x42661Cu;
    {
        const bool branch_taken_0x42661c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42661c) {
            ctx->pc = 0x426620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42661Cu;
            // 0x426620: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x426634u;
            goto label_426634;
        }
    }
    ctx->pc = 0x426624u;
    // 0x426624: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x426624u;
    {
        const bool branch_taken_0x426624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x426628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426624u;
        // 0x426628: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426624) {
            ctx->pc = 0x426644u;
            goto label_426644;
        }
    }
    ctx->pc = 0x42662Cu;
    // 0x42662c: 0x1000017d  b           . + 4 + (0x17D << 2)
    ctx->pc = 0x42662Cu;
    {
        const bool branch_taken_0x42662c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x426630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42662Cu;
        // 0x426630: 0x7bb100d0  lq          $s1, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42662c) {
            ctx->pc = 0x426C24u;
            goto label_426c24;
        }
    }
    ctx->pc = 0x426634u;
label_426634:
    // 0x426634: 0x10620065  beq         $v1, $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x426634u;
    {
        const bool branch_taken_0x426634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x426638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426634u;
        // 0x426638: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426634) {
            ctx->pc = 0x4267CCu;
            goto label_4267cc;
        }
    }
    ctx->pc = 0x42663Cu;
    // 0x42663c: 0x10000179  b           . + 4 + (0x179 << 2)
    ctx->pc = 0x42663Cu;
    {
        const bool branch_taken_0x42663c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x426640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42663Cu;
        // 0x426640: 0x7bb100d0  lq          $s1, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42663c) {
            ctx->pc = 0x426C24u;
            goto label_426c24;
        }
    }
    ctx->pc = 0x426644u;
label_426644:
    // 0x426644: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x426644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x426648: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x426648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x42664c: 0x8fc60018  lw          $a2, 0x18($fp)
    ctx->pc = 0x42664cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x426650: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x426650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x426654: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x426654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x426658: 0x10620170  beq         $v1, $v0, . + 4 + (0x170 << 2)
    ctx->pc = 0x426658u;
    {
        const bool branch_taken_0x426658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x42665Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426658u;
        // 0x42665c: 0xafa6000c  sw          $a2, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426658) {
            ctx->pc = 0x426C1Cu;
            goto label_426c1c;
        }
    }
    ctx->pc = 0x426660u;
    // 0x426660: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x426660u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x426664: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x426664u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_426668:
    // 0x426668: 0x2477ffff  addiu       $s7, $v1, -0x1
    ctx->pc = 0x426668u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x42666c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x42666cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x426670: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x426670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x426674: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x426674u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426678: 0x8fd20004  lw          $s2, 0x4($fp)
    ctx->pc = 0x426678u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x42667c: 0xa2b021  addu        $s6, $a1, $v0
    ctx->pc = 0x42667cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x426680: 0x1240004c  beqz        $s2, . + 4 + (0x4C << 2)
    ctx->pc = 0x426680u;
    {
        const bool branch_taken_0x426680 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x426684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426680u;
        // 0x426684: 0x83a821  addu        $s5, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426680) {
            ctx->pc = 0x4267B4u;
            goto label_4267b4;
        }
    }
    ctx->pc = 0x426688u;
    // 0x426688: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x426688u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42668c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x42668cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426690: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x426690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x426694: 0x240b0008  addiu       $t3, $zero, 0x8
    ctx->pc = 0x426694u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x426698: 0x24b42970  addiu       $s4, $a1, 0x2970
    ctx->pc = 0x426698u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 10608));
    // 0x42669c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x42669cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_4266a0:
    // 0x4266a0: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x4266a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4266a4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4266a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4266a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4266a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4266ac: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x4266acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4266b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4266b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4266b4: 0x8f88add0  lw          $t0, -0x5230($gp)
    ctx->pc = 0x4266b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946256)));
    // 0x4266b8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4266b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4266bc: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x4266bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x4266c0: 0x1683823  subu        $a3, $t3, $t0
    ctx->pc = 0x4266c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x4266c4: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x4266c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x4266c8: 0xe31807  srav        $v1, $v1, $a3
    ctx->pc = 0x4266c8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x4266cc: 0x8cc94000  lw          $t1, 0x4000($a2)
    ctx->pc = 0x4266ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16384)));
    // 0x4266d0: 0xe42007  srav        $a0, $a0, $a3
    ctx->pc = 0x4266d0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
    // 0x4266d4: 0x90460003  lbu         $a2, 0x3($v0)
    ctx->pc = 0x4266d4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x4266d8: 0xe52807  srav        $a1, $a1, $a3
    ctx->pc = 0x4266d8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 7) & 0x1F));
    // 0x4266dc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x4266dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x4266e0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x4266e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x4266e4: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x4266e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x4266e8: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x4266e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x4266ec: 0xe63007  srav        $a2, $a2, $a3
    ctx->pc = 0x4266ecu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
    // 0x4266f0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x4266f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x4266f4: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x4266f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4266f8: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x4266f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x4266fc: 0xdc870000  ld          $a3, 0x0($a0)
    ctx->pc = 0x4266fcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x426700: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x426700u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x426704: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x426704u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x426708: 0x210f8  dsll        $v0, $v0, 3
    ctx->pc = 0x426708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 3);
    // 0x42670c: 0x738b8  dsll        $a3, $a3, 2
    ctx->pc = 0x42670cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 2);
    // 0x426710: 0xd43021  addu        $a2, $a2, $s4
    ctx->pc = 0x426710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x426714: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x426714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x426718: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x426718u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
    // 0x42671c: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x42671cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x426720: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x426720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x426724: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x426724u;
    {
        const bool branch_taken_0x426724 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x426728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426724u;
        // 0x426728: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426724) {
            ctx->pc = 0x426734u;
            goto label_426734;
        }
    }
    ctx->pc = 0x42672Cu;
    // 0x42672c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x42672Cu;
    {
        const bool branch_taken_0x42672c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x426730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42672Cu;
        // 0x426730: 0x91220018  lbu         $v0, 0x18($t1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42672c) {
            ctx->pc = 0x426768u;
            goto label_426768;
        }
    }
    ctx->pc = 0x426734u;
label_426734:
    // 0x426734: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x426734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x426738: 0x2506ffff  addiu       $a2, $t0, -0x1
    ctx->pc = 0x426738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x42673c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x42673cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x426740: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x426740u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x426744: 0x5293a  dsrl        $a1, $a1, 4
    ctx->pc = 0x426744u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 4);
    // 0x426748: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x426748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x42674c: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x42674cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x426750: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x426750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x426754: 0x7faa0030  sq          $t2, 0x30($sp)
    ctx->pc = 0x426754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 10));
    // 0x426758: 0xc109cb4  jal         func_4272D0
    ctx->pc = 0x426758u;
    SET_GPR_U32(ctx, 31, 0x426760u);
    ctx->pc = 0x42675Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x426758u;
    // 0x42675c: 0x7fab0040  sq          $t3, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4272D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4272D0u, 0x426758u, 0x426760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426760u;
label_426760:
    // 0x426760: 0x7bab0040  lq          $t3, 0x40($sp)
    ctx->pc = 0x426760u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x426764: 0x7baa0030  lq          $t2, 0x30($sp)
    ctx->pc = 0x426764u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_426768:
    // 0x426768: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x426768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x42676c: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x42676cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x426770: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x426770u;
    {
        const bool branch_taken_0x426770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x426774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426770u;
        // 0x426774: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426770) {
            ctx->pc = 0x426794u;
            goto label_426794;
        }
    }
    ctx->pc = 0x426778u;
    // 0x426778: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x426778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x42677c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x42677cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x426780: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x426780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x426784: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x426784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x426788: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x426788u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x42678c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x42678Cu;
    {
        const bool branch_taken_0x42678c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x426790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42678Cu;
        // 0x426790: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42678c) {
            ctx->pc = 0x4267A4u;
            goto label_4267a4;
        }
    }
    ctx->pc = 0x426794u;
label_426794:
    // 0x426794: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x426794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x426798: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x426798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x42679c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x42679cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4267a0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x4267a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_4267a4:
    // 0x4267a4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4267a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x4267a8: 0x272102b  sltu        $v0, $s3, $s2
    ctx->pc = 0x4267a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x4267ac: 0x5440ffbc  bnel        $v0, $zero, . + 4 + (-0x44 << 2)
    ctx->pc = 0x4267ACu;
    {
        const bool branch_taken_0x4267ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4267ac) {
            ctx->pc = 0x4267B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4267ACu;
            // 0x4267b0: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4266A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4266a0;
        }
    }
    ctx->pc = 0x4267B4u;
label_4267b4:
    // 0x4267b4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4267b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4267b8: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x4267b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4267bc: 0x146affaa  bne         $v1, $t2, . + 4 + (-0x56 << 2)
    ctx->pc = 0x4267BCu;
    {
        const bool branch_taken_0x4267bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        ctx->pc = 0x4267C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4267BCu;
        // 0x4267c0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4267bc) {
            ctx->pc = 0x426668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_426668;
        }
    }
    ctx->pc = 0x4267C4u;
    // 0x4267c4: 0x10000116  b           . + 4 + (0x116 << 2)
    ctx->pc = 0x4267C4u;
    {
        const bool branch_taken_0x4267c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4267C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4267C4u;
        // 0x4267c8: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4267c4) {
            ctx->pc = 0x426C20u;
            goto label_426c20;
        }
    }
    ctx->pc = 0x4267CCu;
label_4267cc:
    // 0x4267cc: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x4267ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x4267d0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4267d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4267d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4267d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4267d8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4267d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4267dc: 0x10620111  beq         $v1, $v0, . + 4 + (0x111 << 2)
    ctx->pc = 0x4267DCu;
    {
        const bool branch_taken_0x4267dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4267E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4267DCu;
        // 0x4267e0: 0x7bb100d0  lq          $s1, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4267dc) {
            ctx->pc = 0x426C24u;
            goto label_426c24;
        }
    }
    ctx->pc = 0x4267E4u;
    // 0x4267e4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4267e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4267e8: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4267e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4267ec: 0x0  nop
    ctx->pc = 0x4267ecu;
    // NOP
label_4267f0:
    // 0x4267f0: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x4267f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4267f4: 0x2477ffff  addiu       $s7, $v1, -0x1
    ctx->pc = 0x4267f4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4267f8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4267f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4267fc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4267fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426800: 0x8fd20004  lw          $s2, 0x4($fp)
    ctx->pc = 0x426800u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x426804: 0xa6b021  addu        $s6, $a1, $a2
    ctx->pc = 0x426804u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x426808: 0x12400048  beqz        $s2, . + 4 + (0x48 << 2)
    ctx->pc = 0x426808u;
    {
        const bool branch_taken_0x426808 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x42680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426808u;
        // 0x42680c: 0x82a821  addu        $s5, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426808) {
            ctx->pc = 0x42692Cu;
            goto label_42692c;
        }
    }
    ctx->pc = 0x426810u;
    // 0x426810: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x426810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x426814: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x426814u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426818: 0x24b0ffff  addiu       $s0, $a1, -0x1
    ctx->pc = 0x426818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x42681c: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x42681cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x426820: 0x24742970  addiu       $s4, $v1, 0x2970
    ctx->pc = 0x426820u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 10608));
    // 0x426824: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x426824u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_426828:
    // 0x426828: 0x8f88add0  lw          $t0, -0x5230($gp)
    ctx->pc = 0x426828u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946256)));
    // 0x42682c: 0x9203fffd  lbu         $v1, -0x3($s0)
    ctx->pc = 0x42682cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294967293)));
    // 0x426830: 0x9204fffe  lbu         $a0, -0x2($s0)
    ctx->pc = 0x426830u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294967294)));
    // 0x426834: 0x1483823  subu        $a3, $t2, $t0
    ctx->pc = 0x426834u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x426838: 0x9205ffff  lbu         $a1, -0x1($s0)
    ctx->pc = 0x426838u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294967295)));
    // 0x42683c: 0xe31807  srav        $v1, $v1, $a3
    ctx->pc = 0x42683cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x426840: 0xe42007  srav        $a0, $a0, $a3
    ctx->pc = 0x426840u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
    // 0x426844: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x426844u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x426848: 0xe52807  srav        $a1, $a1, $a3
    ctx->pc = 0x426848u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 7) & 0x1F));
    // 0x42684c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x42684cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x426850: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x426850u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x426854: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x426854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x426858: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x426858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x42685c: 0xe63007  srav        $a2, $a2, $a3
    ctx->pc = 0x42685cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
    // 0x426860: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x426860u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x426864: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x426864u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x426868: 0xdc870000  ld          $a3, 0x0($a0)
    ctx->pc = 0x426868u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x42686c: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x42686cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x426870: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x426870u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x426874: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x426874u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x426878: 0x210f8  dsll        $v0, $v0, 3
    ctx->pc = 0x426878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 3);
    // 0x42687c: 0x738b8  dsll        $a3, $a3, 2
    ctx->pc = 0x42687cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 2);
    // 0x426880: 0x31878  dsll        $v1, $v1, 1
    ctx->pc = 0x426880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 1);
    // 0x426884: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x426884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x426888: 0xd43021  addu        $a2, $a2, $s4
    ctx->pc = 0x426888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x42688c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x42688cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x426890: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x426890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x426894: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x426894u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x426898: 0x8ca34000  lw          $v1, 0x4000($a1)
    ctx->pc = 0x426898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16384)));
    // 0x42689c: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x42689Cu;
    {
        const bool branch_taken_0x42689c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x4268A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42689Cu;
        // 0x4268a0: 0x442825  or          $a1, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42689c) {
            ctx->pc = 0x4268ACu;
            goto label_4268ac;
        }
    }
    ctx->pc = 0x4268A4u;
    // 0x4268a4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x4268A4u;
    {
        const bool branch_taken_0x4268a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4268A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4268A4u;
        // 0x4268a8: 0x90620018  lbu         $v0, 0x18($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4268a4) {
            ctx->pc = 0x4268E0u;
            goto label_4268e0;
        }
    }
    ctx->pc = 0x4268ACu;
label_4268ac:
    // 0x4268ac: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x4268acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x4268b0: 0x2506ffff  addiu       $a2, $t0, -0x1
    ctx->pc = 0x4268b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x4268b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4268b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4268b8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4268b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4268bc: 0x5293a  dsrl        $a1, $a1, 4
    ctx->pc = 0x4268bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 4);
    // 0x4268c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4268c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4268c4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4268c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4268c8: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x4268c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x4268cc: 0x7fa90020  sq          $t1, 0x20($sp)
    ctx->pc = 0x4268ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 9));
    // 0x4268d0: 0xc109cb4  jal         func_4272D0
    ctx->pc = 0x4268D0u;
    SET_GPR_U32(ctx, 31, 0x4268D8u);
    ctx->pc = 0x4268D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4268D0u;
    // 0x4268d4: 0x7faa0030  sq          $t2, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4272D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4272D0u, 0x4268D0u, 0x4268D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4268D8u;
label_4268d8:
    // 0x4268d8: 0x7baa0030  lq          $t2, 0x30($sp)
    ctx->pc = 0x4268d8u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4268dc: 0x7ba90020  lq          $t1, 0x20($sp)
    ctx->pc = 0x4268dcu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4268e0:
    // 0x4268e0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x4268e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4268e4: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x4268e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x4268e8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4268E8u;
    {
        const bool branch_taken_0x4268e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4268ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4268E8u;
        // 0x4268ec: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4268e8) {
            ctx->pc = 0x42690Cu;
            goto label_42690c;
        }
    }
    ctx->pc = 0x4268F0u;
    // 0x4268f0: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x4268f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x4268f4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4268f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x4268f8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x4268f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x4268fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4268fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x426900: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x426900u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x426904: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x426904u;
    {
        const bool branch_taken_0x426904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x426908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426904u;
        // 0x426908: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426904) {
            ctx->pc = 0x42691Cu;
            goto label_42691c;
        }
    }
    ctx->pc = 0x42690Cu;
label_42690c:
    // 0x42690c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x42690cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x426910: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x426910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x426914: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x426914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x426918: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x426918u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_42691c:
    // 0x42691c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x42691cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x426920: 0x272102b  sltu        $v0, $s3, $s2
    ctx->pc = 0x426920u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x426924: 0x5440ffc0  bnel        $v0, $zero, . + 4 + (-0x40 << 2)
    ctx->pc = 0x426924u;
    {
        const bool branch_taken_0x426924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x426924) {
            ctx->pc = 0x426928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x426924u;
            // 0x426928: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x426828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_426828;
        }
    }
    ctx->pc = 0x42692Cu;
label_42692c:
    // 0x42692c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x42692cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426930: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x426930u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426934: 0x1469ffae  bne         $v1, $t1, . + 4 + (-0x52 << 2)
    ctx->pc = 0x426934u;
    {
        const bool branch_taken_0x426934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        ctx->pc = 0x426938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426934u;
        // 0x426938: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426934) {
            ctx->pc = 0x4267F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4267f0;
        }
    }
    ctx->pc = 0x42693Cu;
    // 0x42693c: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x42693Cu;
    {
        const bool branch_taken_0x42693c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x426940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42693Cu;
        // 0x426940: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42693c) {
            ctx->pc = 0x426C20u;
            goto label_426c20;
        }
    }
    ctx->pc = 0x426944u;
label_426944:
    // 0x426944: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x426944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_426948:
    // 0x426948: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x426948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x42694c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x42694Cu;
    {
        const bool branch_taken_0x42694c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x426950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42694Cu;
        // 0x426950: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42694c) {
            ctx->pc = 0x426980u;
            goto label_426980;
        }
    }
    ctx->pc = 0x426954u;
    // 0x426954: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x426954u;
    {
        const bool branch_taken_0x426954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x426958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426954u;
        // 0x426958: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426954) {
            ctx->pc = 0x42696Cu;
            goto label_42696c;
        }
    }
    ctx->pc = 0x42695Cu;
    // 0x42695c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x42695Cu;
    {
        const bool branch_taken_0x42695c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x426960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42695Cu;
        // 0x426960: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42695c) {
            ctx->pc = 0x426980u;
            goto label_426980;
        }
    }
    ctx->pc = 0x426964u;
    // 0x426964: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x426964u;
    {
        const bool branch_taken_0x426964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x426968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426964u;
        // 0x426968: 0x7bb100d0  lq          $s1, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426964) {
            ctx->pc = 0x426C24u;
            goto label_426c24;
        }
    }
    ctx->pc = 0x42696Cu;
label_42696c:
    // 0x42696c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x42696cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x426970: 0x1062005a  beq         $v1, $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x426970u;
    {
        const bool branch_taken_0x426970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x426974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426970u;
        // 0x426974: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426970) {
            ctx->pc = 0x426ADCu;
            goto label_426adc;
        }
    }
    ctx->pc = 0x426978u;
    // 0x426978: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x426978u;
    {
        const bool branch_taken_0x426978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426978u;
        // 0x42697c: 0x7bb100d0  lq          $s1, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426978) {
            ctx->pc = 0x426C24u;
            goto label_426c24;
        }
    }
    ctx->pc = 0x426980u;
label_426980:
    // 0x426980: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x426980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x426984: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x426984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x426988: 0x8fc60018  lw          $a2, 0x18($fp)
    ctx->pc = 0x426988u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x42698c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x42698cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x426990: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x426990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x426994: 0x106200a1  beq         $v1, $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x426994u;
    {
        const bool branch_taken_0x426994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x426998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426994u;
        // 0x426998: 0xafa60010  sw          $a2, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426994) {
            ctx->pc = 0x426C1Cu;
            goto label_426c1c;
        }
    }
    ctx->pc = 0x42699Cu;
    // 0x42699c: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x42699cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4269a0: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4269a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4269a4: 0x0  nop
    ctx->pc = 0x4269a4u;
    // NOP
label_4269a8:
    // 0x4269a8: 0x2477ffff  addiu       $s7, $v1, -0x1
    ctx->pc = 0x4269a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4269ac: 0x8fd20004  lw          $s2, 0x4($fp)
    ctx->pc = 0x4269acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x4269b0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x4269b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4269b4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4269b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4269b8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x4269b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x4269bc: 0xa2b021  addu        $s6, $a1, $v0
    ctx->pc = 0x4269bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4269c0: 0x124a0040  beq         $s2, $t2, . + 4 + (0x40 << 2)
    ctx->pc = 0x4269C0u;
    {
        const bool branch_taken_0x4269c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 10));
        ctx->pc = 0x4269C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4269C0u;
        // 0x4269c4: 0x83a821  addu        $s5, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4269c0) {
            ctx->pc = 0x426AC4u;
            goto label_426ac4;
        }
    }
    ctx->pc = 0x4269C8u;
    // 0x4269c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4269c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4269cc: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x4269ccu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x4269d0: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x4269d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x4269d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4269d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4269d8: 0x240b0008  addiu       $t3, $zero, 0x8
    ctx->pc = 0x4269d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4269dc: 0x24b42970  addiu       $s4, $a1, 0x2970
    ctx->pc = 0x4269dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 10608));
    // 0x4269e0: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x4269e0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x4269e4: 0x0  nop
    ctx->pc = 0x4269e4u;
    // NOP
label_4269e8:
    // 0x4269e8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x4269e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4269ec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4269ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4269f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4269f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4269f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4269f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4269f8: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x4269f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4269fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4269fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x426a00: 0x8f88add0  lw          $t0, -0x5230($gp)
    ctx->pc = 0x426a00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946256)));
    // 0x426a04: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x426a04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x426a08: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x426a08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x426a0c: 0x1683823  subu        $a3, $t3, $t0
    ctx->pc = 0x426a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x426a10: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x426a10u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x426a14: 0xe31807  srav        $v1, $v1, $a3
    ctx->pc = 0x426a14u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x426a18: 0x8cc94000  lw          $t1, 0x4000($a2)
    ctx->pc = 0x426a18u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16384)));
    // 0x426a1c: 0xe42007  srav        $a0, $a0, $a3
    ctx->pc = 0x426a1cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
    // 0x426a20: 0x90460003  lbu         $a2, 0x3($v0)
    ctx->pc = 0x426a20u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x426a24: 0xe52807  srav        $a1, $a1, $a3
    ctx->pc = 0x426a24u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 7) & 0x1F));
    // 0x426a28: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x426a28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x426a2c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x426a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x426a30: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x426a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x426a34: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x426a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x426a38: 0xe63007  srav        $a2, $a2, $a3
    ctx->pc = 0x426a38u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
    // 0x426a3c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x426a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x426a40: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x426a40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x426a44: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x426a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x426a48: 0xdc870000  ld          $a3, 0x0($a0)
    ctx->pc = 0x426a48u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x426a4c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x426a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x426a50: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x426a50u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x426a54: 0x210f8  dsll        $v0, $v0, 3
    ctx->pc = 0x426a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 3);
    // 0x426a58: 0x738b8  dsll        $a3, $a3, 2
    ctx->pc = 0x426a58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 2);
    // 0x426a5c: 0xd43021  addu        $a2, $a2, $s4
    ctx->pc = 0x426a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x426a60: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x426a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x426a64: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x426a64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
    // 0x426a68: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x426a68u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x426a6c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x426a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x426a70: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x426A70u;
    {
        const bool branch_taken_0x426a70 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x426A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426A70u;
        // 0x426a74: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426a70) {
            ctx->pc = 0x426A80u;
            goto label_426a80;
        }
    }
    ctx->pc = 0x426A78u;
    // 0x426a78: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x426A78u;
    {
        const bool branch_taken_0x426a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x426A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426A78u;
        // 0x426a7c: 0x91220018  lbu         $v0, 0x18($t1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426a78) {
            ctx->pc = 0x426AB4u;
            goto label_426ab4;
        }
    }
    ctx->pc = 0x426A80u;
label_426a80:
    // 0x426a80: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x426a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x426a84: 0x2506ffff  addiu       $a2, $t0, -0x1
    ctx->pc = 0x426a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x426a88: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x426a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x426a8c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x426a8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x426a90: 0x5293a  dsrl        $a1, $a1, 4
    ctx->pc = 0x426a90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 4);
    // 0x426a94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x426a94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x426a98: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x426a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x426a9c: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x426a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x426aa0: 0x7faa0030  sq          $t2, 0x30($sp)
    ctx->pc = 0x426aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 10));
    // 0x426aa4: 0xc109cb4  jal         func_4272D0
    ctx->pc = 0x426AA4u;
    SET_GPR_U32(ctx, 31, 0x426AACu);
    ctx->pc = 0x426AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x426AA4u;
    // 0x426aa8: 0x7fab0040  sq          $t3, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4272D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4272D0u, 0x426AA4u, 0x426AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426AACu;
label_426aac:
    // 0x426aac: 0x7bab0040  lq          $t3, 0x40($sp)
    ctx->pc = 0x426aacu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x426ab0: 0x7baa0030  lq          $t2, 0x30($sp)
    ctx->pc = 0x426ab0u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_426ab4:
    // 0x426ab4: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x426ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x426ab8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x426ab8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x426abc: 0x1653ffca  bne         $s2, $s3, . + 4 + (-0x36 << 2)
    ctx->pc = 0x426ABCu;
    {
        const bool branch_taken_0x426abc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x426AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426ABCu;
        // 0x426ac0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426abc) {
            ctx->pc = 0x4269E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4269e8;
        }
    }
    ctx->pc = 0x426AC4u;
label_426ac4:
    // 0x426ac4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x426ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426ac8: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x426ac8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426acc: 0x146affb6  bne         $v1, $t2, . + 4 + (-0x4A << 2)
    ctx->pc = 0x426ACCu;
    {
        const bool branch_taken_0x426acc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        ctx->pc = 0x426AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426ACCu;
        // 0x426ad0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426acc) {
            ctx->pc = 0x4269A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4269a8;
        }
    }
    ctx->pc = 0x426AD4u;
    // 0x426ad4: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x426AD4u;
    {
        const bool branch_taken_0x426ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x426AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426AD4u;
        // 0x426ad8: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426ad4) {
            ctx->pc = 0x426C20u;
            goto label_426c20;
        }
    }
    ctx->pc = 0x426ADCu;
label_426adc:
    // 0x426adc: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x426adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x426ae0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x426ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x426ae4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x426ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x426ae8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x426ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x426aec: 0x1062004d  beq         $v1, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x426AECu;
    {
        const bool branch_taken_0x426aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x426AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426AECu;
        // 0x426af0: 0x7bb100d0  lq          $s1, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426aec) {
            ctx->pc = 0x426C24u;
            goto label_426c24;
        }
    }
    ctx->pc = 0x426AF4u;
    // 0x426af4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x426af4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x426af8: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x426af8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x426afc: 0x0  nop
    ctx->pc = 0x426afcu;
    // NOP
label_426b00:
    // 0x426b00: 0x8fd20004  lw          $s2, 0x4($fp)
    ctx->pc = 0x426b00u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x426b04: 0x2477ffff  addiu       $s7, $v1, -0x1
    ctx->pc = 0x426b04u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x426b08: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x426b08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x426b0c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x426b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x426b10: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x426b10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x426b14: 0xa6b021  addu        $s6, $a1, $a2
    ctx->pc = 0x426b14u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x426b18: 0x1249003c  beq         $s2, $t1, . + 4 + (0x3C << 2)
    ctx->pc = 0x426B18u;
    {
        const bool branch_taken_0x426b18 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 9));
        ctx->pc = 0x426B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426B18u;
        // 0x426b1c: 0x82a821  addu        $s5, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426b18) {
            ctx->pc = 0x426C0Cu;
            goto label_426c0c;
        }
    }
    ctx->pc = 0x426B20u;
    // 0x426b20: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x426b20u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x426b24: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x426b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x426b28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x426b28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426b2c: 0x24b0ffff  addiu       $s0, $a1, -0x1
    ctx->pc = 0x426b2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x426b30: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x426b30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x426b34: 0x24742970  addiu       $s4, $v1, 0x2970
    ctx->pc = 0x426b34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 10608));
    // 0x426b38: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x426b38u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x426b3c: 0x0  nop
    ctx->pc = 0x426b3cu;
    // NOP
label_426b40:
    // 0x426b40: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x426b40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x426b44: 0x8f88add0  lw          $t0, -0x5230($gp)
    ctx->pc = 0x426b44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946256)));
    // 0x426b48: 0x9203fffd  lbu         $v1, -0x3($s0)
    ctx->pc = 0x426b48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294967293)));
    // 0x426b4c: 0x9204fffe  lbu         $a0, -0x2($s0)
    ctx->pc = 0x426b4cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294967294)));
    // 0x426b50: 0x1483823  subu        $a3, $t2, $t0
    ctx->pc = 0x426b50u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x426b54: 0x9205ffff  lbu         $a1, -0x1($s0)
    ctx->pc = 0x426b54u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294967295)));
    // 0x426b58: 0xe31807  srav        $v1, $v1, $a3
    ctx->pc = 0x426b58u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x426b5c: 0xe42007  srav        $a0, $a0, $a3
    ctx->pc = 0x426b5cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
    // 0x426b60: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x426b60u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x426b64: 0xe52807  srav        $a1, $a1, $a3
    ctx->pc = 0x426b64u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 7) & 0x1F));
    // 0x426b68: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x426b68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x426b6c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x426b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x426b70: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x426b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x426b74: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x426b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x426b78: 0xe63007  srav        $a2, $a2, $a3
    ctx->pc = 0x426b78u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
    // 0x426b7c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x426b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x426b80: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x426b80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x426b84: 0xdc870000  ld          $a3, 0x0($a0)
    ctx->pc = 0x426b84u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x426b88: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x426b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x426b8c: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x426b8cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x426b90: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x426b90u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x426b94: 0x210f8  dsll        $v0, $v0, 3
    ctx->pc = 0x426b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 3);
    // 0x426b98: 0x738b8  dsll        $a3, $a3, 2
    ctx->pc = 0x426b98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 2);
    // 0x426b9c: 0x31878  dsll        $v1, $v1, 1
    ctx->pc = 0x426b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 1);
    // 0x426ba0: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x426ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x426ba4: 0xd43021  addu        $a2, $a2, $s4
    ctx->pc = 0x426ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x426ba8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x426ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x426bac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x426bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x426bb0: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x426bb0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x426bb4: 0x8ca34000  lw          $v1, 0x4000($a1)
    ctx->pc = 0x426bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16384)));
    // 0x426bb8: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x426BB8u;
    {
        const bool branch_taken_0x426bb8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x426BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426BB8u;
        // 0x426bbc: 0x442825  or          $a1, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426bb8) {
            ctx->pc = 0x426BC8u;
            goto label_426bc8;
        }
    }
    ctx->pc = 0x426BC0u;
    // 0x426bc0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x426BC0u;
    {
        const bool branch_taken_0x426bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x426BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426BC0u;
        // 0x426bc4: 0x90620018  lbu         $v0, 0x18($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426bc0) {
            ctx->pc = 0x426BFCu;
            goto label_426bfc;
        }
    }
    ctx->pc = 0x426BC8u;
label_426bc8:
    // 0x426bc8: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x426bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x426bcc: 0x2506ffff  addiu       $a2, $t0, -0x1
    ctx->pc = 0x426bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x426bd0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x426bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x426bd4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x426bd4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x426bd8: 0x5293a  dsrl        $a1, $a1, 4
    ctx->pc = 0x426bd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 4);
    // 0x426bdc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x426bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x426be0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x426be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x426be4: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x426be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x426be8: 0x7fa90020  sq          $t1, 0x20($sp)
    ctx->pc = 0x426be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 9));
    // 0x426bec: 0xc109cb4  jal         func_4272D0
    ctx->pc = 0x426BECu;
    SET_GPR_U32(ctx, 31, 0x426BF4u);
    ctx->pc = 0x426BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x426BECu;
    // 0x426bf0: 0x7faa0030  sq          $t2, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4272D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4272D0u, 0x426BECu, 0x426BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426BF4u;
label_426bf4:
    // 0x426bf4: 0x7baa0030  lq          $t2, 0x30($sp)
    ctx->pc = 0x426bf4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x426bf8: 0x7ba90020  lq          $t1, 0x20($sp)
    ctx->pc = 0x426bf8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_426bfc:
    // 0x426bfc: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x426bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x426c00: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x426c00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x426c04: 0x1653ffce  bne         $s2, $s3, . + 4 + (-0x32 << 2)
    ctx->pc = 0x426C04u;
    {
        const bool branch_taken_0x426c04 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x426C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426C04u;
        // 0x426c08: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426c04) {
            ctx->pc = 0x426B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_426b40;
        }
    }
    ctx->pc = 0x426C0Cu;
label_426c0c:
    // 0x426c0c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x426c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426c10: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x426c10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426c14: 0x1469ffba  bne         $v1, $t1, . + 4 + (-0x46 << 2)
    ctx->pc = 0x426C14u;
    {
        const bool branch_taken_0x426c14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        ctx->pc = 0x426C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426C14u;
        // 0x426c18: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426c14) {
            ctx->pc = 0x426B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_426b00;
        }
    }
    ctx->pc = 0x426C1Cu;
label_426c1c:
    // 0x426c1c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x426c1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_426c20:
    // 0x426c20: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x426c20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_426c24:
    // 0x426c24: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x426c24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x426c28: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x426c28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x426c2c: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x426c2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x426c30: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x426c30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x426c34: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x426c34u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x426c38: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x426c38u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x426c3c: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x426c3cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x426c40: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x426c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x426c44: 0x3e00008  jr          $ra
    ctx->pc = 0x426C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x426C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426C44u;
        // 0x426c48: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x426C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x426C4Cu;
    // 0x426c4c: 0x0  nop
    ctx->pc = 0x426c4cu;
    // NOP
    // 0x426c50: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x426c50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x426c54: 0x3e00008  jr          $ra
    ctx->pc = 0x426C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x426C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426C54u;
        // 0x426c58: 0xaf84add0  sw          $a0, -0x5230($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946256), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x426C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x426C5Cu;
    // 0x426c5c: 0x0  nop
    ctx->pc = 0x426c5cu;
    // NOP
    // 0x426c60: 0x3e00008  jr          $ra
    ctx->pc = 0x426C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x426C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426C60u;
        // 0x426c64: 0x8f82add0  lw          $v0, -0x5230($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946256)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x426C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x426C68u;
}
