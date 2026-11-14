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

// Function: sub_003F4000
// Address: 0x3f4000 - 0x3f4540
void sub_003F4000_0x3f4000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F4000_0x3f4000");
#endif

    switch (ctx->pc) {
        case 0x3f4040u: goto label_3f4040;
        case 0x3f4068u: goto label_3f4068;
        case 0x3f4080u: goto label_3f4080;
        case 0x3f4098u: goto label_3f4098;
        case 0x3f40a8u: goto label_3f40a8;
        case 0x3f40b4u: goto label_3f40b4;
        case 0x3f40ccu: goto label_3f40cc;
        case 0x3f40dcu: goto label_3f40dc;
        case 0x3f40e4u: goto label_3f40e4;
        case 0x3f4128u: goto label_3f4128;
        case 0x3f415cu: goto label_3f415c;
        case 0x3f4170u: goto label_3f4170;
        case 0x3f4188u: goto label_3f4188;
        case 0x3f4198u: goto label_3f4198;
        case 0x3f41ccu: goto label_3f41cc;
        case 0x3f41e0u: goto label_3f41e0;
        case 0x3f41f8u: goto label_3f41f8;
        case 0x3f4208u: goto label_3f4208;
        case 0x3f422cu: goto label_3f422c;
        case 0x3f423cu: goto label_3f423c;
        case 0x3f4244u: goto label_3f4244;
        case 0x3f428cu: goto label_3f428c;
        case 0x3f42a0u: goto label_3f42a0;
        case 0x3f42b8u: goto label_3f42b8;
        case 0x3f42c8u: goto label_3f42c8;
        case 0x3f42d0u: goto label_3f42d0;
        case 0x3f431cu: goto label_3f431c;
        case 0x3f4330u: goto label_3f4330;
        case 0x3f435cu: goto label_3f435c;
        case 0x3f43acu: goto label_3f43ac;
        case 0x3f450cu: goto label_3f450c;
        case 0x3f451cu: goto label_3f451c;
        default: break;
    }

    ctx->pc = 0x3f4000u;

    // 0x3f4000: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3f4000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3f4004: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3f4004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3f4008: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3f4008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3f400c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3f400cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4010: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3f4010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3f4014: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3f4014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3f4018: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f4018u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f401c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3f401cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x3f4020: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f4020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3f4024: 0xde4300f8  ld          $v1, 0xF8($s2)
    ctx->pc = 0x3f4024u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x3f4028: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3f4028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3f402c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F402Cu;
    {
        const bool branch_taken_0x3f402c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F4030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F402Cu;
        // 0x3f4030: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f402c) {
            ctx->pc = 0x3F4048u;
            goto label_3f4048;
        }
    }
    ctx->pc = 0x3F4034u;
    // 0x3f4034: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f4034u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f4038: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3F4038u;
    SET_GPR_U32(ctx, 31, 0x3F4040u);
    ctx->pc = 0x3F403Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4038u;
    // 0x3f403c: 0x24a5eec8  addiu       $a1, $a1, -0x1138 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3F4038u, 0x3F4040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4040u;
label_3f4040:
    // 0x3f4040: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x3F4040u;
    {
        const bool branch_taken_0x3f4040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4040u;
        // 0x3f4044: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4040) {
            ctx->pc = 0x3F41B0u;
            goto label_3f41b0;
        }
    }
    ctx->pc = 0x3F4048u;
label_3f4048:
    // 0x3f4048: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x3f4048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3f404c: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x3F404Cu;
    {
        const bool branch_taken_0x3f404c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F404Cu;
        // 0x3f4050: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f404c) {
            ctx->pc = 0x3F4110u;
            goto label_3f4110;
        }
    }
    ctx->pc = 0x3F4054u;
    // 0x3f4054: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f4054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4058: 0x11983c  dsll32      $s3, $s1, 0
    ctx->pc = 0x3f4058u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3f405c: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3f405cu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3f4060: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F4060u;
    SET_GPR_U32(ctx, 31, 0x3F4068u);
    ctx->pc = 0x3F4064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4060u;
    // 0x3f4064: 0x24a5eee8  addiu       $a1, $a1, -0x1118 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F4060u, 0x3F4068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4068u;
label_3f4068:
    // 0x3f4068: 0x8e54015c  lw          $s4, 0x15C($s2)
    ctx->pc = 0x3f4068u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f406c: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f406cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f4070: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3F4070u;
    {
        const bool branch_taken_0x3f4070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4070) {
            ctx->pc = 0x3F40B4u;
            goto label_3f40b4;
        }
    }
    ctx->pc = 0x3F4078u;
    // 0x3f4078: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f4078u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f407c: 0x0  nop
    ctx->pc = 0x3f407cu;
    // NOP
