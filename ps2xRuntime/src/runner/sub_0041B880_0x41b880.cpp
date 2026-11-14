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

// Function: sub_0041B880
// Address: 0x41b880 - 0x41bc28
void sub_0041B880_0x41b880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041B880_0x41b880");
#endif

    switch (ctx->pc) {
        case 0x41b994u: goto label_41b994;
        case 0x41b9b8u: goto label_41b9b8;
        case 0x41b9e0u: goto label_41b9e0;
        case 0x41b9f4u: goto label_41b9f4;
        case 0x41ba14u: goto label_41ba14;
        case 0x41ba34u: goto label_41ba34;
        case 0x41ba58u: goto label_41ba58;
        case 0x41ba80u: goto label_41ba80;
        case 0x41bb38u: goto label_41bb38;
        case 0x41bbf0u: goto label_41bbf0;
        case 0x41bbfcu: goto label_41bbfc;
        default: break;
    }

    ctx->pc = 0x41b880u;

    // 0x41b880: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x41b880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x41b884: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x41b884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x41b888: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x41b888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x41b88c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x41b88cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b890: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x41b890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x41b894: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x41b894u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b898: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x41b898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x41b89c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x41b89cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b8a0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x41b8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x41b8a4: 0x24040808  addiu       $a0, $zero, 0x808
    ctx->pc = 0x41b8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x41b8a8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x41b8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x41b8ac: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x41b8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x41b8b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41b8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x41b8b4: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x41b8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x41b8b8: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x41b8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x41b8bc: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x41b8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x41b8c0: 0x8e880018  lw          $t0, 0x18($s4)
    ctx->pc = 0x41b8c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x41b8c4: 0x8e750004  lw          $s5, 0x4($s3)
    ctx->pc = 0x41b8c4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x41b8c8: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x41b8c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x41b8cc: 0x8e760008  lw          $s6, 0x8($s3)
    ctx->pc = 0x41b8ccu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x41b8d0: 0x8e910014  lw          $s1, 0x14($s4)
    ctx->pc = 0x41b8d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x41b8d4: 0x106400bf  beq         $v1, $a0, . + 4 + (0xBF << 2)
    ctx->pc = 0x41B8D4u;
    {
        const bool branch_taken_0x41b8d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x41B8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B8D4u;
        // 0x41b8d8: 0x8e700014  lw          $s0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b8d4) {
            ctx->pc = 0x41BBD4u;
            goto label_41bbd4;
        }
    }
    ctx->pc = 0x41B8DCu;
    // 0x41b8dc: 0x2c620809  sltiu       $v0, $v1, 0x809
    ctx->pc = 0x41b8dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2057) ? 1 : 0);
    // 0x41b8e0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x41B8E0u;
    {
        const bool branch_taken_0x41b8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B8E0u;
        // 0x41b8e4: 0x24020408  addiu       $v0, $zero, 0x408 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b8e0) {
            ctx->pc = 0x41B91Cu;
            goto label_41b91c;
        }
    }
    ctx->pc = 0x41B8E8u;
    // 0x41b8e8: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x41B8E8u;
    {
        const bool branch_taken_0x41b8e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x41B8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B8E8u;
        // 0x41b8ec: 0x2c620409  sltiu       $v0, $v1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1033) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b8e8) {
            ctx->pc = 0x41B95Cu;
            goto label_41b95c;
        }
    }
    ctx->pc = 0x41B8F0u;
    // 0x41b8f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x41B8F0u;
    {
        const bool branch_taken_0x41b8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B8F0u;
        // 0x41b8f4: 0x24020404  addiu       $v0, $zero, 0x404 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b8f0) {
            ctx->pc = 0x41B908u;
            goto label_41b908;
        }
    }
    ctx->pc = 0x41B8F8u;
    // 0x41b8f8: 0x106200b6  beq         $v1, $v0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x41B8F8u;
    {
        const bool branch_taken_0x41b8f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x41B8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B8F8u;
        // 0x41b8fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b8f8) {
            ctx->pc = 0x41BBD4u;
            goto label_41bbd4;
        }
    }
    ctx->pc = 0x41B900u;
    // 0x41b900: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x41B900u;
    {
        const bool branch_taken_0x41b900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x41b900) {
            ctx->pc = 0x41BBE0u;
            goto label_41bbe0;
        }
    }
    ctx->pc = 0x41B908u;
