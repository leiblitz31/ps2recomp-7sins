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

// Function: sub_0046A020
// Address: 0x46a020 - 0x46a070
void sub_0046A020_0x46a020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046A020_0x46a020");
#endif

    switch (ctx->pc) {
        case 0x46a044u: goto label_46a044;
        default: break;
    }

    ctx->pc = 0x46a020u;

    // 0x46a020: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x46a020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x46a024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46a024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46a028: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46a028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46a02c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46a02cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x46a030: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x46a030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x46a034: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46a034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46a038: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x46a038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46a03c: 0xc11a81c  jal         func_46A070
    ctx->pc = 0x46A03Cu;
    SET_GPR_U32(ctx, 31, 0x46A044u);
    ctx->pc = 0x46A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A070u, 0x46A03Cu, 0x46A044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A044u;
label_46a044:
    // 0x46a044: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x46a044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46a048: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46a048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46a04c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x46a04cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x46a050: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46a050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46a054: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46a054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46a058: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x46a058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46a05c: 0x3e00008  jr          $ra
    ctx->pc = 0x46A05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A05Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46A064u;
    // 0x46a064: 0x0  nop
    ctx->pc = 0x46a064u;
    // NOP
    // 0x46a068: 0x0  nop
    ctx->pc = 0x46a068u;
    // NOP
    // 0x46a06c: 0x0  nop
    ctx->pc = 0x46a06cu;
    // NOP
    ctx->pc = 0x46a070u;
}
