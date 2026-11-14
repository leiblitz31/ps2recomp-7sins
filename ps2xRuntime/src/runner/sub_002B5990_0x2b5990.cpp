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

// Function: sub_002B5990
// Address: 0x2b5990 - 0x2b59e0
void sub_002B5990_0x2b5990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5990_0x2b5990");
#endif

    switch (ctx->pc) {
        case 0x2b59a8u: goto label_2b59a8;
        default: break;
    }

    ctx->pc = 0x2b5990u;

    // 0x2b5990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b5990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b5994: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b5994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b5998: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b5998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2b599c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b599cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b59a0: 0xc08ec10  jal         func_23B040
    ctx->pc = 0x2B59A0u;
    SET_GPR_U32(ctx, 31, 0x2B59A8u);
    ctx->pc = 0x23B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B040u, 0x2B59A0u, 0x2B59A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B59A8u;
label_2b59a8:
    // 0x2b59a8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2b59a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2b59ac: 0x24636680  addiu       $v1, $v1, 0x6680
    ctx->pc = 0x2b59acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26240));
    // 0x2b59b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b59b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b59b4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b59b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b59b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b59b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b59bc: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x2b59bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x2b59c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b59c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b59c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b59c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b59c8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b59c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b59cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B59CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B59CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B59D4u;
    // 0x2b59d4: 0x0  nop
    ctx->pc = 0x2b59d4u;
    // NOP
    // 0x2b59d8: 0x0  nop
    ctx->pc = 0x2b59d8u;
    // NOP
    // 0x2b59dc: 0x0  nop
    ctx->pc = 0x2b59dcu;
    // NOP
    ctx->pc = 0x2b59e0u;
}
