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

// Function: sub_0026EFD0
// Address: 0x26efd0 - 0x26f090
void sub_0026EFD0_0x26efd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026EFD0_0x26efd0");
#endif

    switch (ctx->pc) {
        case 0x26eff4u: goto label_26eff4;
        case 0x26f000u: goto label_26f000;
        case 0x26f010u: goto label_26f010;
        case 0x26f048u: goto label_26f048;
        case 0x26f05cu: goto label_26f05c;
        case 0x26f074u: goto label_26f074;
        default: break;
    }

    ctx->pc = 0x26efd0u;

    // 0x26efd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26efd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26efd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26efd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26efd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26efd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26efdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26efdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26efe0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x26efe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x26efe4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26efe8: 0x244400ac  addiu       $a0, $v0, 0xAC
    ctx->pc = 0x26efe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 172));
    // 0x26efec: 0xc04809c  jal         func_120270
    ctx->pc = 0x26EFECu;
    SET_GPR_U32(ctx, 31, 0x26EFF4u);
    ctx->pc = 0x120270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120270u, 0x26EFECu, 0x26EFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EFF4u;
label_26eff4:
    // 0x26eff4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26eff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eff8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x26EFF8u;
    {
        const bool branch_taken_0x26eff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26eff8) {
            ctx->pc = 0x26F04Cu;
            goto label_26f04c;
        }
    }
    ctx->pc = 0x26F000u;
label_26f000:
    // 0x26f000: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x26f000u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26f004: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26f004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f008: 0xc099938  jal         func_2664E0
    ctx->pc = 0x26F008u;
    SET_GPR_U32(ctx, 31, 0x26F010u);
    ctx->pc = 0x2664E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2664E0u, 0x26F008u, 0x26F010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F010u;
label_26f010:
    // 0x26f010: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x26f010u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x26f014: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x26F014u;
    {
        const bool branch_taken_0x26f014 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f014) {
            ctx->pc = 0x26F048u;
            goto label_26f048;
        }
    }
    ctx->pc = 0x26F01Cu;
    // 0x26f01c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x26f01cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x26f020: 0x24638ae0  addiu       $v1, $v1, -0x7520
    ctx->pc = 0x26f020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937312));
    // 0x26f024: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26f024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26f028: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26f028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26f02c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26f030: 0x400008  jr          $v0
    ctx->pc = 0x26F030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26F038u: goto label_26f038;
            case 0x26F048u: goto label_26f048;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F030u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26F038u;
label_26f038:
    // 0x26f038: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x26f038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26f03c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26f03cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f040: 0xc09b14c  jal         func_26C530
    ctx->pc = 0x26F040u;
    SET_GPR_U32(ctx, 31, 0x26F048u);
    ctx->pc = 0x26C530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C530u, 0x26F040u, 0x26F048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F048u;
label_26f048:
    // 0x26f048: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x26f048u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_26f04c:
    // 0x26f04c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26f04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26f050: 0x244400ac  addiu       $a0, $v0, 0xAC
    ctx->pc = 0x26f050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 172));
    // 0x26f054: 0xc04808c  jal         func_120230
    ctx->pc = 0x26F054u;
    SET_GPR_U32(ctx, 31, 0x26F05Cu);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26F054u, 0x26F05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F05Cu;
label_26f05c:
    // 0x26f05c: 0x1602ffe8  bne         $s0, $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x26F05Cu;
    {
        const bool branch_taken_0x26f05c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x26f05c) {
            ctx->pc = 0x26F000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26f000;
        }
    }
    ctx->pc = 0x26F064u;
    // 0x26f064: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26f064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26f068: 0x244400ac  addiu       $a0, $v0, 0xAC
    ctx->pc = 0x26f068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 172));
    // 0x26f06c: 0xc068454  jal         func_1A1150
    ctx->pc = 0x26F06Cu;
    SET_GPR_U32(ctx, 31, 0x26F074u);
    ctx->pc = 0x1A1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1150u, 0x26F06Cu, 0x26F074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F074u;
label_26f074:
    // 0x26f074: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26f074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26f078: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26f078u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f07c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26f07cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f080: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x26f080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26f084: 0x3e00008  jr          $ra
    ctx->pc = 0x26F084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26F08Cu;
    // 0x26f08c: 0x0  nop
    ctx->pc = 0x26f08cu;
    // NOP
    ctx->pc = 0x26f090u;
}
