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

// Function: sub_001186A0
// Address: 0x1186a0 - 0x1186f0
void sub_001186A0_0x1186a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001186A0_0x1186a0");
#endif

    switch (ctx->pc) {
        case 0x1186b8u: goto label_1186b8;
        default: break;
    }

    ctx->pc = 0x1186a0u;

    // 0x1186a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1186a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1186a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1186a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1186a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1186a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1186ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1186acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1186b0: 0xc08ec10  jal         func_23B040
    ctx->pc = 0x1186B0u;
    SET_GPR_U32(ctx, 31, 0x1186B8u);
    ctx->pc = 0x23B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B040u, 0x1186B0u, 0x1186B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1186B8u;
label_1186b8:
    // 0x1186b8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1186b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1186bc: 0x24633350  addiu       $v1, $v1, 0x3350
    ctx->pc = 0x1186bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13136));
    // 0x1186c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1186c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1186c4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1186c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1186c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1186c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1186cc: 0xaf82b9b8  sw          $v0, -0x4648($gp)
    ctx->pc = 0x1186ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949304), GPR_U32(ctx, 2));
    // 0x1186d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1186d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1186d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1186d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1186d8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1186d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1186dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1186DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1186DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1186E4u;
    // 0x1186e4: 0x0  nop
    ctx->pc = 0x1186e4u;
    // NOP
    // 0x1186e8: 0x0  nop
    ctx->pc = 0x1186e8u;
    // NOP
    // 0x1186ec: 0x0  nop
    ctx->pc = 0x1186ecu;
    // NOP
    ctx->pc = 0x1186f0u;
}
