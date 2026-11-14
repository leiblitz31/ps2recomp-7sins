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

// Function: sub_00223E40
// Address: 0x223e40 - 0x223e90
void sub_00223E40_0x223e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223E40_0x223e40");
#endif

    switch (ctx->pc) {
        case 0x223e64u: goto label_223e64;
        default: break;
    }

    ctx->pc = 0x223e40u;

    // 0x223e40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x223e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x223e44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223e48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x223e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x223e4c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x223e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x223e50: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x223e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x223e54: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x223e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223e58: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x223e58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223e5c: 0xc088fa4  jal         func_223E90
    ctx->pc = 0x223E5Cu;
    SET_GPR_U32(ctx, 31, 0x223E64u);
    ctx->pc = 0x223E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E90u, 0x223E5Cu, 0x223E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223E64u;
label_223e64:
    // 0x223e64: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x223e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x223e68: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x223e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223e6c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x223e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x223e70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x223e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223e74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223e78: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x223e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x223e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x223E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223E84u;
    // 0x223e84: 0x0  nop
    ctx->pc = 0x223e84u;
    // NOP
    // 0x223e88: 0x0  nop
    ctx->pc = 0x223e88u;
    // NOP
    // 0x223e8c: 0x0  nop
    ctx->pc = 0x223e8cu;
    // NOP
    ctx->pc = 0x223e90u;
}
