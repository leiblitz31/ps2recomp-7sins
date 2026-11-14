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

// Function: sub_002BB9D0
// Address: 0x2bb9d0 - 0x2bba60
void sub_002BB9D0_0x2bb9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB9D0_0x2bb9d0");
#endif

    switch (ctx->pc) {
        case 0x2bb9f8u: goto label_2bb9f8;
        case 0x2bba24u: goto label_2bba24;
        case 0x2bba44u: goto label_2bba44;
        default: break;
    }

    ctx->pc = 0x2bb9d0u;

    // 0x2bb9d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bb9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2bb9d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bb9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bb9d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bb9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bb9dc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2bb9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2bb9e0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2bb9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2bb9e4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2bb9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bb9e8: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x2bb9e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2bb9ec: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2bb9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bb9f0: 0xc041a14  jal         func_106850
    ctx->pc = 0x2BB9F0u;
    SET_GPR_U32(ctx, 31, 0x2BB9F8u);
    ctx->pc = 0x106850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106850u, 0x2BB9F0u, 0x2BB9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB9F8u;
label_2bb9f8:
    // 0x2bb9f8: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BB9F8u;
    {
        const bool branch_taken_0x2bb9f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bb9f8) {
            ctx->pc = 0x2BBA24u;
            goto label_2bba24;
        }
    }
    ctx->pc = 0x2BBA00u;
    // 0x2bba00: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2bba00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bba04: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2bba04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bba08: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x2bba08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bba0c: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x2bba0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2bba10: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2bba10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2bba14: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2bba14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bba18: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2bba18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2bba1c: 0xc099918  jal         func_266460
    ctx->pc = 0x2BBA1Cu;
    SET_GPR_U32(ctx, 31, 0x2BBA24u);
    ctx->pc = 0x266460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266460u, 0x2BBA1Cu, 0x2BBA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBA24u;
label_2bba24:
    // 0x2bba24: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2bba24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bba28: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2bba28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2bba2c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2bba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2bba30: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2bba30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2bba34: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2bba34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bba38: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2bba38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2bba3c: 0xc0aee98  jal         func_2BBA60
    ctx->pc = 0x2BBA3Cu;
    SET_GPR_U32(ctx, 31, 0x2BBA44u);
    ctx->pc = 0x2BBA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBA60u, 0x2BBA3Cu, 0x2BBA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBA44u;
label_2bba44:
    // 0x2bba44: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2bba44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bba48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bba48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bba4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bba4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bba50: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2bba50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bba54: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBA54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BBA5Cu;
    // 0x2bba5c: 0x0  nop
    ctx->pc = 0x2bba5cu;
    // NOP
    ctx->pc = 0x2bba60u;
}
