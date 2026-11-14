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

// Function: sub_003B3FA0
// Address: 0x3b3fa0 - 0x3b40e0
void sub_003B3FA0_0x3b3fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B3FA0_0x3b3fa0");
#endif

    switch (ctx->pc) {
        case 0x3b3fa0u: goto label_3b3fa0;
        case 0x3b3fa4u: goto label_3b3fa4;
        case 0x3b3fa8u: goto label_3b3fa8;
        case 0x3b3facu: goto label_3b3fac;
        case 0x3b3fb0u: goto label_3b3fb0;
        case 0x3b3fb4u: goto label_3b3fb4;
        case 0x3b3fb8u: goto label_3b3fb8;
        case 0x3b3fbcu: goto label_3b3fbc;
        case 0x3b3fc0u: goto label_3b3fc0;
        case 0x3b3fc4u: goto label_3b3fc4;
        case 0x3b3fc8u: goto label_3b3fc8;
        case 0x3b3fccu: goto label_3b3fcc;
        case 0x3b3fd0u: goto label_3b3fd0;
        case 0x3b3fd4u: goto label_3b3fd4;
        case 0x3b3fd8u: goto label_3b3fd8;
        case 0x3b3fdcu: goto label_3b3fdc;
        case 0x3b3fe0u: goto label_3b3fe0;
        case 0x3b3fe4u: goto label_3b3fe4;
        case 0x3b3fe8u: goto label_3b3fe8;
        case 0x3b3fecu: goto label_3b3fec;
        case 0x3b3ff0u: goto label_3b3ff0;
        case 0x3b3ff4u: goto label_3b3ff4;
        case 0x3b3ff8u: goto label_3b3ff8;
        case 0x3b3ffcu: goto label_3b3ffc;
        case 0x3b4000u: goto label_3b4000;
        case 0x3b4004u: goto label_3b4004;
        case 0x3b4008u: goto label_3b4008;
        case 0x3b400cu: goto label_3b400c;
        case 0x3b4010u: goto label_3b4010;
        case 0x3b4014u: goto label_3b4014;
        case 0x3b4018u: goto label_3b4018;
        case 0x3b401cu: goto label_3b401c;
        case 0x3b4020u: goto label_3b4020;
        case 0x3b4024u: goto label_3b4024;
        case 0x3b4028u: goto label_3b4028;
        case 0x3b402cu: goto label_3b402c;
        case 0x3b4030u: goto label_3b4030;
        case 0x3b4034u: goto label_3b4034;
        case 0x3b4038u: goto label_3b4038;
        case 0x3b403cu: goto label_3b403c;
        case 0x3b4040u: goto label_3b4040;
        case 0x3b4044u: goto label_3b4044;
        case 0x3b4048u: goto label_3b4048;
        case 0x3b404cu: goto label_3b404c;
        case 0x3b4050u: goto label_3b4050;
        case 0x3b4054u: goto label_3b4054;
        case 0x3b4058u: goto label_3b4058;
        case 0x3b405cu: goto label_3b405c;
        case 0x3b4060u: goto label_3b4060;
        case 0x3b4064u: goto label_3b4064;
        case 0x3b4068u: goto label_3b4068;
        case 0x3b406cu: goto label_3b406c;
        case 0x3b4070u: goto label_3b4070;
        case 0x3b4074u: goto label_3b4074;
        case 0x3b4078u: goto label_3b4078;
        case 0x3b407cu: goto label_3b407c;
        case 0x3b4080u: goto label_3b4080;
        case 0x3b4084u: goto label_3b4084;
        case 0x3b4088u: goto label_3b4088;
        case 0x3b408cu: goto label_3b408c;
        case 0x3b4090u: goto label_3b4090;
        case 0x3b4094u: goto label_3b4094;
        case 0x3b4098u: goto label_3b4098;
        case 0x3b409cu: goto label_3b409c;
        case 0x3b40a0u: goto label_3b40a0;
        case 0x3b40a4u: goto label_3b40a4;
        case 0x3b40a8u: goto label_3b40a8;
        case 0x3b40acu: goto label_3b40ac;
        case 0x3b40b0u: goto label_3b40b0;
        case 0x3b40b4u: goto label_3b40b4;
        case 0x3b40b8u: goto label_3b40b8;
        case 0x3b40bcu: goto label_3b40bc;
        case 0x3b40c0u: goto label_3b40c0;
        case 0x3b40c4u: goto label_3b40c4;
        case 0x3b40c8u: goto label_3b40c8;
        case 0x3b40ccu: goto label_3b40cc;
        case 0x3b40d0u: goto label_3b40d0;
        case 0x3b40d4u: goto label_3b40d4;
        case 0x3b40d8u: goto label_3b40d8;
        case 0x3b40dcu: goto label_3b40dc;
        default: break;
    }

    ctx->pc = 0x3b3fa0u;