label_3f4080:
    // 0x3f4080: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f4080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4084: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x3f4084u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f4088: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x3f4088u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3f408c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f408cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4090: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F4090u;
    SET_GPR_U32(ctx, 31, 0x3F4098u);
    ctx->pc = 0x3F4094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4090u;
    // 0x3f4094: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F4090u, 0x3F4098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4098u;
label_3f4098:
    // 0x3f4098: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f4098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f409c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f409cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f40a0: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F40A0u;
    SET_GPR_U32(ctx, 31, 0x3F40A8u);
    ctx->pc = 0x3F40A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F40A0u;
    // 0x3f40a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F40A0u, 0x3F40A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F40A8u;
label_3f40a8:
    // 0x3f40a8: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f40a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f40ac: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F40ACu;
    {
        const bool branch_taken_0x3f40ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f40ac) {
            ctx->pc = 0x3F40B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F40ACu;
            // 0x3f40b0: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F4080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f4080;
        }
    }
    ctx->pc = 0x3F40B4u;
label_3f40b4:
    // 0x3f40b4: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F40B4u;
    {
        const bool branch_taken_0x3f40b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F40B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F40B4u;
        // 0x3f40b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f40b4) {
            ctx->pc = 0x3F40DCu;
            goto label_3f40dc;
        }
    }
    ctx->pc = 0x3F40BCu;
    // 0x3f40bc: 0x8e500158  lw          $s0, 0x158($s2)
    ctx->pc = 0x3f40bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f40c0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f40c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f40c4: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F40C4u;
    SET_GPR_U32(ctx, 31, 0x3F40CCu);
    ctx->pc = 0x3F40C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F40C4u;
    // 0x3f40c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F40C4u, 0x3F40CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F40CCu;
label_3f40cc:
    // 0x3f40cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f40ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f40d0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f40d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f40d4: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F40D4u;
    SET_GPR_U32(ctx, 31, 0x3F40DCu);
    ctx->pc = 0x3F40D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F40D4u;
    // 0x3f40d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F40D4u, 0x3F40DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F40DCu;
label_3f40dc:
    // 0x3f40dc: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F40DCu;
    SET_GPR_U32(ctx, 31, 0x3F40E4u);
    ctx->pc = 0x3F40E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F40DCu;
    // 0x3f40e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F40DCu, 0x3F40E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F40E4u;
label_3f40e4:
    // 0x3f40e4: 0x1040010e  beqz        $v0, . + 4 + (0x10E << 2)
    ctx->pc = 0x3F40E4u;
    {
        const bool branch_taken_0x3f40e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F40E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F40E4u;
        // 0x3f40e8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f40e4) {
            ctx->pc = 0x3F4520u;
            goto label_3f4520;
        }
    }
    ctx->pc = 0x3F40ECu;
    // 0x3f40ec: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f40ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x3f40f0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f40f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f40f4: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x3F40F4u;
    {
        const bool branch_taken_0x3f40f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F40F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F40F4u;
        // 0x3f40f8: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f40f4) {
            ctx->pc = 0x3F425Cu;
            goto label_3f425c;
        }
    }
    ctx->pc = 0x3F40FCu;
    // 0x3f40fc: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f40fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f4100: 0x1440005f  bnez        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x3F4100u;
    {
        const bool branch_taken_0x3f4100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F4104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4100u;
        // 0x3f4104: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4100) {
            ctx->pc = 0x3F4280u;
            goto label_3f4280;
        }
    }
    ctx->pc = 0x3F4108u;
    // 0x3f4108: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x3F4108u;
    {
        const bool branch_taken_0x3f4108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F410Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4108u;
        // 0x3f410c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4108) {
            ctx->pc = 0x3F4298u;
            goto label_3f4298;
        }
    }
    ctx->pc = 0x3F4110u;
label_3f4110:
    // 0x3f4110: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x3f4110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3f4114: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F4114u;
    {
        const bool branch_taken_0x3f4114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4114u;
        // 0x3f4118: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4114) {
            ctx->pc = 0x3F4130u;
            goto label_3f4130;
        }
    }
    ctx->pc = 0x3F411Cu;
    // 0x3f411c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f411cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4120: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F4120u;
    SET_GPR_U32(ctx, 31, 0x3F4128u);
    ctx->pc = 0x3F4124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4120u;
    // 0x3f4124: 0x24a5ef00  addiu       $a1, $a1, -0x1100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F4120u, 0x3F4128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4128u;
label_3f4128:
    // 0x3f4128: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3F4128u;
    {
        const bool branch_taken_0x3f4128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4128u;
        // 0x3f412c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4128) {
            ctx->pc = 0x3F41B0u;
            goto label_3f41b0;
        }
    }
    ctx->pc = 0x3F4130u;
