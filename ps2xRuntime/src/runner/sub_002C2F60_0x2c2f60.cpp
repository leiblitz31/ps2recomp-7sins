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

// Function: sub_002C2F60
// Address: 0x2c2f60 - 0x2c3090
void sub_002C2F60_0x2c2f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2F60_0x2c2f60");
#endif

    switch (ctx->pc) {
        case 0x2c2f80u: goto label_2c2f80;
        case 0x2c2f8cu: goto label_2c2f8c;
        case 0x2c2fb4u: goto label_2c2fb4;
        case 0x2c2fc4u: goto label_2c2fc4;
        case 0x2c2fe8u: goto label_2c2fe8;
        case 0x2c2ff8u: goto label_2c2ff8;
        case 0x2c3004u: goto label_2c3004;
        case 0x2c3018u: goto label_2c3018;
        case 0x2c3030u: goto label_2c3030;
        case 0x2c303cu: goto label_2c303c;
        case 0x2c304cu: goto label_2c304c;
        case 0x2c3060u: goto label_2c3060;
        default: break;
    }

    ctx->pc = 0x2c2f60u;

    // 0x2c2f60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2c2f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2c2f64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c2f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c2f68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c2f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c2f6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c2f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c2f70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c2f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c2f74: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x2c2f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x2c2f78: 0xc08ef50  jal         func_23BD40
    ctx->pc = 0x2C2F78u;
    SET_GPR_U32(ctx, 31, 0x2C2F80u);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x2C2F78u, 0x2C2F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2F80u;
label_2c2f80:
    // 0x2c2f80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c2f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2f84: 0xc0406f0  jal         func_101BC0
    ctx->pc = 0x2C2F84u;
    SET_GPR_U32(ctx, 31, 0x2C2F8Cu);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x2C2F84u, 0x2C2F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2F8Cu;
label_2c2f8c:
    // 0x2c2f8c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C2F8Cu;
    {
        const bool branch_taken_0x2c2f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2f8c) {
            ctx->pc = 0x2C2FF0u;
            goto label_2c2ff0;
        }
    }
    ctx->pc = 0x2C2F94u;
    // 0x2c2f94: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2c2f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2c2f98: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2c2f98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c2f9c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C2F9Cu;
    {
        const bool branch_taken_0x2c2f9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2f9c) {
            ctx->pc = 0x2C2FD8u;
            goto label_2c2fd8;
        }
    }
    ctx->pc = 0x2C2FA4u;
    // 0x2c2fa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c2fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2fa8: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2c2fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2c2fac: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C2FACu;
    SET_GPR_U32(ctx, 31, 0x2C2FB4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C2FACu, 0x2C2FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2FB4u;
label_2c2fb4:
    // 0x2c2fb4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c2fb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2fb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c2fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2fbc: 0xc0ae184  jal         func_2B8610
    ctx->pc = 0x2C2FBCu;
    SET_GPR_U32(ctx, 31, 0x2C2FC4u);
    ctx->pc = 0x2B8610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8610u, 0x2C2FBCu, 0x2C2FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2FC4u;
label_2c2fc4:
    // 0x2c2fc4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2FC4u;
    {
        const bool branch_taken_0x2c2fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2fc4) {
            ctx->pc = 0x2C2FD8u;
            goto label_2c2fd8;
        }
    }
    ctx->pc = 0x2C2FCCu;
    // 0x2c2fcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c2fccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2fd0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2C2FD0u;
    {
        const bool branch_taken_0x2c2fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2fd0) {
            ctx->pc = 0x2C306Cu;
            goto label_2c306c;
        }
    }
    ctx->pc = 0x2C2FD8u;
label_2c2fd8:
    // 0x2c2fd8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2c2fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c2fdc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2c2fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c2fe0: 0xc0b0c24  jal         func_2C3090
    ctx->pc = 0x2C2FE0u;
    SET_GPR_U32(ctx, 31, 0x2C2FE8u);
    ctx->pc = 0x2C3090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3090u, 0x2C2FE0u, 0x2C2FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2FE8u;
