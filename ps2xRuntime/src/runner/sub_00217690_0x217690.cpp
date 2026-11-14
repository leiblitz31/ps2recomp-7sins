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

// Function: sub_00217690
// Address: 0x217690 - 0x2176f0
void sub_00217690_0x217690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217690_0x217690");
#endif

    switch (ctx->pc) {
        case 0x2176a8u: goto label_2176a8;
        case 0x2176d0u: goto label_2176d0;
        default: break;
    }

    ctx->pc = 0x217690u;

    // 0x217690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x217690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x217694: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x217698: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x217698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x21769c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x21769cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2176a0: 0xc08ec10  jal         func_23B040
    ctx->pc = 0x2176A0u;
    SET_GPR_U32(ctx, 31, 0x2176A8u);
    ctx->pc = 0x23B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B040u, 0x2176A0u, 0x2176A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2176A8u;
label_2176a8:
    // 0x2176a8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2176a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2176ac: 0x24635230  addiu       $v1, $v1, 0x5230
    ctx->pc = 0x2176acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21040));
    // 0x2176b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2176b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2176b4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2176b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2176b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2176b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2176bc: 0xfc400030  sd          $zero, 0x30($v0)
    ctx->pc = 0x2176bcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 0));
    // 0x2176c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2176c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2176c4: 0x24440038  addiu       $a0, $v0, 0x38
    ctx->pc = 0x2176c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x2176c8: 0xc085e44  jal         func_217910
    ctx->pc = 0x2176C8u;
    SET_GPR_U32(ctx, 31, 0x2176D0u);
    ctx->pc = 0x217910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217910u, 0x2176C8u, 0x2176D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2176D0u;
label_2176d0:
    // 0x2176d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2176d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2176d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2176d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2176d8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2176d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2176dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2176DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2176DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2176E4u;
    // 0x2176e4: 0x0  nop
    ctx->pc = 0x2176e4u;
    // NOP
    // 0x2176e8: 0x0  nop
    ctx->pc = 0x2176e8u;
    // NOP
    // 0x2176ec: 0x0  nop
    ctx->pc = 0x2176ecu;
    // NOP
    ctx->pc = 0x2176f0u;
}