label_41b908:
    // 0x41b908: 0x24020420  addiu       $v0, $zero, 0x420
    ctx->pc = 0x41b908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x41b90c: 0x10620059  beq         $v1, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x41B90Cu;
    {
        const bool branch_taken_0x41b90c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x41B910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B90Cu;
        // 0x41b910: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b90c) {
            ctx->pc = 0x41BA74u;
            goto label_41ba74;
        }
    }
    ctx->pc = 0x41B914u;
    // 0x41b914: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x41B914u;
    {
        const bool branch_taken_0x41b914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x41b914) {
            ctx->pc = 0x41BBE0u;
            goto label_41bbe0;
        }
    }
    ctx->pc = 0x41B91Cu;
label_41b91c:
    // 0x41b91c: 0x24022004  addiu       $v0, $zero, 0x2004
    ctx->pc = 0x41b91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8196));
    // 0x41b920: 0x106200ae  beq         $v1, $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x41B920u;
    {
        const bool branch_taken_0x41b920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x41B924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B920u;
        // 0x41b924: 0x2c622005  sltiu       $v0, $v1, 0x2005 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8197) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b920) {
            ctx->pc = 0x41BBDCu;
            goto label_41bbdc;
        }
    }
    ctx->pc = 0x41B928u;
    // 0x41b928: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x41B928u;
    {
        const bool branch_taken_0x41b928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B928u;
        // 0x41b92c: 0x24020820  addiu       $v0, $zero, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b928) {
            ctx->pc = 0x41B940u;
            goto label_41b940;
        }
    }
    ctx->pc = 0x41B930u;
    // 0x41b930: 0x10620050  beq         $v1, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x41B930u;
    {
        const bool branch_taken_0x41b930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x41B934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B930u;
        // 0x41b934: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b930) {
            ctx->pc = 0x41BA74u;
            goto label_41ba74;
        }
    }
    ctx->pc = 0x41B938u;
    // 0x41b938: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x41B938u;
    {
        const bool branch_taken_0x41b938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x41b938) {
            ctx->pc = 0x41BBE0u;
            goto label_41bbe0;
        }
    }
    ctx->pc = 0x41B940u;
label_41b940:
    // 0x41b940: 0x24022008  addiu       $v0, $zero, 0x2008
    ctx->pc = 0x41b940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8200));
    // 0x41b944: 0x106200a5  beq         $v1, $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x41B944u;
    {
        const bool branch_taken_0x41b944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x41B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B944u;
        // 0x41b948: 0x24022020  addiu       $v0, $zero, 0x2020 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b944) {
            ctx->pc = 0x41BBDCu;
            goto label_41bbdc;
        }
    }
    ctx->pc = 0x41B94Cu;
    // 0x41b94c: 0x146200a4  bne         $v1, $v0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x41B94Cu;
    {
        const bool branch_taken_0x41b94c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x41B950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B94Cu;
        // 0x41b950: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b94c) {
            ctx->pc = 0x41BBE0u;
            goto label_41bbe0;
        }
    }
    ctx->pc = 0x41B954u;
    // 0x41b954: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x41B954u;
    {
        const bool branch_taken_0x41b954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B954u;
        // 0x41b958: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b954) {
            ctx->pc = 0x41BBFCu;
            goto label_41bbfc;
        }
    }
    ctx->pc = 0x41B95Cu;
label_41b95c:
    // 0x41b95c: 0x1ac0009d  blez        $s6, . + 4 + (0x9D << 2)
    ctx->pc = 0x41B95Cu;
    {
        const bool branch_taken_0x41b95c = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x41B960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B95Cu;
        // 0x41b960: 0x161023  negu        $v0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b95c) {
            ctx->pc = 0x41BBD4u;
            goto label_41bbd4;
        }
    }
    ctx->pc = 0x41B964u;
    // 0x41b964: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x41b964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x41b968: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x41B968u;
    {
        const bool branch_taken_0x41b968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B968u;
        // 0x41b96c: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b968) {
            ctx->pc = 0x41B9E0u;
            goto label_41b9e0;
        }
    }
    ctx->pc = 0x41B970u;
    // 0x41b970: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x41b970u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x41b974: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x41B974u;
    {
        const bool branch_taken_0x41b974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B974u;
        // 0x41b978: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b974) {
            ctx->pc = 0x41B9C8u;
            goto label_41b9c8;
        }
    }
    ctx->pc = 0x41B97Cu;
    // 0x41b97c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x41B97Cu;
    {
        const bool branch_taken_0x41b97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B97Cu;
        // 0x41b980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b97c) {
            ctx->pc = 0x41B9A4u;
            goto label_41b9a4;
        }
    }
    ctx->pc = 0x41B984u;
    // 0x41b984: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x41b984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b988: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x41b988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b98c: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x41B98Cu;
    SET_GPR_U32(ctx, 31, 0x41B994u);
    ctx->pc = 0x41B990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B98Cu;
    // 0x41b990: 0x26d2ffff  addiu       $s2, $s6, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x41B98Cu, 0x41B994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B994u;