label_2c2fe8:
    // 0x2c2fe8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2C2FE8u;
    {
        const bool branch_taken_0x2c2fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2fe8) {
            ctx->pc = 0x2C306Cu;
            goto label_2c306c;
        }
    }
    ctx->pc = 0x2C2FF0u;
label_2c2ff0:
    // 0x2c2ff0: 0xc08ef50  jal         func_23BD40
    ctx->pc = 0x2C2FF0u;
    SET_GPR_U32(ctx, 31, 0x2C2FF8u);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x2C2FF0u, 0x2C2FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2FF8u;
label_2c2ff8:
    // 0x2c2ff8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c2ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2ffc: 0xc0406f0  jal         func_101BC0
    ctx->pc = 0x2C2FFCu;
    SET_GPR_U32(ctx, 31, 0x2C3004u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x2C2FFCu, 0x2C3004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3004u;
label_2c3004:
    // 0x2c3004: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c3004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3008: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C3008u;
    {
        const bool branch_taken_0x2c3008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c3008) {
            ctx->pc = 0x2C3068u;
            goto label_2c3068;
        }
    }
    ctx->pc = 0x2C3010u;
    // 0x2c3010: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2C3010u;
    SET_GPR_U32(ctx, 31, 0x2C3018u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2C3010u, 0x2C3018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3018u;
label_2c3018:
    // 0x2c3018: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x2c3018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2c301c: 0x24022710  addiu       $v0, $zero, 0x2710
    ctx->pc = 0x2c301cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x2c3020: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C3020u;
    {
        const bool branch_taken_0x2c3020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c3020) {
            ctx->pc = 0x2C3068u;
            goto label_2c3068;
        }
    }
    ctx->pc = 0x2C3028u;
    // 0x2c3028: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2C3028u;
    SET_GPR_U32(ctx, 31, 0x2C3030u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2C3028u, 0x2C3030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3030u;
label_2c3030:
    // 0x2c3030: 0x8c520058  lw          $s2, 0x58($v0)
    ctx->pc = 0x2c3030u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2c3034: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2C3034u;
    SET_GPR_U32(ctx, 31, 0x2C303Cu);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2C3034u, 0x2C303Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C303Cu;
label_2c303c:
    // 0x2c303c: 0xac520054  sw          $s2, 0x54($v0)
    ctx->pc = 0x2c303cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 18));
    // 0x2c3040: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x2c3040u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c3044: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2C3044u;
    SET_GPR_U32(ctx, 31, 0x2C304Cu);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2C3044u, 0x2C304Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C304Cu;
label_2c304c:
    // 0x2c304c: 0xac520060  sw          $s2, 0x60($v0)
    ctx->pc = 0x2c304cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 18));
    // 0x2c3050: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2c3050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c3054: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2c3054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c3058: 0xc0b0c24  jal         func_2C3090
    ctx->pc = 0x2C3058u;
    SET_GPR_U32(ctx, 31, 0x2C3060u);
    ctx->pc = 0x2C3090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3090u, 0x2C3058u, 0x2C3060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3060u;
label_2c3060:
    // 0x2c3060: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C3060u;
    {
        const bool branch_taken_0x2c3060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3060) {
            ctx->pc = 0x2C306Cu;
            goto label_2c306c;
        }
    }
    ctx->pc = 0x2C3068u;
label_2c3068:
    // 0x2c3068: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c3068u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c306c:
    // 0x2c306c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c306cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c3070: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c3070u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c3074: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c3074u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c3078: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c3078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c307c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2c307cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2c3080: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3088u;
    // 0x2c3088: 0x0  nop
    ctx->pc = 0x2c3088u;
    // NOP
    // 0x2c308c: 0x0  nop
    ctx->pc = 0x2c308cu;
    // NOP
    ctx->pc = 0x2c3090u;
}
