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

// Function: sub_00150500
// Address: 0x150500 - 0x150560
void sub_00150500_0x150500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150500_0x150500");
#endif

    switch (ctx->pc) {
        case 0x150528u: goto label_150528;
        case 0x150540u: goto label_150540;
        default: break;
    }

    ctx->pc = 0x150500u;

    // 0x150500: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x150500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x150504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150508: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x150508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x15050c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x15050cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x150510: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x150510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x150514: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x150514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x150518: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x150518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x15051c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x15051cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x150520: 0xc052d28  jal         func_14B4A0
    ctx->pc = 0x150520u;
    SET_GPR_U32(ctx, 31, 0x150528u);
    ctx->pc = 0x14B4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B4A0u, 0x150520u, 0x150528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150528u;
label_150528:
    // 0x150528: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x150528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15052c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x15052cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x150530: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x150530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150534: 0x8fa70050  lw          $a3, 0x50($sp)
    ctx->pc = 0x150534u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x150538: 0xc054914  jal         func_152450
    ctx->pc = 0x150538u;
    SET_GPR_U32(ctx, 31, 0x150540u);
    ctx->pc = 0x152450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152450u, 0x150538u, 0x150540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150540u;
label_150540:
    // 0x150540: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x150540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150544: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150548: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x150548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15054c: 0x3e00008  jr          $ra
    ctx->pc = 0x15054Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15054Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150554u;
    // 0x150554: 0x0  nop
    ctx->pc = 0x150554u;
    // NOP
    // 0x150558: 0x0  nop
    ctx->pc = 0x150558u;
    // NOP
    // 0x15055c: 0x0  nop
    ctx->pc = 0x15055cu;
    // NOP
    ctx->pc = 0x150560u;
}
