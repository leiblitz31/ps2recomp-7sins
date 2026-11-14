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

// Function: sub_002C2E80
// Address: 0x2c2e80 - 0x2c2f60
void sub_002C2E80_0x2c2e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2E80_0x2c2e80");
#endif

    switch (ctx->pc) {
        case 0x2c2e9cu: goto label_2c2e9c;
        case 0x2c2ea8u: goto label_2c2ea8;
        case 0x2c2ed0u: goto label_2c2ed0;
        case 0x2c2ee0u: goto label_2c2ee0;
        case 0x2c2f04u: goto label_2c2f04;
        case 0x2c2f14u: goto label_2c2f14;
        case 0x2c2f20u: goto label_2c2f20;
        default: break;
    }

    ctx->pc = 0x2c2e80u;

    // 0x2c2e80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c2e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c2e84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c2e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c2e88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c2e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c2e8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c2e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c2e90: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2c2e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2c2e94: 0xc08ef50  jal         func_23BD40
    ctx->pc = 0x2C2E94u;
    SET_GPR_U32(ctx, 31, 0x2C2E9Cu);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x2C2E94u, 0x2C2E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2E9Cu;
label_2c2e9c:
    // 0x2c2e9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c2e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2ea0: 0xc0406f0  jal         func_101BC0
    ctx->pc = 0x2C2EA0u;
    SET_GPR_U32(ctx, 31, 0x2C2EA8u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x2C2EA0u, 0x2C2EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2EA8u;
label_2c2ea8:
    // 0x2c2ea8: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C2EA8u;
    {
        const bool branch_taken_0x2c2ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2ea8) {
            ctx->pc = 0x2C2F0Cu;
            goto label_2c2f0c;
        }
    }
    ctx->pc = 0x2C2EB0u;
    // 0x2c2eb0: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2c2eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2c2eb4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2c2eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c2eb8: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C2EB8u;
    {
        const bool branch_taken_0x2c2eb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2eb8) {
            ctx->pc = 0x2C2EF4u;
            goto label_2c2ef4;
        }
    }
    ctx->pc = 0x2C2EC0u;
    // 0x2c2ec0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c2ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2ec4: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2c2ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2c2ec8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C2EC8u;
    SET_GPR_U32(ctx, 31, 0x2C2ED0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C2EC8u, 0x2C2ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2ED0u;
label_2c2ed0:
    // 0x2c2ed0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c2ed0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2ed4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c2ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2ed8: 0xc0ae184  jal         func_2B8610
    ctx->pc = 0x2C2ED8u;
    SET_GPR_U32(ctx, 31, 0x2C2EE0u);
    ctx->pc = 0x2B8610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8610u, 0x2C2ED8u, 0x2C2EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2EE0u;
label_2c2ee0:
    // 0x2c2ee0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2EE0u;
    {
        const bool branch_taken_0x2c2ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2ee0) {
            ctx->pc = 0x2C2EF4u;
            goto label_2c2ef4;
        }
    }
    ctx->pc = 0x2C2EE8u;
    // 0x2c2ee8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c2ee8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2eec: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2C2EECu;
    {
        const bool branch_taken_0x2c2eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2eec) {
            ctx->pc = 0x2C2F3Cu;
            goto label_2c2f3c;
        }
    }
    ctx->pc = 0x2C2EF4u;
label_2c2ef4:
    // 0x2c2ef4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2c2ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c2ef8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c2ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2efc: 0xc0b0c24  jal         func_2C3090
    ctx->pc = 0x2C2EFCu;
    SET_GPR_U32(ctx, 31, 0x2C2F04u);
    ctx->pc = 0x2C3090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3090u, 0x2C2EFCu, 0x2C2F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2F04u;
label_2c2f04:
    // 0x2c2f04: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2C2F04u;
    {
        const bool branch_taken_0x2c2f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2f04) {
            ctx->pc = 0x2C2F3Cu;
            goto label_2c2f3c;
        }
    }
    ctx->pc = 0x2C2F0Cu;
label_2c2f0c:
    // 0x2c2f0c: 0xc08ef50  jal         func_23BD40
    ctx->pc = 0x2C2F0Cu;
    SET_GPR_U32(ctx, 31, 0x2C2F14u);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x2C2F0Cu, 0x2C2F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2F14u;
label_2c2f14:
    // 0x2c2f14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c2f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2f18: 0xc0406f0  jal         func_101BC0
    ctx->pc = 0x2C2F18u;
    SET_GPR_U32(ctx, 31, 0x2C2F20u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x2C2F18u, 0x2C2F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2F20u;
label_2c2f20:
    // 0x2c2f20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c2f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2f24: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2F24u;
    {
        const bool branch_taken_0x2c2f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c2f24) {
            ctx->pc = 0x2C2F38u;
            goto label_2c2f38;
        }
    }
    ctx->pc = 0x2C2F2Cu;
    // 0x2c2f2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c2f2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2f30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C2F30u;
    {
        const bool branch_taken_0x2c2f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2f30) {
            ctx->pc = 0x2C2F3Cu;
            goto label_2c2f3c;
        }
    }
    ctx->pc = 0x2C2F38u;
label_2c2f38:
    // 0x2c2f38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c2f38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c2f3c:
    // 0x2c2f3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c2f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c2f40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c2f40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2f44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c2f44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2f48: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2c2f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c2f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2F54u;
    // 0x2c2f54: 0x0  nop
    ctx->pc = 0x2c2f54u;
    // NOP
    // 0x2c2f58: 0x0  nop
    ctx->pc = 0x2c2f58u;
    // NOP
    // 0x2c2f5c: 0x0  nop
    ctx->pc = 0x2c2f5cu;
    // NOP
    ctx->pc = 0x2c2f60u;
}
