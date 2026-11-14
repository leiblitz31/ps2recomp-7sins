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

// Function: sub_00480350
// Address: 0x480350 - 0x480390
void sub_00480350_0x480350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00480350_0x480350");
#endif

    switch (ctx->pc) {
        case 0x480374u: goto label_480374;
        default: break;
    }

    ctx->pc = 0x480350u;

    // 0x480350: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x480350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x480354: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x480354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x480358: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x480358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48035c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x48035cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x480360: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x480360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x480364: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x480364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x480368: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x480368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48036c: 0xc1200e4  jal         func_480390
    ctx->pc = 0x48036Cu;
    SET_GPR_U32(ctx, 31, 0x480374u);
    ctx->pc = 0x480390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480390u, 0x48036Cu, 0x480374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480374u;
label_480374:
    // 0x480374: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x480374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x480378: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x480378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48037c: 0x3e00008  jr          $ra
    ctx->pc = 0x48037Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48037Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x480384u;
    // 0x480384: 0x0  nop
    ctx->pc = 0x480384u;
    // NOP
    // 0x480388: 0x0  nop
    ctx->pc = 0x480388u;
    // NOP
    // 0x48038c: 0x0  nop
    ctx->pc = 0x48038cu;
    // NOP
    ctx->pc = 0x480390u;
}
