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

// Function: sub_0048F490
// Address: 0x48f490 - 0x48f4c0
void sub_0048F490_0x48f490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048F490_0x48f490");
#endif

    switch (ctx->pc) {
        case 0x48f4a8u: goto label_48f4a8;
        default: break;
    }

    ctx->pc = 0x48f490u;

    // 0x48f490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48f490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x48f494: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48f494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48f498: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x48f498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48f49c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48f49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48f4a0: 0xc123d30  jal         func_48F4C0
    ctx->pc = 0x48F4A0u;
    SET_GPR_U32(ctx, 31, 0x48F4A8u);
    ctx->pc = 0x48F4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F4C0u, 0x48F4A0u, 0x48F4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F4A8u;
label_48f4a8:
    // 0x48f4a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48f4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48f4ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48f4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48f4b0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x48f4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x48f4b4: 0x3e00008  jr          $ra
    ctx->pc = 0x48F4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48F4B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48F4BCu;
    // 0x48f4bc: 0x0  nop
    ctx->pc = 0x48f4bcu;
    // NOP
    ctx->pc = 0x48f4c0u;
}