label_3f4130:
    // 0x3f4130: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3F4130u;
    {
        const bool branch_taken_0x3f4130 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4130u;
        // 0x3f4134: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4130) {
            ctx->pc = 0x3F41B0u;
            goto label_3f41b0;
        }
    }
    ctx->pc = 0x3F4138u;
    // 0x3f4138: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x3f4138u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3f413c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x3f413cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x3f4140: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3F4140u;
    {
        const bool branch_taken_0x3f4140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4140u;
        // 0x3f4144: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4140) {
            ctx->pc = 0x3F41ACu;
            goto label_3f41ac;
        }
    }
    ctx->pc = 0x3F4148u;
    // 0x3f4148: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f4148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f414c: 0x11983c  dsll32      $s3, $s1, 0
    ctx->pc = 0x3f414cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3f4150: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3f4150u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3f4154: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F4154u;
    SET_GPR_U32(ctx, 31, 0x3F415Cu);
    ctx->pc = 0x3F4158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4154u;
    // 0x3f4158: 0x24a5ef18  addiu       $a1, $a1, -0x10E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F4154u, 0x3F415Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F415Cu;
label_3f415c:
    // 0x3f415c: 0x8e54015c  lw          $s4, 0x15C($s2)
    ctx->pc = 0x3f415cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f4160: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f4160u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f4164: 0x1040ffd3  beqz        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x3F4164u;
    {
        const bool branch_taken_0x3f4164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4164) {
            ctx->pc = 0x3F40B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f40b4;
        }
    }
    ctx->pc = 0x3F416Cu;
    // 0x3f416c: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f416cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
label_3f4170:
    // 0x3f4170: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f4170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4174: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x3f4174u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f4178: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x3f4178u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3f417c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f417cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4180: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F4180u;
    SET_GPR_U32(ctx, 31, 0x3F4188u);
    ctx->pc = 0x3F4184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4180u;
    // 0x3f4184: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F4180u, 0x3F4188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4188u;
label_3f4188:
    // 0x3f4188: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f4188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f418c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f418cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4190: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F4190u;
    SET_GPR_U32(ctx, 31, 0x3F4198u);
    ctx->pc = 0x3F4194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4190u;
    // 0x3f4194: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F4190u, 0x3F4198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4198u;
label_3f4198:
    // 0x3f4198: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f4198u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f419c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F419Cu;
    {
        const bool branch_taken_0x3f419c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f419c) {
            ctx->pc = 0x3F41A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F419Cu;
            // 0x3f41a0: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F4170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f4170;
        }
    }
    ctx->pc = 0x3F41A4u;
    // 0x3f41a4: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
    ctx->pc = 0x3F41A4u;
    {
        const bool branch_taken_0x3f41a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f41a4) {
            ctx->pc = 0x3F40B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f40b4;
        }
    }
    ctx->pc = 0x3F41ACu;
label_3f41ac:
    // 0x3f41ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f41acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f41b0:
    // 0x3f41b0: 0x1222003d  beq         $s1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x3F41B0u;
    {
        const bool branch_taken_0x3f41b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F41B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F41B0u;
        // 0x3f41b4: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f41b0) {
            ctx->pc = 0x3F42A8u;
            goto label_3f42a8;
        }
    }
    ctx->pc = 0x3F41B8u;
    // 0x3f41b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f41b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f41bc: 0x11983c  dsll32      $s3, $s1, 0
    ctx->pc = 0x3f41bcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3f41c0: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3f41c0u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3f41c4: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F41C4u;
    SET_GPR_U32(ctx, 31, 0x3F41CCu);
    ctx->pc = 0x3F41C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F41C4u;
    // 0x3f41c8: 0x24a5ef30  addiu       $a1, $a1, -0x10D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F41C4u, 0x3F41CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F41CCu;
label_3f41cc:
    // 0x3f41cc: 0x8e54015c  lw          $s4, 0x15C($s2)
    ctx->pc = 0x3f41ccu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f41d0: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f41d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f41d4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3F41D4u;
    {
        const bool branch_taken_0x3f41d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f41d4) {
            ctx->pc = 0x3F4214u;
            goto label_3f4214;
        }
    }
    ctx->pc = 0x3F41DCu;
    // 0x3f41dc: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f41dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
label_3f41e0:
    // 0x3f41e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f41e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f41e4: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x3f41e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f41e8: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x3f41e8u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3f41ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f41ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f41f0: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F41F0u;
    SET_GPR_U32(ctx, 31, 0x3F41F8u);
    ctx->pc = 0x3F41F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F41F0u;
    // 0x3f41f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F41F0u, 0x3F41F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F41F8u;
