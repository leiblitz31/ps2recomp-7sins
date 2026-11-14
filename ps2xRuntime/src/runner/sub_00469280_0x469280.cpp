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

// Function: sub_00469280
// Address: 0x469280 - 0x4692d0
void sub_00469280_0x469280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00469280_0x469280");
#endif

    switch (ctx->pc) {
        case 0x4692a4u: goto label_4692a4;
        case 0x4692b4u: goto label_4692b4;
        default: break;
    }

    ctx->pc = 0x469280u;

    // 0x469280: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x469280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x469284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x469284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x469288: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x469288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46928c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46928cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x469290: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x469290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x469294: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x469294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469298: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x469298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46929c: 0xc11a464  jal         func_469190
    ctx->pc = 0x46929Cu;
    SET_GPR_U32(ctx, 31, 0x4692A4u);
    ctx->pc = 0x469190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469190u, 0x46929Cu, 0x4692A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4692A4u;
label_4692a4:
    // 0x4692a4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x4692a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4692a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4692a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4692ac: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x4692ACu;
    SET_GPR_U32(ctx, 31, 0x4692B4u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x4692ACu, 0x4692B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4692B4u;
label_4692b4:
    // 0x4692b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4692b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4692b8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4692b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4692bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4692BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4692BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4692C4u;
    // 0x4692c4: 0x0  nop
    ctx->pc = 0x4692c4u;
    // NOP
    // 0x4692c8: 0x0  nop
    ctx->pc = 0x4692c8u;
    // NOP
    // 0x4692cc: 0x0  nop
    ctx->pc = 0x4692ccu;
    // NOP
    ctx->pc = 0x4692d0u;
}
