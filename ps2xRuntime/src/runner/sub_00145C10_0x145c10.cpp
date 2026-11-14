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

// Function: sub_00145C10
// Address: 0x145c10 - 0x145ce0
void sub_00145C10_0x145c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145C10_0x145c10");
#endif

    switch (ctx->pc) {
        case 0x145c2cu: goto label_145c2c;
        case 0x145c38u: goto label_145c38;
        case 0x145c44u: goto label_145c44;
        case 0x145c54u: goto label_145c54;
        case 0x145c60u: goto label_145c60;
        case 0x145c70u: goto label_145c70;
        case 0x145ca4u: goto label_145ca4;
        case 0x145cb4u: goto label_145cb4;
        default: break;
    }

    ctx->pc = 0x145c10u;

    // 0x145c10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x145c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x145c14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x145c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x145c18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x145c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x145c1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x145c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x145c20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x145c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x145c24: 0xc090864  jal         func_242190
    ctx->pc = 0x145C24u;
    SET_GPR_U32(ctx, 31, 0x145C2Cu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x145C24u, 0x145C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145C2Cu;
label_145c2c:
    // 0x145c2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x145c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145c30: 0xc090590  jal         func_241640
    ctx->pc = 0x145C30u;
    SET_GPR_U32(ctx, 31, 0x145C38u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x145C30u, 0x145C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145C38u;
label_145c38:
    // 0x145c38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x145c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145c3c: 0xc091574  jal         func_2455D0
    ctx->pc = 0x145C3Cu;
    SET_GPR_U32(ctx, 31, 0x145C44u);
    ctx->pc = 0x2455D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455D0u, 0x145C3Cu, 0x145C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145C44u;
label_145c44:
    // 0x145c44: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x145c44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145c48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x145c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145c4c: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x145C4Cu;
    SET_GPR_U32(ctx, 31, 0x145C54u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x145C4Cu, 0x145C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145C54u;
label_145c54:
    // 0x145c54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x145c54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145c58: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x145C58u;
    {
        const bool branch_taken_0x145c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145c58) {
            ctx->pc = 0x145CA8u;
            goto label_145ca8;
        }
    }
    ctx->pc = 0x145C60u;
label_145c60:
    // 0x145c60: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x145c60u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x145c64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x145c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145c68: 0xc085530  jal         func_2154C0
    ctx->pc = 0x145C68u;
    SET_GPR_U32(ctx, 31, 0x145C70u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x145C68u, 0x145C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145C70u;
label_145c70:
    // 0x145c70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x145c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x145c74: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x145C74u;
    {
        const bool branch_taken_0x145c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x145c74) {
            ctx->pc = 0x145C90u;
            goto label_145c90;
        }
    }
    ctx->pc = 0x145C7Cu;
    // 0x145c7c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x145c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x145c80: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x145C80u;
    {
        const bool branch_taken_0x145c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x145c80) {
            ctx->pc = 0x145C90u;
            goto label_145c90;
        }
    }
    ctx->pc = 0x145C88u;
    // 0x145c88: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x145C88u;
    {
        const bool branch_taken_0x145c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145c88) {
            ctx->pc = 0x145CA4u;
            goto label_145ca4;
        }
    }
    ctx->pc = 0x145C90u;
label_145c90:
    // 0x145c90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x145c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145c94: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x145c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x145c98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x145c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145c9c: 0xc0913a0  jal         func_244E80
    ctx->pc = 0x145C9Cu;
    SET_GPR_U32(ctx, 31, 0x145CA4u);
    ctx->pc = 0x244E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E80u, 0x145C9Cu, 0x145CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145CA4u;
label_145ca4:
    // 0x145ca4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x145ca4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_145ca8:
    // 0x145ca8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x145ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145cac: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x145CACu;
    SET_GPR_U32(ctx, 31, 0x145CB4u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x145CACu, 0x145CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145CB4u;
label_145cb4:
    // 0x145cb4: 0x1602ffea  bne         $s0, $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x145CB4u;
    {
        const bool branch_taken_0x145cb4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x145cb4) {
            ctx->pc = 0x145C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_145c60;
        }
    }
    ctx->pc = 0x145CBCu;
    // 0x145cbc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x145cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x145cc0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x145cc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145cc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x145cc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145cc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x145cc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145ccc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x145cccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x145cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x145CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145CD8u;
    // 0x145cd8: 0x0  nop
    ctx->pc = 0x145cd8u;
    // NOP
    // 0x145cdc: 0x0  nop
    ctx->pc = 0x145cdcu;
    // NOP
    ctx->pc = 0x145ce0u;
}
