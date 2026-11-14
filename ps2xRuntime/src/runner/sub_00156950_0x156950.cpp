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

// Function: sub_00156950
// Address: 0x156950 - 0x156980
void sub_00156950_0x156950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156950_0x156950");
#endif

    switch (ctx->pc) {
        case 0x15696cu: goto label_15696c;
        default: break;
    }

    ctx->pc = 0x156950u;

    // 0x156950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x156950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x156954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x156954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x156958: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x156958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15695c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15695cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156960: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x156960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x156964: 0xc055a60  jal         func_156980
    ctx->pc = 0x156964u;
    SET_GPR_U32(ctx, 31, 0x15696Cu);
    ctx->pc = 0x156980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156980u, 0x156964u, 0x15696Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15696Cu;
label_15696c:
    // 0x15696c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15696cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156970: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x156970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x156974: 0x3e00008  jr          $ra
    ctx->pc = 0x156974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15697Cu;
    // 0x15697c: 0x0  nop
    ctx->pc = 0x15697cu;
    // NOP
    ctx->pc = 0x156980u;
}
