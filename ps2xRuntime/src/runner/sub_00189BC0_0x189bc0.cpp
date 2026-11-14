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

// Function: sub_00189BC0
// Address: 0x189bc0 - 0x189c50
void sub_00189BC0_0x189bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189BC0_0x189bc0");
#endif

    switch (ctx->pc) {
        case 0x189be4u: goto label_189be4;
        case 0x189bf4u: goto label_189bf4;
        case 0x189c08u: goto label_189c08;
        case 0x189c14u: goto label_189c14;
        case 0x189c28u: goto label_189c28;
        default: break;
    }

    ctx->pc = 0x189bc0u;

    // 0x189bc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x189bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x189bc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x189bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x189bc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x189bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x189bcc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x189bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x189bd0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x189bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x189bd4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x189bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x189bd8: 0x8f84baac  lw          $a0, -0x4554($gp)
    ctx->pc = 0x189bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949548)));
    // 0x189bdc: 0xc0581bc  jal         func_1606F0
    ctx->pc = 0x189BDCu;
    SET_GPR_U32(ctx, 31, 0x189BE4u);
    ctx->pc = 0x1606F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1606F0u, 0x189BDCu, 0x189BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189BE4u;
label_189be4:
    // 0x189be4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x189be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x189be8: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x189be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x189bec: 0xc06273c  jal         func_189CF0
    ctx->pc = 0x189BECu;
    SET_GPR_U32(ctx, 31, 0x189BF4u);
    ctx->pc = 0x189CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189CF0u, 0x189BECu, 0x189BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189BF4u;
label_189bf4:
    // 0x189bf4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x189bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x189bf8: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x189bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x189bfc: 0x24450068  addiu       $a1, $v0, 0x68
    ctx->pc = 0x189bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x189c00: 0xc062720  jal         func_189C80
    ctx->pc = 0x189C00u;
    SET_GPR_U32(ctx, 31, 0x189C08u);
    ctx->pc = 0x189C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189C80u, 0x189C00u, 0x189C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189C08u;
label_189c08:
    // 0x189c08: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x189c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x189c0c: 0xc062714  jal         func_189C50
    ctx->pc = 0x189C0Cu;
    SET_GPR_U32(ctx, 31, 0x189C14u);
    ctx->pc = 0x189C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189C50u, 0x189C0Cu, 0x189C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189C14u;
label_189c14:
    // 0x189c14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x189c14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189c18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x189c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189c1c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x189c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x189c20: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x189C20u;
    SET_GPR_U32(ctx, 31, 0x189C28u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x189C20u, 0x189C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189C28u;
label_189c28:
    // 0x189c28: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x189c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x189c2c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x189c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x189c30: 0xa2000010  sb          $zero, 0x10($s0)
    ctx->pc = 0x189c30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x189c34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x189c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189c38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x189c38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189c3c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x189c3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x189c40: 0x3e00008  jr          $ra
    ctx->pc = 0x189C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189C48u;
    // 0x189c48: 0x0  nop
    ctx->pc = 0x189c48u;
    // NOP
    // 0x189c4c: 0x0  nop
    ctx->pc = 0x189c4cu;
    // NOP
    ctx->pc = 0x189c50u;
}
