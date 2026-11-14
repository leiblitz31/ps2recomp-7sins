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

// Function: sub_002DF480
// Address: 0x2df480 - 0x2df4c0
void sub_002DF480_0x2df480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF480_0x2df480");
#endif

    switch (ctx->pc) {
        case 0x2df498u: goto label_2df498;
        case 0x2df4a8u: goto label_2df4a8;
        default: break;
    }

    ctx->pc = 0x2df480u;

    // 0x2df480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2df480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2df484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2df484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2df488: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2df488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2df48c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x2df48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2df490: 0xc0b7d70  jal         func_2DF5C0
    ctx->pc = 0x2DF490u;
    SET_GPR_U32(ctx, 31, 0x2DF498u);
    ctx->pc = 0x2DF5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF5C0u, 0x2DF490u, 0x2DF498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF498u;
label_2df498:
    // 0x2df498: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2df498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df49c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2df49cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df4a0: 0xc0b7d30  jal         func_2DF4C0
    ctx->pc = 0x2DF4A0u;
    SET_GPR_U32(ctx, 31, 0x2DF4A8u);
    ctx->pc = 0x2DF4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF4C0u, 0x2DF4A0u, 0x2DF4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF4A8u;
label_2df4a8:
    // 0x2df4a8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2df4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df4ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2df4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df4b0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2df4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2df4b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF4B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF4BCu;
    // 0x2df4bc: 0x0  nop
    ctx->pc = 0x2df4bcu;
    // NOP
    ctx->pc = 0x2df4c0u;
}