label_41b994:
    // 0x41b994: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x41b994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x41b998: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x41b998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x41b99c: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x41b99cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x41b9a0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x41b9a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_41b9a4:
    // 0x41b9a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41b9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b9a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x41b9a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b9ac: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x41b9acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b9b0: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x41B9B0u;
    SET_GPR_U32(ctx, 31, 0x41B9B8u);
    ctx->pc = 0x41B9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B9B0u;
    // 0x41b9b4: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x41B9B0u, 0x41B9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B9B8u;
label_41b9b8:
    // 0x41b9b8: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x41b9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x41b9bc: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x41b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x41b9c0: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x41b9c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x41b9c4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x41b9c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_41b9c8:
    // 0x41b9c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41b9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b9cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x41b9ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b9d0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x41b9d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b9d4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x41B9D4u;
    {
        const bool branch_taken_0x41b9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B9D4u;
        // 0x41b9d8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b9d4) {
            ctx->pc = 0x41BA50u;
            goto label_41ba50;
        }
    }
    ctx->pc = 0x41B9DCu;
    // 0x41b9dc: 0x0  nop
    ctx->pc = 0x41b9dcu;
    // NOP
label_41b9e0:
    // 0x41b9e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41b9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b9e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x41b9e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b9e8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x41b9e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b9ec: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x41B9ECu;
    SET_GPR_U32(ctx, 31, 0x41B9F4u);
    ctx->pc = 0x41B9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B9ECu;
    // 0x41b9f0: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x41B9ECu, 0x41B9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B9F4u;
label_41b9f4:
    // 0x41b9f4: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x41b9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x41b9f8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x41b9f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41b9fc: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x41b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x41ba00: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x41ba00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x41ba04: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x41ba04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x41ba08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x41ba08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ba0c: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x41BA0Cu;
    SET_GPR_U32(ctx, 31, 0x41BA14u);
    ctx->pc = 0x41BA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BA0Cu;
    // 0x41ba10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x41BA0Cu, 0x41BA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BA14u;
label_41ba14:
    // 0x41ba14: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x41ba14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x41ba18: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x41ba18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ba1c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x41ba1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x41ba20: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x41ba20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x41ba24: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x41ba24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x41ba28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x41ba28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ba2c: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x41BA2Cu;
    SET_GPR_U32(ctx, 31, 0x41BA34u);
    ctx->pc = 0x41BA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BA2Cu;
    // 0x41ba30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x41BA2Cu, 0x41BA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BA34u;
label_41ba34:
    // 0x41ba34: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x41ba34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x41ba38: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x41ba38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ba3c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x41ba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x41ba40: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x41ba40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x41ba44: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x41ba44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x41ba48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x41ba48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ba4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41ba4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41ba50:
    // 0x41ba50: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x41BA50u;
    SET_GPR_U32(ctx, 31, 0x41BA58u);
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x41BA50u, 0x41BA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BA58u;
label_41ba58:
    // 0x41ba58: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x41ba58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x41ba5c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x41ba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x41ba60: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x41ba60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x41ba64: 0x1640ffde  bnez        $s2, . + 4 + (-0x22 << 2)
    ctx->pc = 0x41BA64u;
    {
        const bool branch_taken_0x41ba64 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x41BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BA64u;
        // 0x41ba68: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ba64) {
            ctx->pc = 0x41B9E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41b9e0;
        }
    }
    ctx->pc = 0x41BA6Cu;
    // 0x41ba6c: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x41BA6Cu;
    {
        const bool branch_taken_0x41ba6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BA6Cu;
        // 0x41ba70: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ba6c) {
            ctx->pc = 0x41BBFCu;
            goto label_41bbfc;
        }
    }
    ctx->pc = 0x41BA74u;
label_41ba74:
    // 0x41ba74: 0x1ac00057  blez        $s6, . + 4 + (0x57 << 2)
    ctx->pc = 0x41BA74u;
    {
        const bool branch_taken_0x41ba74 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x41BA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BA74u;
        // 0x41ba78: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ba74) {
            ctx->pc = 0x41BBD4u;
            goto label_41bbd4;
        }
    }
    ctx->pc = 0x41BA7Cu;
    // 0x41ba7c: 0x0  nop
    ctx->pc = 0x41ba7cu;
    // NOP