label_3b3fa0:
    // 0x3b3fa0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3b3fa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b3fa4:
    // 0x3b3fa4: 0x3e00008  jr          $ra
label_3b3fa8:
    if (ctx->pc == 0x3B3FA8u) {
        ctx->pc = 0x3B3FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3FA4u;
        // 0x3b3fa8: 0xe44c00bc  swc1        $f12, 0xBC($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3FACu;
        goto label_3b3fac;
    }
    ctx->pc = 0x3B3FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B3FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3FA4u;
        // 0x3b3fa8: 0xe44c00bc  swc1        $f12, 0xBC($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B3FACu;
label_3b3fac:
    // 0x3b3fac: 0x0  nop
    ctx->pc = 0x3b3facu;
    // NOP
label_3b3fb0:
    // 0x3b3fb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b3fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3b3fb4:
    // 0x3b3fb4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3b3fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3b3fb8:
    // 0x3b3fb8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3b3fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3b3fbc:
    // 0x3b3fbc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3b3fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3b3fc0:
    // 0x3b3fc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b3fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3b3fc4:
    // 0x3b3fc4: 0xc0ed294  jal         func_3B4A50
label_3b3fc8:
    if (ctx->pc == 0x3B3FC8u) {
        ctx->pc = 0x3B3FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3FC4u;
        // 0x3b3fc8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3FCCu;
        goto label_3b3fcc;
    }
    ctx->pc = 0x3B3FC4u;
    SET_GPR_U32(ctx, 31, 0x3B3FCCu);
    ctx->pc = 0x3B3FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3FC4u;
    // 0x3b3fc8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4A50u, 0x3B3FC4u, 0x3B3FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3FCCu;
label_3b3fcc:
    // 0x3b3fcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b3fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b3fd0:
    // 0x3b3fd0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3b3fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3b3fd4:
    // 0x3b3fd4: 0xc0ed13c  jal         func_3B44F0
label_3b3fd8:
    if (ctx->pc == 0x3B3FD8u) {
        ctx->pc = 0x3B3FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3FD4u;
        // 0x3b3fd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3FDCu;
        goto label_3b3fdc;
    }
    ctx->pc = 0x3B3FD4u;
    SET_GPR_U32(ctx, 31, 0x3B3FDCu);
    ctx->pc = 0x3B3FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3FD4u;
    // 0x3b3fd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B44F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B44F0u, 0x3B3FD4u, 0x3B3FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3FDCu;
label_3b3fdc:
    // 0x3b3fdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b3fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b3fe0:
    // 0x3b3fe0: 0xc0ed340  jal         func_3B4D00
label_3b3fe4:
    if (ctx->pc == 0x3B3FE4u) {
        ctx->pc = 0x3B3FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3FE0u;
        // 0x3b3fe4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3FE8u;
        goto label_3b3fe8;
    }
    ctx->pc = 0x3B3FE0u;
    SET_GPR_U32(ctx, 31, 0x3B3FE8u);
    ctx->pc = 0x3B3FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3FE0u;
    // 0x3b3fe4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4D00u, 0x3B3FE0u, 0x3B3FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3FE8u;
