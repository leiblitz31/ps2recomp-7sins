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

// Function: sub_00488CC0
// Address: 0x488cc0 - 0x488cf0
void sub_00488CC0_0x488cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488CC0_0x488cc0");
#endif

    switch (ctx->pc) {
        case 0x488cdcu: goto label_488cdc;
        default: break;
    }

    ctx->pc = 0x488cc0u;

    // 0x488cc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x488cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x488cc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x488cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x488cc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x488cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x488ccc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x488cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x488cd0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x488cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x488cd4: 0xc11faf0  jal         func_47EBC0
    ctx->pc = 0x488CD4u;
    SET_GPR_U32(ctx, 31, 0x488CDCu);
    ctx->pc = 0x47EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47EBC0u, 0x488CD4u, 0x488CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488CDCu;
label_488cdc:
    // 0x488cdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x488cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x488ce0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x488ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x488ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x488CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x488CECu;
    // 0x488cec: 0x0  nop
    ctx->pc = 0x488cecu;
    // NOP
    ctx->pc = 0x488cf0u;
}
