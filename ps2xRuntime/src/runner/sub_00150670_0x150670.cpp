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

// Function: sub_00150670
// Address: 0x150670 - 0x1506c0
void sub_00150670_0x150670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150670_0x150670");
#endif

    switch (ctx->pc) {
        case 0x150694u: goto label_150694;
        case 0x1506a4u: goto label_1506a4;
        default: break;
    }

    ctx->pc = 0x150670u;

    // 0x150670: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x150670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x150674: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150678: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x150678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15067c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x15067cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x150680: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x150680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x150684: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x150684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150688: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x150688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15068c: 0xc0541b0  jal         func_1506C0
    ctx->pc = 0x15068Cu;
    SET_GPR_U32(ctx, 31, 0x150694u);
    ctx->pc = 0x1506C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1506C0u, 0x15068Cu, 0x150694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150694u;
label_150694:
    // 0x150694: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x150694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150698: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x150698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15069c: 0xc052a3c  jal         func_14A8F0
    ctx->pc = 0x15069Cu;
    SET_GPR_U32(ctx, 31, 0x1506A4u);
    ctx->pc = 0x14A8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A8F0u, 0x15069Cu, 0x1506A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1506A4u;
label_1506a4:
    // 0x1506a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1506a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1506a8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1506a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1506ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1506ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1506ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1506B4u;
    // 0x1506b4: 0x0  nop
    ctx->pc = 0x1506b4u;
    // NOP
    // 0x1506b8: 0x0  nop
    ctx->pc = 0x1506b8u;
    // NOP
    // 0x1506bc: 0x0  nop
    ctx->pc = 0x1506bcu;
    // NOP
    ctx->pc = 0x1506c0u;
}