label_3b3fe8:
    // 0x3b3fe8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3b3fec:
    if (ctx->pc == 0x3B3FECu) {
        ctx->pc = 0x3B3FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3FE8u;
        // 0x3b3fec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3FF0u;
        goto label_3b3ff0;
    }
    ctx->pc = 0x3B3FE8u;
    {
        const bool branch_taken_0x3b3fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B3FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3FE8u;
        // 0x3b3fec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3fe8) {
            ctx->pc = 0x3B3FF8u;
            goto label_3b3ff8;
        }
    }
    ctx->pc = 0x3B3FF0u;
label_3b3ff0:
    // 0x3b3ff0: 0x1000001b  b           . + 4 + (0x1B << 2)
label_3b3ff4:
    if (ctx->pc == 0x3B3FF4u) {
        ctx->pc = 0x3B3FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3FF0u;
        // 0x3b3ff4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3FF8u;
        goto label_3b3ff8;
    }
    ctx->pc = 0x3B3FF0u;
    {
        const bool branch_taken_0x3b3ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3FF0u;
        // 0x3b3ff4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3ff0) {
            ctx->pc = 0x3B4060u;
            goto label_3b4060;
        }
    }
    ctx->pc = 0x3B3FF8u;
label_3b3ff8:
    // 0x3b3ff8: 0xc0ece62  jal         func_3B3988
label_3b3ffc:
    if (ctx->pc == 0x3B3FFCu) {
        ctx->pc = 0x3B3FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3FF8u;
        // 0x3b3ffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4000u;
        goto label_3b4000;
    }
    ctx->pc = 0x3B3FF8u;
    SET_GPR_U32(ctx, 31, 0x3B4000u);
    ctx->pc = 0x3B3FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3FF8u;
    // 0x3b3ffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3988u, 0x3B3FF8u, 0x3B4000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4000u;
label_3b4000:
    // 0x3b4000: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3b4000u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b4004:
    // 0x3b4004: 0x16400016  bnez        $s2, . + 4 + (0x16 << 2)
label_3b4008:
    if (ctx->pc == 0x3B4008u) {
        ctx->pc = 0x3B4008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4004u;
        // 0x3b4008: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B400Cu;
        goto label_3b400c;
    }
    ctx->pc = 0x3B4004u;
    {
        const bool branch_taken_0x3b4004 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B4008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4004u;
        // 0x3b4008: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4004) {
            ctx->pc = 0x3B4060u;
            goto label_3b4060;
        }
    }
    ctx->pc = 0x3B400Cu;
label_3b400c:
    // 0x3b400c: 0x52000015  beql        $s0, $zero, . + 4 + (0x15 << 2)
label_3b4010:
    if (ctx->pc == 0x3B4010u) {
        ctx->pc = 0x3B4010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B400Cu;
        // 0x3b4010: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4014u;
        goto label_3b4014;
    }
    ctx->pc = 0x3B400Cu;
    {
        const bool branch_taken_0x3b400c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b400c) {
            ctx->pc = 0x3B4010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B400Cu;
            // 0x3b4010: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B4064u;
            goto label_3b4064;
        }
    }
    ctx->pc = 0x3B4014u;
label_3b4014:
    // 0x3b4014: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x3b4014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_3b4018:
    // 0x3b4018: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3b401c:
    if (ctx->pc == 0x3B401Cu) {
        ctx->pc = 0x3B401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4018u;
        // 0x3b401c: 0x3c110062  lui         $s1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4020u;
        goto label_3b4020;
    }
    ctx->pc = 0x3B4018u;
    {
        const bool branch_taken_0x3b4018 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4018u;
        // 0x3b401c: 0x3c110062  lui         $s1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4018) {
            ctx->pc = 0x3B4030u;
            goto label_3b4030;
        }
    }
    ctx->pc = 0x3B4020u;
