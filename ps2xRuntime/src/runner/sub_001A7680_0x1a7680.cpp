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

// Function: sub_001A7680
// Address: 0x1a7680 - 0x1a76b0
void sub_001A7680_0x1a7680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7680_0x1a7680");
#endif

    switch (ctx->pc) {
        case 0x1a769cu: goto label_1a769c;
        default: break;
    }

    ctx->pc = 0x1a7680u;

    // 0x1a7680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a7680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a7684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a7684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a7688: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a7688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a768c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a768cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7690: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x1a7690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1a7694: 0xc05611c  jal         func_158470
    ctx->pc = 0x1A7694u;
    SET_GPR_U32(ctx, 31, 0x1A769Cu);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1A7694u, 0x1A769Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A769Cu;
label_1a769c:
    // 0x1a769c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a769cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a76a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1a76a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a76a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A76A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A76A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A76ACu;
    // 0x1a76ac: 0x0  nop
    ctx->pc = 0x1a76acu;
    // NOP
    ctx->pc = 0x1a76b0u;
}
