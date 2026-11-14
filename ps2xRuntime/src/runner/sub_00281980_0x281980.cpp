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

// Function: sub_00281980
// Address: 0x281980 - 0x2819d0
void sub_00281980_0x281980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281980_0x281980");
#endif

    switch (ctx->pc) {
        case 0x2819a4u: goto label_2819a4;
        default: break;
    }

    ctx->pc = 0x281980u;

    // 0x281980: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x281980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x281984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x281984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x281988: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x281988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28198c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x28198cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x281990: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x281990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x281994: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x281994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281998: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x281998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28199c: 0xc0a0674  jal         func_2819D0
    ctx->pc = 0x28199Cu;
    SET_GPR_U32(ctx, 31, 0x2819A4u);
    ctx->pc = 0x2819D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2819D0u, 0x28199Cu, 0x2819A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2819A4u;
label_2819a4:
    // 0x2819a4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2819a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2819a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2819a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2819ac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2819acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2819b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2819b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2819b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2819b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2819b8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2819b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2819bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2819BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2819BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2819C4u;
    // 0x2819c4: 0x0  nop
    ctx->pc = 0x2819c4u;
    // NOP
    // 0x2819c8: 0x0  nop
    ctx->pc = 0x2819c8u;
    // NOP
    // 0x2819cc: 0x0  nop
    ctx->pc = 0x2819ccu;
    // NOP
    ctx->pc = 0x2819d0u;
}