label_3b4020:
    // 0x3b4020: 0x2622e880  addiu       $v0, $s1, -0x1780
    ctx->pc = 0x3b4020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
label_3b4024:
    // 0x3b4024: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x3b4024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_3b4028:
    // 0x3b4028: 0x60f809  jalr        $v1
label_3b402c:
    if (ctx->pc == 0x3B402Cu) {
        ctx->pc = 0x3B4030u;
        goto label_3b4030;
    }
    ctx->pc = 0x3B4028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B4030u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4028u, 0x3B4030u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B4030u;
label_3b4030:
    // 0x3b4030: 0x8e0400b4  lw          $a0, 0xB4($s0)
    ctx->pc = 0x3b4030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_3b4034:
    // 0x3b4034: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_3b4038:
    if (ctx->pc == 0x3B4038u) {
        ctx->pc = 0x3B4038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4034u;
        // 0x3b4038: 0x2623e880  addiu       $v1, $s1, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B403Cu;
        goto label_3b403c;
    }
    ctx->pc = 0x3B4034u;
    {
        const bool branch_taken_0x3b4034 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4034u;
        // 0x3b4038: 0x2623e880  addiu       $v1, $s1, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4034) {
            ctx->pc = 0x3B4048u;
            goto label_3b4048;
        }
    }
    ctx->pc = 0x3B403Cu;
label_3b403c:
    // 0x3b403c: 0xc0e9e5c  jal         func_3A7970
label_3b4040:
    if (ctx->pc == 0x3B4040u) {
        ctx->pc = 0x3B4044u;
        goto label_3b4044;
    }
    ctx->pc = 0x3B403Cu;
    SET_GPR_U32(ctx, 31, 0x3B4044u);
    ctx->pc = 0x3A7970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7970u, 0x3B403Cu, 0x3B4044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4044u;
label_3b4044:
    // 0x3b4044: 0x2623e880  addiu       $v1, $s1, -0x1780
    ctx->pc = 0x3b4044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
label_3b4048:
    // 0x3b4048: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x3b4048u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_3b404c:
    // 0x3b404c: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x3b404cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_3b4050:
    // 0x3b4050: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b4050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b4054:
    // 0x3b4054: 0x40f809  jalr        $v0
label_3b4058:
    if (ctx->pc == 0x3B4058u) {
        ctx->pc = 0x3B4058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4054u;
        // 0x3b4058: 0x8cc4d3ac  lw          $a0, -0x2C54($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294955948)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B405Cu;
        goto label_3b405c;
    }
    ctx->pc = 0x3B4054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B405Cu);
        ctx->pc = 0x3B4058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4054u;
        // 0x3b4058: 0x8cc4d3ac  lw          $a0, -0x2C54($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294955948)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4054u, 0x3B405Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B405Cu;
label_3b405c:
    // 0x3b405c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3b405cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b4060:
    // 0x3b4060: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3b4060u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b4064:
    // 0x3b4064: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3b4064u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b4068:
    // 0x3b4068: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3b4068u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b406c:
    // 0x3b406c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b406cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b4070:
    // 0x3b4070: 0x3e00008  jr          $ra
label_3b4074:
    if (ctx->pc == 0x3B4074u) {
        ctx->pc = 0x3B4074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4070u;
        // 0x3b4074: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4078u;
        goto label_3b4078;
    }
    ctx->pc = 0x3B4070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4070u;
        // 0x3b4074: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4078u;
label_3b4078:
    // 0x3b4078: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b4078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3b407c:
    // 0x3b407c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3b407cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3b4080:
    // 0x3b4080: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b4080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3b4084:
    // 0x3b4084: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b4084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b4088:
    // 0x3b4088: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b4088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3b408c:
    // 0x3b408c: 0xc0ed038  jal         func_3B40E0