label_41ba80:
    // 0x41ba80: 0x1aa0004d  blez        $s5, . + 4 + (0x4D << 2)
    ctx->pc = 0x41BA80u;
    {
        const bool branch_taken_0x41ba80 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x41BA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BA80u;
        // 0x41ba84: 0x26440001  addiu       $a0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ba80) {
            ctx->pc = 0x41BBB8u;
            goto label_41bbb8;
        }
    }
    ctx->pc = 0x41BA88u;
    // 0x41ba88: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x41ba88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ba8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x41ba8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ba90: 0x71023  negu        $v0, $a3
    ctx->pc = 0x41ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x41ba94: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x41ba94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x41ba98: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x41BA98u;
    {
        const bool branch_taken_0x41ba98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BA98u;
        // 0x41ba9c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ba98) {
            ctx->pc = 0x41BB30u;
            goto label_41bb30;
        }
    }
    ctx->pc = 0x41BAA0u;
    // 0x41baa0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x41baa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x41baa4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x41BAA4u;
    {
        const bool branch_taken_0x41baa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BAA4u;
        // 0x41baa8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41baa4) {
            ctx->pc = 0x41BB04u;
            goto label_41bb04;
        }
    }
    ctx->pc = 0x41BAACu;
    // 0x41baac: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x41BAACu;
    {
        const bool branch_taken_0x41baac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41baac) {
            ctx->pc = 0x41BAB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41BAACu;
            // 0x41bab0: 0x90a20000  lbu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41BAE0u;
            goto label_41bae0;
        }
    }
    ctx->pc = 0x41BAB4u;
    // 0x41bab4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x41bab4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x41bab8: 0x26060004  addiu       $a2, $s0, 0x4
    ctx->pc = 0x41bab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x41babc: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x41babcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x41bac0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x41bac0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x41bac4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x41bac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x41bac8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x41bac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x41bacc: 0x88430003  lwl         $v1, 0x3($v0)
    ctx->pc = 0x41baccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x41bad0: 0x98430000  lwr         $v1, 0x0($v0)
    ctx->pc = 0x41bad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x41bad4: 0xaa030003  swl         $v1, 0x3($s0)
    ctx->pc = 0x41bad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x41bad8: 0xba030000  swr         $v1, 0x0($s0)
    ctx->pc = 0x41bad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x41badc: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x41badcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_41bae0:
    // 0x41bae0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x41bae0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x41bae4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x41bae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x41bae8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x41bae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x41baec: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x41baecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x41baf0: 0x88430003  lwl         $v1, 0x3($v0)
    ctx->pc = 0x41baf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x41baf4: 0x98430000  lwr         $v1, 0x0($v0)
    ctx->pc = 0x41baf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x41baf8: 0xa8c30003  swl         $v1, 0x3($a2)
    ctx->pc = 0x41baf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x41bafc: 0xb8c30000  swr         $v1, 0x0($a2)
    ctx->pc = 0x41bafcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x41bb00: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x41bb00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_41bb04:
    // 0x41bb04: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x41bb04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x41bb08: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x41bb08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x41bb0c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x41bb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x41bb10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x41bb10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x41bb14: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x41bb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x41bb18: 0x88430003  lwl         $v1, 0x3($v0)
    ctx->pc = 0x41bb18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x41bb1c: 0x98430000  lwr         $v1, 0x0($v0)
    ctx->pc = 0x41bb1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x41bb20: 0xa8c30003  swl         $v1, 0x3($a2)
    ctx->pc = 0x41bb20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x41bb24: 0xb8c30000  swr         $v1, 0x0($a2)
    ctx->pc = 0x41bb24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x41bb28: 0x10e00023  beqz        $a3, . + 4 + (0x23 << 2)
    ctx->pc = 0x41BB28u;
    {
        const bool branch_taken_0x41bb28 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BB28u;
        // 0x41bb2c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bb28) {
            ctx->pc = 0x41BBB8u;
            goto label_41bbb8;
        }
    }
    ctx->pc = 0x41BB30u;
label_41bb30:
    // 0x41bb30: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x41bb30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41bb34: 0x0  nop
    ctx->pc = 0x41bb34u;
    // NOP
