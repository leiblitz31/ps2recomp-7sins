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

// Function: sub_004AE6F0
// Address: 0x4ae6f0 - 0x4ae718
void sub_004AE6F0_0x4ae6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE6F0_0x4ae6f0");
#endif

    switch (ctx->pc) {
        case 0x4ae700u: goto label_4ae700;
        default: break;
    }

    ctx->pc = 0x4ae6f0u;

    // 0x4ae6f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ae6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ae6f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ae6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ae6f8: 0xc12b9d8  jal         func_4AE760
    ctx->pc = 0x4AE6F8u;
    SET_GPR_U32(ctx, 31, 0x4AE700u);
    ctx->pc = 0x4AE760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE760u, 0x4AE6F8u, 0x4AE700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE700u;
label_4ae700:
    // 0x4ae700: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4ae700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4ae704: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ae704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ae708: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4ae708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x4ae70c: 0xff82c230  sd          $v0, -0x3DD0($gp)
    ctx->pc = 0x4ae70cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294951472), GPR_U64(ctx, 2));
    // 0x4ae710: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE710u;
        // 0x4ae714: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE718u;
}
