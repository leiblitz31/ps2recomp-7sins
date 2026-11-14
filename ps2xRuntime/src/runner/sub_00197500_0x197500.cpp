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

// Function: sub_00197500
// Address: 0x197500 - 0x197540
void sub_00197500_0x197500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197500_0x197500");
#endif

    switch (ctx->pc) {
        case 0x19751cu: goto label_19751c;
        default: break;
    }

    ctx->pc = 0x197500u;

    // 0x197500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x197500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x197504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x197504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x197508: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x197508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19750c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x19750cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x197510: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x197510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197514: 0xc065d50  jal         func_197540
    ctx->pc = 0x197514u;
    SET_GPR_U32(ctx, 31, 0x19751Cu);
    ctx->pc = 0x197540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197540u, 0x197514u, 0x19751Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19751Cu;
label_19751c:
    // 0x19751c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x19751cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197520: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x197520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x197524: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x197524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x197528: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x197528u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19752c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19752cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197530: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x197530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197534: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x197534u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x197538: 0x3e00008  jr          $ra
    ctx->pc = 0x197538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197540u;
}
