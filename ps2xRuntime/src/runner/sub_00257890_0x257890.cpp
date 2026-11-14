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

// Function: sub_00257890
// Address: 0x257890 - 0x2578d0
void sub_00257890_0x257890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257890_0x257890");
#endif

    switch (ctx->pc) {
        case 0x2578acu: goto label_2578ac;
        case 0x2578bcu: goto label_2578bc;
        default: break;
    }

    ctx->pc = 0x257890u;

    // 0x257890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x257890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x257894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x257894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x257898: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x257898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25789c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x25789cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2578a0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2578a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2578a4: 0xc095138  jal         func_2544E0
    ctx->pc = 0x2578A4u;
    SET_GPR_U32(ctx, 31, 0x2578ACu);
    ctx->pc = 0x2544E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544E0u, 0x2578A4u, 0x2578ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2578ACu;
label_2578ac:
    // 0x2578ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2578acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2578b0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2578b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2578b4: 0xc095e34  jal         func_2578D0
    ctx->pc = 0x2578B4u;
    SET_GPR_U32(ctx, 31, 0x2578BCu);
    ctx->pc = 0x2578D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2578D0u, 0x2578B4u, 0x2578BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2578BCu;
label_2578bc:
    // 0x2578bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2578bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2578c0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2578c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2578c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2578C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2578C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2578CCu;
    // 0x2578cc: 0x0  nop
    ctx->pc = 0x2578ccu;
    // NOP
    ctx->pc = 0x2578d0u;
}
