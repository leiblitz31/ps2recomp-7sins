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

// Function: sub_00478DF0
// Address: 0x478df0 - 0x478ef0
void sub_00478DF0_0x478df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00478DF0_0x478df0");
#endif

    switch (ctx->pc) {
        case 0x478e1cu: goto label_478e1c;
        case 0x478e38u: goto label_478e38;
        case 0x478e60u: goto label_478e60;
        case 0x478e94u: goto label_478e94;
        case 0x478ebcu: goto label_478ebc;
        default: break;
    }

    ctx->pc = 0x478df0u;

    // 0x478df0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x478df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x478df4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x478df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x478df8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x478df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x478dfc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x478dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x478e00: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x478e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x478e04: 0xa3a70040  sb          $a3, 0x40($sp)
    ctx->pc = 0x478e04u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 7));
    // 0x478e08: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x478e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x478e0c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x478e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x478e10: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x478e10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x478e14: 0xc11e3bc  jal         func_478EF0
    ctx->pc = 0x478E14u;
    SET_GPR_U32(ctx, 31, 0x478E1Cu);
    ctx->pc = 0x478EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x478EF0u, 0x478E14u, 0x478E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478E1Cu;
label_478e1c:
    // 0x478e1c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x478E1Cu;
    {
        const bool branch_taken_0x478e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x478e1c) {
            ctx->pc = 0x478E80u;
            goto label_478e80;
        }
    }
    ctx->pc = 0x478E24u;
    // 0x478e24: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x478e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x478e28: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x478e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x478e2c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x478e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x478e30: 0xc11e3bc  jal         func_478EF0
    ctx->pc = 0x478E30u;
    SET_GPR_U32(ctx, 31, 0x478E38u);
    ctx->pc = 0x478EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x478EF0u, 0x478E30u, 0x478E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478E38u;
label_478e38:
    // 0x478e38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x478E38u;
    {
        const bool branch_taken_0x478e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x478e38) {
            ctx->pc = 0x478E4Cu;
            goto label_478e4c;
        }
    }
    ctx->pc = 0x478E40u;
    // 0x478e40: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x478e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x478e44: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x478E44u;
    {
        const bool branch_taken_0x478e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x478e44) {
            ctx->pc = 0x478ED4u;
            goto label_478ed4;
        }
    }
    ctx->pc = 0x478E4Cu;
label_478e4c:
    // 0x478e4c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x478e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x478e50: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x478e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x478e54: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x478e54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x478e58: 0xc11e3bc  jal         func_478EF0
    ctx->pc = 0x478E58u;
    SET_GPR_U32(ctx, 31, 0x478E60u);
    ctx->pc = 0x478EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x478EF0u, 0x478E58u, 0x478E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478E60u;
label_478e60:
    // 0x478e60: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x478E60u;
    {
        const bool branch_taken_0x478e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x478e60) {
            ctx->pc = 0x478E74u;
            goto label_478e74;
        }
    }
    ctx->pc = 0x478E68u;
    // 0x478e68: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x478e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x478e6c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x478E6Cu;
    {
        const bool branch_taken_0x478e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x478e6c) {
            ctx->pc = 0x478ED4u;
            goto label_478ed4;
        }
    }
    ctx->pc = 0x478E74u;
label_478e74:
    // 0x478e74: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x478e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x478e78: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x478E78u;
    {
        const bool branch_taken_0x478e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x478e78) {
            ctx->pc = 0x478ED4u;
            goto label_478ed4;
        }
    }
    ctx->pc = 0x478E80u;
label_478e80:
    // 0x478e80: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x478e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x478e84: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x478e84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x478e88: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x478e88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x478e8c: 0xc11e3bc  jal         func_478EF0
    ctx->pc = 0x478E8Cu;
    SET_GPR_U32(ctx, 31, 0x478E94u);
    ctx->pc = 0x478EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x478EF0u, 0x478E8Cu, 0x478E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478E94u;
label_478e94:
    // 0x478e94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x478E94u;
    {
        const bool branch_taken_0x478e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x478e94) {
            ctx->pc = 0x478EA8u;
            goto label_478ea8;
        }
    }
    ctx->pc = 0x478E9Cu;
    // 0x478e9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x478e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x478ea0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x478EA0u;
    {
        const bool branch_taken_0x478ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x478ea0) {
            ctx->pc = 0x478ED4u;
            goto label_478ed4;
        }
    }
    ctx->pc = 0x478EA8u;
label_478ea8:
    // 0x478ea8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x478ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x478eac: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x478eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x478eb0: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x478eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x478eb4: 0xc11e3bc  jal         func_478EF0
    ctx->pc = 0x478EB4u;
    SET_GPR_U32(ctx, 31, 0x478EBCu);
    ctx->pc = 0x478EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x478EF0u, 0x478EB4u, 0x478EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478EBCu;
label_478ebc:
    // 0x478ebc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x478EBCu;
    {
        const bool branch_taken_0x478ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x478ebc) {
            ctx->pc = 0x478ED0u;
            goto label_478ed0;
        }
    }
    ctx->pc = 0x478EC4u;
    // 0x478ec4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x478ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x478ec8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x478EC8u;
    {
        const bool branch_taken_0x478ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x478ec8) {
            ctx->pc = 0x478ED4u;
            goto label_478ed4;
        }
    }
    ctx->pc = 0x478ED0u;
label_478ed0:
    // 0x478ed0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x478ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_478ed4:
    // 0x478ed4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x478ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x478ed8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x478ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x478edc: 0x3e00008  jr          $ra
    ctx->pc = 0x478EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x478EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x478EE4u;
    // 0x478ee4: 0x0  nop
    ctx->pc = 0x478ee4u;
    // NOP
    // 0x478ee8: 0x0  nop
    ctx->pc = 0x478ee8u;
    // NOP
    // 0x478eec: 0x0  nop
    ctx->pc = 0x478eecu;
    // NOP
    ctx->pc = 0x478ef0u;
}