label_3f41f8:
    // 0x3f41f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f41f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f41fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f41fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4200: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F4200u;
    SET_GPR_U32(ctx, 31, 0x3F4208u);
    ctx->pc = 0x3F4204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4200u;
    // 0x3f4204: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F4200u, 0x3F4208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4208u;
label_3f4208:
    // 0x3f4208: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f4208u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f420c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F420Cu;
    {
        const bool branch_taken_0x3f420c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f420c) {
            ctx->pc = 0x3F4210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F420Cu;
            // 0x3f4210: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F41E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f41e0;
        }
    }
    ctx->pc = 0x3F4214u;
label_3f4214:
    // 0x3f4214: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F4214u;
    {
        const bool branch_taken_0x3f4214 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4214u;
        // 0x3f4218: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4214) {
            ctx->pc = 0x3F423Cu;
            goto label_3f423c;
        }
    }
    ctx->pc = 0x3F421Cu;
    // 0x3f421c: 0x8e500158  lw          $s0, 0x158($s2)
    ctx->pc = 0x3f421cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f4220: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f4220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4224: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F4224u;
    SET_GPR_U32(ctx, 31, 0x3F422Cu);
    ctx->pc = 0x3F4228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4224u;
    // 0x3f4228: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F4224u, 0x3F422Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F422Cu;
label_3f422c:
    // 0x3f422c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f422cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4230: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f4230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4234: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F4234u;
    SET_GPR_U32(ctx, 31, 0x3F423Cu);
    ctx->pc = 0x3F4238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4234u;
    // 0x3f4238: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F4234u, 0x3F423Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F423Cu;
label_3f423c:
    // 0x3f423c: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F423Cu;
    SET_GPR_U32(ctx, 31, 0x3F4244u);
    ctx->pc = 0x3F4240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F423Cu;
    // 0x3f4240: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F423Cu, 0x3F4244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4244u;
label_3f4244:
    // 0x3f4244: 0x104000b6  beqz        $v0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x3F4244u;
    {
        const bool branch_taken_0x3f4244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4244u;
        // 0x3f4248: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4244) {
            ctx->pc = 0x3F4520u;
            goto label_3f4520;
        }
    }
    ctx->pc = 0x3F424Cu;
    // 0x3f424c: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f424cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x3f4250: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f4250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f4254: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F4254u;
    {
        const bool branch_taken_0x3f4254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4254u;
        // 0x3f4258: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4254) {
            ctx->pc = 0x3F4270u;
            goto label_3f4270;
        }
    }
    ctx->pc = 0x3F425Cu;
label_3f425c:
    // 0x3f425c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3f425cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3f4260: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F4260u;
    {
        const bool branch_taken_0x3f4260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4260u;
        // 0x3f4264: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4260) {
            ctx->pc = 0x3F427Cu;
            goto label_3f427c;
        }
    }
    ctx->pc = 0x3F4268u;
    // 0x3f4268: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3F4268u;
    {
        const bool branch_taken_0x3f4268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F426Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4268u;
        // 0x3f426c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4268) {
            ctx->pc = 0x3F4298u;
            goto label_3f4298;
        }
    }
    ctx->pc = 0x3F4270u;
label_3f4270:
    // 0x3f4270: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f4270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f4274: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F4274u;
    {
        const bool branch_taken_0x3f4274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4274u;
        // 0x3f4278: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4274) {
            ctx->pc = 0x3F4294u;
            goto label_3f4294;
        }
    }
    ctx->pc = 0x3F427Cu;
label_3f427c:
    // 0x3f427c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f427cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_3f4280:
    // 0x3f4280: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f4280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4284: 0xc0f865c  jal         func_3E1970
    ctx->pc = 0x3F4284u;
    SET_GPR_U32(ctx, 31, 0x3F428Cu);
    ctx->pc = 0x3F4288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4284u;
    // 0x3f4288: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1970u, 0x3F4284u, 0x3F428Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F428Cu;
label_3f428c:
    // 0x3f428c: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x3F428Cu;
    {
        const bool branch_taken_0x3f428c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F428Cu;
        // 0x3f4290: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f428c) {
            ctx->pc = 0x3F4520u;
            goto label_3f4520;
        }
    }
    ctx->pc = 0x3F4294u;
label_3f4294:
    // 0x3f4294: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f4294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f4298:
    // 0x3f4298: 0xc0f8704  jal         func_3E1C10
    ctx->pc = 0x3F4298u;
    SET_GPR_U32(ctx, 31, 0x3F42A0u);
    ctx->pc = 0x3F429Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4298u;
    // 0x3f429c: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1C10u, 0x3F4298u, 0x3F42A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F42A0u;