label_3b4090:
    if (ctx->pc == 0x3B4090u) {
        ctx->pc = 0x3B4090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B408Cu;
        // 0x3b4090: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4094u;
        goto label_3b4094;
    }
    ctx->pc = 0x3B408Cu;
    SET_GPR_U32(ctx, 31, 0x3B4094u);
    ctx->pc = 0x3B4090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B408Cu;
    // 0x3b4090: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B40E0u, 0x3B408Cu, 0x3B4094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4094u;
label_3b4094:
    // 0x3b4094: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x3b4094u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
label_3b4098:
    // 0x3b4098: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3b4098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b409c:
    // 0x3b409c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b409cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b40a0:
    // 0x3b40a0: 0x240501a7  addiu       $a1, $zero, 0x1A7
    ctx->pc = 0x3b40a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 423));
label_3b40a4:
    // 0x3b40a4: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x3b40a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
label_3b40a8:
    // 0x3b40a8: 0xc103404  jal         func_40D010
label_3b40ac:
    if (ctx->pc == 0x3B40ACu) {
        ctx->pc = 0x3B40ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B40A8u;
        // 0x3b40ac: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B40B0u;
        goto label_3b40b0;
    }
    ctx->pc = 0x3B40A8u;
    SET_GPR_U32(ctx, 31, 0x3B40B0u);
    ctx->pc = 0x3B40ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B40A8u;
    // 0x3b40ac: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x3B40A8u, 0x3B40B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B40B0u;
label_3b40b0:
    // 0x3b40b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3b40b4:
    if (ctx->pc == 0x3B40B4u) {
        ctx->pc = 0x3B40B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B40B0u;
        // 0x3b40b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B40B8u;
        goto label_3b40b8;
    }
    ctx->pc = 0x3B40B0u;
    {
        const bool branch_taken_0x3b40b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B40B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B40B0u;
        // 0x3b40b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b40b0) {
            ctx->pc = 0x3B40C8u;
            goto label_3b40c8;
        }
    }
    ctx->pc = 0x3B40B8u;
label_3b40b8:
    // 0x3b40b8: 0xc0ecf04  jal         func_3B3C10
label_3b40bc:
    if (ctx->pc == 0x3B40BCu) {
        ctx->pc = 0x3B40BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B40B8u;
        // 0x3b40bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B40C0u;
        goto label_3b40c0;
    }
    ctx->pc = 0x3B40B8u;
    SET_GPR_U32(ctx, 31, 0x3B40C0u);
    ctx->pc = 0x3B40BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B40B8u;
    // 0x3b40bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3C10u, 0x3B40B8u, 0x3B40C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B40C0u;
label_3b40c0:
    // 0x3b40c0: 0x10000002  b           . + 4 + (0x2 << 2)
label_3b40c4:
    if (ctx->pc == 0x3B40C4u) {
        ctx->pc = 0x3B40C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B40C0u;
        // 0x3b40c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B40C8u;
        goto label_3b40c8;
    }
    ctx->pc = 0x3B40C0u;
    {
        const bool branch_taken_0x3b40c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B40C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B40C0u;
        // 0x3b40c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b40c0) {
            ctx->pc = 0x3B40CCu;
            goto label_3b40cc;
        }
    }
    ctx->pc = 0x3B40C8u;
label_3b40c8:
    // 0x3b40c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b40c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b40cc:
    // 0x3b40cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3b40ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b40d0:
    // 0x3b40d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b40d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b40d4:
    // 0x3b40d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b40d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b40d8:
    // 0x3b40d8: 0x3e00008  jr          $ra
label_3b40dc:
    if (ctx->pc == 0x3B40DCu) {
        ctx->pc = 0x3B40DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B40D8u;
        // 0x3b40dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B40E0u;
        goto label_fallthrough_0x3b40d8;
    }
    ctx->pc = 0x3B40D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B40DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B40D8u;
        // 0x3b40dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B40D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b40d8:
    ctx->pc = 0x3B40E0u;
}