label_41bb38:
    // 0x41bb38: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x41bb38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x41bb3c: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x41bb3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x41bb40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x41bb40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x41bb44: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x41bb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x41bb48: 0x88460003  lwl         $a2, 0x3($v0)
    ctx->pc = 0x41bb48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x41bb4c: 0x98460000  lwr         $a2, 0x0($v0)
    ctx->pc = 0x41bb4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x41bb50: 0xa8660003  swl         $a2, 0x3($v1)
    ctx->pc = 0x41bb50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x41bb54: 0xb8660000  swr         $a2, 0x0($v1)
    ctx->pc = 0x41bb54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x41bb58: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x41bb58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x41bb5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x41bb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x41bb60: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x41bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x41bb64: 0x88460003  lwl         $a2, 0x3($v0)
    ctx->pc = 0x41bb64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x41bb68: 0x98460000  lwr         $a2, 0x0($v0)
    ctx->pc = 0x41bb68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x41bb6c: 0xa8660007  swl         $a2, 0x7($v1)
    ctx->pc = 0x41bb6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x41bb70: 0xb8660004  swr         $a2, 0x4($v1)
    ctx->pc = 0x41bb70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x41bb74: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x41bb74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x41bb78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x41bb78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x41bb7c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x41bb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x41bb80: 0x88460003  lwl         $a2, 0x3($v0)
    ctx->pc = 0x41bb80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x41bb84: 0x98460000  lwr         $a2, 0x0($v0)
    ctx->pc = 0x41bb84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x41bb88: 0xa866000b  swl         $a2, 0xB($v1)
    ctx->pc = 0x41bb88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x41bb8c: 0xb8660008  swr         $a2, 0x8($v1)
    ctx->pc = 0x41bb8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x41bb90: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x41bb90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x41bb94: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x41bb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x41bb98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x41bb98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x41bb9c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x41bb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x41bba0: 0x88460003  lwl         $a2, 0x3($v0)
    ctx->pc = 0x41bba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x41bba4: 0x98460000  lwr         $a2, 0x0($v0)
    ctx->pc = 0x41bba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x41bba8: 0xa866000f  swl         $a2, 0xF($v1)
    ctx->pc = 0x41bba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x41bbac: 0xb866000c  swr         $a2, 0xC($v1)
    ctx->pc = 0x41bbacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x41bbb0: 0x14e0ffe1  bnez        $a3, . + 4 + (-0x1F << 2)
    ctx->pc = 0x41BBB0u;
    {
        const bool branch_taken_0x41bbb0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x41BBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BBB0u;
        // 0x41bbb4: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bbb0) {
            ctx->pc = 0x41BB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41bb38;
        }
    }
    ctx->pc = 0x41BBB8u;
label_41bbb8:
    // 0x41bbb8: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x41bbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x41bbbc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x41bbbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41bbc0: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x41bbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x41bbc4: 0x256202a  slt         $a0, $s2, $s6
    ctx->pc = 0x41bbc4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x41bbc8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x41bbc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x41bbcc: 0x1480ffac  bnez        $a0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x41BBCCu;
    {
        const bool branch_taken_0x41bbcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x41BBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BBCCu;
        // 0x41bbd0: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bbcc) {
            ctx->pc = 0x41BA80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41ba80;
        }
    }
    ctx->pc = 0x41BBD4u;
label_41bbd4:
    // 0x41bbd4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x41BBD4u;
    {
        const bool branch_taken_0x41bbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BBD4u;
        // 0x41bbd8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bbd4) {
            ctx->pc = 0x41BBFCu;
            goto label_41bbfc;
        }
    }
    ctx->pc = 0x41BBDCu;
label_41bbdc:
    // 0x41bbdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41bbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41bbe0:
    // 0x41bbe0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x41bbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x41bbe4: 0x34840009  ori         $a0, $a0, 0x9
    ctx->pc = 0x41bbe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
    // 0x41bbe8: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x41BBE8u;
    SET_GPR_U32(ctx, 31, 0x41BBF0u);
    ctx->pc = 0x41BBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BBE8u;
    // 0x41bbec: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x41BBE8u, 0x41BBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BBF0u;
label_41bbf0:
    // 0x41bbf0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x41bbf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41bbf4: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x41BBF4u;
    SET_GPR_U32(ctx, 31, 0x41BBFCu);
    ctx->pc = 0x41BBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BBF4u;
    // 0x41bbf8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x41BBF4u, 0x41BBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BBFCu;
label_41bbfc:
    // 0x41bbfc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x41bbfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41bc00: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x41bc00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x41bc04: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x41bc04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x41bc08: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x41bc08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x41bc0c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x41bc0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x41bc10: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x41bc10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x41bc14: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x41bc14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x41bc18: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x41bc18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41bc1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41bc1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41bc20: 0x3e00008  jr          $ra
    ctx->pc = 0x41BC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BC20u;
        // 0x41bc24: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41BC20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41BC28u;
}