label_3f42a0:
    // 0x3f42a0: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x3F42A0u;
    {
        const bool branch_taken_0x3f42a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F42A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F42A0u;
        // 0x3f42a4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f42a0) {
            ctx->pc = 0x3F4520u;
            goto label_3f4520;
        }
    }
    ctx->pc = 0x3F42A8u;
label_3f42a8:
    // 0x3f42a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3f42a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f42ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f42acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f42b0: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F42B0u;
    SET_GPR_U32(ctx, 31, 0x3F42B8u);
    ctx->pc = 0x3F42B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F42B0u;
    // 0x3f42b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F42B0u, 0x3F42B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F42B8u;
label_3f42b8:
    // 0x3f42b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f42b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f42bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3f42bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f42c0: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F42C0u;
    SET_GPR_U32(ctx, 31, 0x3F42C8u);
    ctx->pc = 0x3F42C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F42C0u;
    // 0x3f42c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F42C0u, 0x3F42C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F42C8u;
label_3f42c8:
    // 0x3f42c8: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F42C8u;
    SET_GPR_U32(ctx, 31, 0x3F42D0u);
    ctx->pc = 0x3F42CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F42C8u;
    // 0x3f42cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F42C8u, 0x3F42D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F42D0u;
label_3f42d0:
    // 0x3f42d0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3F42D0u;
    {
        const bool branch_taken_0x3f42d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F42D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F42D0u;
        // 0x3f42d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f42d0) {
            ctx->pc = 0x3F4334u;
            goto label_3f4334;
        }
    }
    ctx->pc = 0x3F42D8u;
    // 0x3f42d8: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f42d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x3f42dc: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f42dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f42e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F42E0u;
    {
        const bool branch_taken_0x3f42e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F42E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F42E0u;
        // 0x3f42e4: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f42e0) {
            ctx->pc = 0x3F4300u;
            goto label_3f4300;
        }
    }
    ctx->pc = 0x3F42E8u;
    // 0x3f42e8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3f42e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3f42ec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F42ECu;
    {
        const bool branch_taken_0x3f42ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F42F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F42ECu;
        // 0x3f42f0: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f42ec) {
            ctx->pc = 0x3F430Cu;
            goto label_3f430c;
        }
    }
    ctx->pc = 0x3F42F4u;
    // 0x3f42f4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3F42F4u;
    {
        const bool branch_taken_0x3f42f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F42F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F42F4u;
        // 0x3f42f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f42f4) {
            ctx->pc = 0x3F4328u;
            goto label_3f4328;
        }
    }
    ctx->pc = 0x3F42FCu;
    // 0x3f42fc: 0x0  nop
    ctx->pc = 0x3f42fcu;
    // NOP
label_3f4300:
    // 0x3f4300: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f4300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f4304: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F4304u;
    {
        const bool branch_taken_0x3f4304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4304u;
        // 0x3f4308: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4304) {
            ctx->pc = 0x3F4324u;
            goto label_3f4324;
        }
    }
    ctx->pc = 0x3F430Cu;
label_3f430c:
    // 0x3f430c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f430cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f4310: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f4310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4314: 0xc0f865c  jal         func_3E1970
    ctx->pc = 0x3F4314u;
    SET_GPR_U32(ctx, 31, 0x3F431Cu);
    ctx->pc = 0x3F4318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4314u;
    // 0x3f4318: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1970u, 0x3F4314u, 0x3F431Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F431Cu;
label_3f431c:
    // 0x3f431c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3F431Cu;
    {
        const bool branch_taken_0x3f431c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F431Cu;
        // 0x3f4320: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f431c) {
            ctx->pc = 0x3F4334u;
            goto label_3f4334;
        }
    }
    ctx->pc = 0x3F4324u;
label_3f4324:
    // 0x3f4324: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f4324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f4328:
    // 0x3f4328: 0xc0f8704  jal         func_3E1C10
    ctx->pc = 0x3F4328u;
    SET_GPR_U32(ctx, 31, 0x3F4330u);
    ctx->pc = 0x3F432Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4328u;
    // 0x3f432c: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1C10u, 0x3F4328u, 0x3F4330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4330u;
