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

// Function: sub_00235BA0
// Address: 0x235ba0 - 0x235bf0
void sub_00235BA0_0x235ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235BA0_0x235ba0");
#endif

    switch (ctx->pc) {
        case 0x235bc4u: goto label_235bc4;
        case 0x235bdcu: goto label_235bdc;
        default: break;
    }

    ctx->pc = 0x235ba0u;

    // 0x235ba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x235ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x235ba4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x235ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x235ba8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x235ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x235bac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x235bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235bb0: 0x2405054e  addiu       $a1, $zero, 0x54E
    ctx->pc = 0x235bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1358));
    // 0x235bb4: 0x3c029526  lui         $v0, 0x9526
    ctx->pc = 0x235bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38182 << 16));
    // 0x235bb8: 0x3446011f  ori         $a2, $v0, 0x11F
    ctx->pc = 0x235bb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)287);
    // 0x235bbc: 0xc040924  jal         func_102490
    ctx->pc = 0x235BBCu;
    SET_GPR_U32(ctx, 31, 0x235BC4u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x235BBCu, 0x235BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235BC4u;
label_235bc4:
    // 0x235bc4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x235bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235bc8: 0x24050549  addiu       $a1, $zero, 0x549
    ctx->pc = 0x235bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1353));
    // 0x235bcc: 0x3c02d5da  lui         $v0, 0xD5DA
    ctx->pc = 0x235bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54746 << 16));
    // 0x235bd0: 0x34460128  ori         $a2, $v0, 0x128
    ctx->pc = 0x235bd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)296);
    // 0x235bd4: 0xc040924  jal         func_102490
    ctx->pc = 0x235BD4u;
    SET_GPR_U32(ctx, 31, 0x235BDCu);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x235BD4u, 0x235BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235BDCu;
label_235bdc:
    // 0x235bdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x235bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235be0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x235be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x235be4: 0x3e00008  jr          $ra
    ctx->pc = 0x235BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235BECu;
    // 0x235bec: 0x0  nop
    ctx->pc = 0x235becu;
    // NOP
    ctx->pc = 0x235bf0u;
}
