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

// Function: sub_00153BB0
// Address: 0x153bb0 - 0x153c00
void sub_00153BB0_0x153bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153BB0_0x153bb0");
#endif

    switch (ctx->pc) {
        case 0x153bd4u: goto label_153bd4;
        default: break;
    }

    ctx->pc = 0x153bb0u;

    // 0x153bb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x153bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x153bb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x153bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x153bb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x153bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x153bbc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x153bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x153bc0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x153bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x153bc4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x153bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153bc8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x153bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153bcc: 0xc054f00  jal         func_153C00
    ctx->pc = 0x153BCCu;
    SET_GPR_U32(ctx, 31, 0x153BD4u);
    ctx->pc = 0x153C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153C00u, 0x153BCCu, 0x153BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153BD4u;
label_153bd4:
    // 0x153bd4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x153bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x153bd8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x153bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153bdc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x153bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x153be0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x153be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153be4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x153be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153be8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x153be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x153bec: 0x3e00008  jr          $ra
    ctx->pc = 0x153BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153BF4u;
    // 0x153bf4: 0x0  nop
    ctx->pc = 0x153bf4u;
    // NOP
    // 0x153bf8: 0x0  nop
    ctx->pc = 0x153bf8u;
    // NOP
    // 0x153bfc: 0x0  nop
    ctx->pc = 0x153bfcu;
    // NOP
    ctx->pc = 0x153c00u;
}