label_3f4330:
    // 0x3f4330: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f4330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f4334:
    // 0x3f4334: 0x5440007a  bnel        $v0, $zero, . + 4 + (0x7A << 2)
    ctx->pc = 0x3F4334u;
    {
        const bool branch_taken_0x3f4334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f4334) {
            ctx->pc = 0x3F4338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F4334u;
            // 0x3f4338: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F4520u;
            goto label_3f4520;
        }
    }
    ctx->pc = 0x3F433Cu;
    // 0x3f433c: 0x93b10000  lbu         $s1, 0x0($sp)
    ctx->pc = 0x3f433cu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f4340: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x3f4340u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3f4344: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F4344u;
    {
        const bool branch_taken_0x3f4344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f4344) {
            ctx->pc = 0x3F4348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F4344u;
            // 0x3f4348: 0xde020010  ld          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F4364u;
            goto label_3f4364;
        }
    }
    ctx->pc = 0x3F434Cu;
    // 0x3f434c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f434cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f4350: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f4350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4354: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F4354u;
    SET_GPR_U32(ctx, 31, 0x3F435Cu);
    ctx->pc = 0x3F4358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4354u;
    // 0x3f4358: 0x24a5ef50  addiu       $a1, $a1, -0x10B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F4354u, 0x3F435Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F435Cu;
label_3f435c:
    // 0x3f435c: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x3F435Cu;
    {
        const bool branch_taken_0x3f435c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F435Cu;
        // 0x3f4360: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f435c) {
            ctx->pc = 0x3F4520u;
            goto label_3f4520;
        }
    }
    ctx->pc = 0x3F4364u;
label_3f4364:
    // 0x3f4364: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3f4364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3f4368: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3f4368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3f436c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3f436cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3f4370: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3F4370u;
    {
        const bool branch_taken_0x3f4370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4370) {
            ctx->pc = 0x3F4374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F4370u;
            // 0x3f4374: 0xde020010  ld          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F43B0u;
            goto label_3f43b0;
        }
    }
    ctx->pc = 0x3F4378u;
    // 0x3f4378: 0xde020148  ld          $v0, 0x148($s0)
    ctx->pc = 0x3f4378u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x3f437c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3f437cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3f4380: 0x34635038  ori         $v1, $v1, 0x5038
    ctx->pc = 0x3f4380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20536);
    // 0x3f4384: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3f4384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3f4388: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3f4388u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3f438c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f438cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3f4390: 0x2c4203e9  sltiu       $v0, $v0, 0x3E9
    ctx->pc = 0x3f4390u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1001) ? 1 : 0);
    // 0x3f4394: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F4394u;
    {
        const bool branch_taken_0x3f4394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f4394) {
            ctx->pc = 0x3F4398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F4394u;
            // 0x3f4398: 0xde020010  ld          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F43B0u;
            goto label_3f43b0;
        }
    }
    ctx->pc = 0x3F439Cu;
    // 0x3f439c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f439cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f43a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f43a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f43a4: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F43A4u;
    SET_GPR_U32(ctx, 31, 0x3F43ACu);
    ctx->pc = 0x3F43A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F43A4u;
    // 0x3f43a8: 0x24a5ecd0  addiu       $a1, $a1, -0x1330 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F43A4u, 0x3F43ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F43ACu;
label_3f43ac:
    // 0x3f43ac: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x3f43acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_3f43b0:
    // 0x3f43b0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3f43b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3f43b4: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x3F43B4u;
    {
        const bool branch_taken_0x3f43b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F43B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F43B4u;
        // 0x3f43b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f43b4) {
            ctx->pc = 0x3F4510u;
            goto label_3f4510;
        }
    }
    ctx->pc = 0x3F43BCu;
    // 0x3f43bc: 0xde020150  ld          $v0, 0x150($s0)
    ctx->pc = 0x3f43bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x3f43c0: 0x644285da  daddiu      $v0, $v0, -0x7A26
    ctx->pc = 0x3f43c0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294936026);
    // 0x3f43c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3f43c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3f43c8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3f43c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3f43cc: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x3F43CCu;
    {
        const bool branch_taken_0x3f43cc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3f43cc) {
            ctx->pc = 0x3F43D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F43CCu;
            // 0x3f43d0: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F43D4u;
            goto label_3f43d4;
        }
    }
    ctx->pc = 0x3F43D4u;
label_3f43d4:
    // 0x3f43d4: 0x284203e9  slti        $v0, $v0, 0x3E9
    ctx->pc = 0x3f43d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1001) ? 1 : 0);
    // 0x3f43d8: 0x5040004a  beql        $v0, $zero, . + 4 + (0x4A << 2)
    ctx->pc = 0x3F43D8u;
    {
        const bool branch_taken_0x3f43d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f43d8) {
            ctx->pc = 0x3F43DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F43D8u;
            // 0x3f43dc: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F4504u;
            goto label_3f4504;
        }
    }
    ctx->pc = 0x3F43E0u;
    // 0x3f43e0: 0xde020158  ld          $v0, 0x158($s0)
    ctx->pc = 0x3f43e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x3f43e4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3f43e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3f43e8: 0x34637f7c  ori         $v1, $v1, 0x7F7C
    ctx->pc = 0x3f43e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32636);
    // 0x3f43ec: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3f43ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3f43f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3f43f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3f43f4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3f43f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3f43f8: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x3F43F8u;
    {
        const bool branch_taken_0x3f43f8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3f43f8) {
            ctx->pc = 0x3F43FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F43F8u;
            // 0x3f43fc: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F4400u;
            goto label_3f4400;
        }
    }
    ctx->pc = 0x3F4400u;
