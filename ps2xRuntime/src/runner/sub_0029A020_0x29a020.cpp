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

// Function: sub_0029A020
// Address: 0x29a020 - 0x29a070
void sub_0029A020_0x29a020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A020_0x29a020");
#endif

    switch (ctx->pc) {
        case 0x29a044u: goto label_29a044;
        default: break;
    }

    ctx->pc = 0x29a020u;

    // 0x29a020: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29a020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29a024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29a024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29a028: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x29a028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x29a02c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x29a02cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x29a030: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x29a030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x29a034: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x29a034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a038: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x29a038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a03c: 0xc0a681c  jal         func_29A070
    ctx->pc = 0x29A03Cu;
    SET_GPR_U32(ctx, 31, 0x29A044u);
    ctx->pc = 0x29A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A070u, 0x29A03Cu, 0x29A044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A044u;
label_29a044:
    // 0x29a044: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x29a044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a048: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29a048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a04c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29a04cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29a050: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29a050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a054: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29a054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a058: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x29a058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29a05c: 0x3e00008  jr          $ra
    ctx->pc = 0x29A05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A05Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A064u;
    // 0x29a064: 0x0  nop
    ctx->pc = 0x29a064u;
    // NOP
    // 0x29a068: 0x0  nop
    ctx->pc = 0x29a068u;
    // NOP
    // 0x29a06c: 0x0  nop
    ctx->pc = 0x29a06cu;
    // NOP
    ctx->pc = 0x29a070u;
}
