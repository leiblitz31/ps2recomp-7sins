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

// Function: sub_00457890
// Address: 0x457890 - 0x4578d0
void sub_00457890_0x457890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00457890_0x457890");
#endif

    switch (ctx->pc) {
        case 0x4578b4u: goto label_4578b4;
        default: break;
    }

    ctx->pc = 0x457890u;

    // 0x457890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x457890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x457894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x457894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x457898: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x457898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x45789c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x45789cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x4578a0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4578a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4578a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4578a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4578a8: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x4578a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4578ac: 0xc115e34  jal         func_4578D0
    ctx->pc = 0x4578ACu;
    SET_GPR_U32(ctx, 31, 0x4578B4u);
    ctx->pc = 0x4578D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4578D0u, 0x4578ACu, 0x4578B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4578B4u;
label_4578b4:
    // 0x4578b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4578b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4578b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4578b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4578bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4578BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4578BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4578C4u;
    // 0x4578c4: 0x0  nop
    ctx->pc = 0x4578c4u;
    // NOP
    // 0x4578c8: 0x0  nop
    ctx->pc = 0x4578c8u;
    // NOP
    // 0x4578cc: 0x0  nop
    ctx->pc = 0x4578ccu;
    // NOP
    ctx->pc = 0x4578d0u;
}