label_3f4400:
    // 0x3f4400: 0x284203e9  slti        $v0, $v0, 0x3E9
    ctx->pc = 0x3f4400u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1001) ? 1 : 0);
    // 0x3f4404: 0x5040003f  beql        $v0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x3F4404u;
    {
        const bool branch_taken_0x3f4404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4404) {
            ctx->pc = 0x3F4408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F4404u;
            // 0x3f4408: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F4504u;
            goto label_3f4504;
        }
    }
    ctx->pc = 0x3F440Cu;
    // 0x3f440c: 0xde020160  ld          $v0, 0x160($s0)
    ctx->pc = 0x3f440cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x3f4410: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3f4410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3f4414: 0x34630600  ori         $v1, $v1, 0x600
    ctx->pc = 0x3f4414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1536);
    // 0x3f4418: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3f4418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3f441c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3f441cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3f4420: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3f4420u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3f4424: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x3F4424u;
    {
        const bool branch_taken_0x3f4424 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3f4424) {
            ctx->pc = 0x3F4428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F4424u;
            // 0x3f4428: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F442Cu;
            goto label_3f442c;
        }
    }
    ctx->pc = 0x3F442Cu;
label_3f442c:
    // 0x3f442c: 0x284203e9  slti        $v0, $v0, 0x3E9
    ctx->pc = 0x3f442cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1001) ? 1 : 0);
    // 0x3f4430: 0x50400034  beql        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x3F4430u;
    {
        const bool branch_taken_0x3f4430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4430) {
            ctx->pc = 0x3F4434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F4430u;
            // 0x3f4434: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F4504u;
            goto label_3f4504;
        }
    }
    ctx->pc = 0x3F4438u;
    // 0x3f4438: 0xde020168  ld          $v0, 0x168($s0)
    ctx->pc = 0x3f4438u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x3f443c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3f443cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3f4440: 0x34637f18  ori         $v1, $v1, 0x7F18
    ctx->pc = 0x3f4440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32536);
    // 0x3f4444: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3f4444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3f4448: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3f4448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3f444c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3f444cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3f4450: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x3F4450u;
    {
        const bool branch_taken_0x3f4450 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3f4450) {
            ctx->pc = 0x3F4454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F4450u;
            // 0x3f4454: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F4458u;
            goto label_3f4458;
        }
    }
    ctx->pc = 0x3F4458u;
label_3f4458:
    // 0x3f4458: 0x284203e9  slti        $v0, $v0, 0x3E9
    ctx->pc = 0x3f4458u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1001) ? 1 : 0);
    // 0x3f445c: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x3F445Cu;
    {
        const bool branch_taken_0x3f445c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f445c) {
            ctx->pc = 0x3F4460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F445Cu;
            // 0x3f4460: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F4504u;
            goto label_3f4504;
        }
    }
    ctx->pc = 0x3F4464u;
    // 0x3f4464: 0xde020170  ld          $v0, 0x170($s0)
    ctx->pc = 0x3f4464u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 368)));
    // 0x3f4468: 0x64428ad0  daddiu      $v0, $v0, -0x7530
    ctx->pc = 0x3f4468u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294937296);
    // 0x3f446c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3f446cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3f4470: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3f4470u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3f4474: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x3F4474u;
    {
        const bool branch_taken_0x3f4474 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3f4474) {
            ctx->pc = 0x3F4478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F4474u;
            // 0x3f4478: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F447Cu;
            goto label_3f447c;
        }
    }
    ctx->pc = 0x3F447Cu;
label_3f447c:
    // 0x3f447c: 0x284203e9  slti        $v0, $v0, 0x3E9
    ctx->pc = 0x3f447cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1001) ? 1 : 0);
    // 0x3f4480: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x3F4480u;
    {
        const bool branch_taken_0x3f4480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4480) {
            ctx->pc = 0x3F4484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F4480u;
            // 0x3f4484: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F4504u;
            goto label_3f4504;
        }
    }
    ctx->pc = 0x3F4488u;
    // 0x3f4488: 0xde020178  ld          $v0, 0x178($s0)
    ctx->pc = 0x3f4488u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x3f448c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3f448cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3f4490: 0x346315a0  ori         $v1, $v1, 0x15A0
    ctx->pc = 0x3f4490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5536);
    // 0x3f4494: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3f4494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3f4498: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3f4498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3f449c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3f449cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3f44a0: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x3F44A0u;
    {
        const bool branch_taken_0x3f44a0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3f44a0) {
            ctx->pc = 0x3F44A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F44A0u;
            // 0x3f44a4: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F44A8u;
            goto label_3f44a8;
        }
    }
    ctx->pc = 0x3F44A8u;
