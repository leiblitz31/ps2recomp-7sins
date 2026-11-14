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

// Function: sub_0020B490
// Address: 0x20b490 - 0x20b4c0
void sub_0020B490_0x20b490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B490_0x20b490");
#endif

    switch (ctx->pc) {
        case 0x20b4acu: goto label_20b4ac;
        default: break;
    }

    ctx->pc = 0x20b490u;

    // 0x20b490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20b490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20b494: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20b494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20b498: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x20b498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x20b49c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x20b49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b4a0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x20b4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20b4a4: 0xc122fb0  jal         func_48BEC0
    ctx->pc = 0x20B4A4u;
    SET_GPR_U32(ctx, 31, 0x20B4ACu);
    ctx->pc = 0x48BEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BEC0u, 0x20B4A4u, 0x20B4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B4ACu;
label_20b4ac:
    // 0x20b4ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20b4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b4b0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x20b4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20b4b4: 0x3e00008  jr          $ra
    ctx->pc = 0x20B4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B4B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B4BCu;
    // 0x20b4bc: 0x0  nop
    ctx->pc = 0x20b4bcu;
    // NOP
    ctx->pc = 0x20b4c0u;
}
