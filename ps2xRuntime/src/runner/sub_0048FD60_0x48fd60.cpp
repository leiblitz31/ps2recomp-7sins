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

// Function: sub_0048FD60
// Address: 0x48fd60 - 0x48fdb0
void sub_0048FD60_0x48fd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048FD60_0x48fd60");
#endif

    switch (ctx->pc) {
        case 0x48fd80u: goto label_48fd80;
        default: break;
    }

    ctx->pc = 0x48fd60u;

    // 0x48fd60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48fd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48fd64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48fd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48fd68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x48fd68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48fd6c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x48fd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x48fd70: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48fd70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48fd74: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x48fd74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48fd78: 0xc042844  jal         func_10A110
    ctx->pc = 0x48FD78u;
    SET_GPR_U32(ctx, 31, 0x48FD80u);
    ctx->pc = 0x10A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A110u, 0x48FD78u, 0x48FD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FD80u;
label_48fd80:
    // 0x48fd80: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x48fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48fd84: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x48fd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x48fd88: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48fd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48fd8c: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x48fd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x48fd90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48fd94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48fd94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48fd98: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x48fd98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48fd9c: 0x3e00008  jr          $ra
    ctx->pc = 0x48FD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48FD9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48FDA4u;
    // 0x48fda4: 0x0  nop
    ctx->pc = 0x48fda4u;
    // NOP
    // 0x48fda8: 0x0  nop
    ctx->pc = 0x48fda8u;
    // NOP
    // 0x48fdac: 0x0  nop
    ctx->pc = 0x48fdacu;
    // NOP
    ctx->pc = 0x48fdb0u;
}