label_3f44a8:
    // 0x3f44a8: 0x284203e9  slti        $v0, $v0, 0x3E9
    ctx->pc = 0x3f44a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1001) ? 1 : 0);
    // 0x3f44ac: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x3F44ACu;
    {
        const bool branch_taken_0x3f44ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f44ac) {
            ctx->pc = 0x3F44B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F44ACu;
            // 0x3f44b0: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F4504u;
            goto label_3f4504;
        }
    }
    ctx->pc = 0x3F44B4u;
    // 0x3f44b4: 0xde020180  ld          $v0, 0x180($s0)
    ctx->pc = 0x3f44b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x3f44b8: 0x6442c568  daddiu      $v0, $v0, -0x3A98
    ctx->pc = 0x3f44b8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294952296);
    // 0x3f44bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3f44bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3f44c0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3f44c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3f44c4: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x3F44C4u;
    {
        const bool branch_taken_0x3f44c4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3f44c4) {
            ctx->pc = 0x3F44C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F44C4u;
            // 0x3f44c8: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F44CCu;
            goto label_3f44cc;
        }
    }
    ctx->pc = 0x3F44CCu;
label_3f44cc:
    // 0x3f44cc: 0x284203e9  slti        $v0, $v0, 0x3E9
    ctx->pc = 0x3f44ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1001) ? 1 : 0);
    // 0x3f44d0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3F44D0u;
    {
        const bool branch_taken_0x3f44d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f44d0) {
            ctx->pc = 0x3F44D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F44D0u;
            // 0x3f44d4: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F4504u;
            goto label_3f4504;
        }
    }
    ctx->pc = 0x3F44D8u;
    // 0x3f44d8: 0xde020188  ld          $v0, 0x188($s0)
    ctx->pc = 0x3f44d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 392)));
    // 0x3f44dc: 0x6442e890  daddiu      $v0, $v0, -0x1770
    ctx->pc = 0x3f44dcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294961296);
    // 0x3f44e0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3f44e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3f44e4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3f44e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3f44e8: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x3F44E8u;
    {
        const bool branch_taken_0x3f44e8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3f44e8) {
            ctx->pc = 0x3F44ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F44E8u;
            // 0x3f44ec: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F44F0u;
            goto label_3f44f0;
        }
    }
    ctx->pc = 0x3F44F0u;
label_3f44f0:
    // 0x3f44f0: 0x284203e9  slti        $v0, $v0, 0x3E9
    ctx->pc = 0x3f44f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1001) ? 1 : 0);
    // 0x3f44f4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F44F4u;
    {
        const bool branch_taken_0x3f44f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f44f4) {
            ctx->pc = 0x3F44F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F44F4u;
            // 0x3f44f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F4514u;
            goto label_3f4514;
        }
    }
    ctx->pc = 0x3F44FCu;
    // 0x3f44fc: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f44fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f4500: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f4500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f4504:
    // 0x3f4504: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F4504u;
    SET_GPR_U32(ctx, 31, 0x3F450Cu);
    ctx->pc = 0x3F4508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4504u;
    // 0x3f4508: 0x24a5ee90  addiu       $a1, $a1, -0x1170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F4504u, 0x3F450Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F450Cu;
label_3f450c:
    // 0x3f450c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f450cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f4510:
    // 0x3f4510: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f4510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f4514:
    // 0x3f4514: 0xc0fe964  jal         func_3FA590
    ctx->pc = 0x3F4514u;
    SET_GPR_U32(ctx, 31, 0x3F451Cu);
    ctx->pc = 0x3F4518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4514u;
    // 0x3f4518: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FA590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FA590u, 0x3F4514u, 0x3F451Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F451Cu;
label_3f451c:
    // 0x3f451c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3f451cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3f4520:
    // 0x3f4520: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3f4520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3f4524: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3f4524u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f4528: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3f4528u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f452c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3f452cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f4530: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f4530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f4534: 0x3e00008  jr          $ra
    ctx->pc = 0x3F4534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F4538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4534u;
        // 0x3f4538: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F4534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F453Cu;
    // 0x3f453c: 0x0  nop
    ctx->pc = 0x3f453cu;
    // NOP
    ctx->pc = 0x3f4540u;
}
