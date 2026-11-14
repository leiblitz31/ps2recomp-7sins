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

// Function: sub_002DF610
// Address: 0x2df610 - 0x2df670
void sub_002DF610_0x2df610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF610_0x2df610");
#endif

    switch (ctx->pc) {
        case 0x2df628u: goto label_2df628;
        case 0x2df634u: goto label_2df634;
        case 0x2df648u: goto label_2df648;
        case 0x2df658u: goto label_2df658;
        default: break;
    }

    ctx->pc = 0x2df610u;

    // 0x2df610: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2df610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2df614: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2df614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2df618: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2df618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2df61c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2df61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2df620: 0xc0b7a7c  jal         func_2DE9F0
    ctx->pc = 0x2DF620u;
    SET_GPR_U32(ctx, 31, 0x2DF628u);
    ctx->pc = 0x2DE9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE9F0u, 0x2DF620u, 0x2DF628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF628u;
label_2df628:
    // 0x2df628: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x2df628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2df62c: 0xc0b7e3c  jal         func_2DF8F0
    ctx->pc = 0x2DF62Cu;
    SET_GPR_U32(ctx, 31, 0x2DF634u);
    ctx->pc = 0x2DF8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF8F0u, 0x2DF62Cu, 0x2DF634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF634u;
label_2df634:
    // 0x2df634: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2df634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2df638: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2df638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2df63c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2df63cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df640: 0xc0b7d9c  jal         func_2DF670
    ctx->pc = 0x2DF640u;
    SET_GPR_U32(ctx, 31, 0x2DF648u);
    ctx->pc = 0x2DF670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF670u, 0x2DF640u, 0x2DF648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF648u;
label_2df648:
    // 0x2df648: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2df648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2df64c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2df64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2df650: 0xc0b7a88  jal         func_2DEA20
    ctx->pc = 0x2DF650u;
    SET_GPR_U32(ctx, 31, 0x2DF658u);
    ctx->pc = 0x2DEA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEA20u, 0x2DF650u, 0x2DF658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF658u;
label_2df658:
    // 0x2df658: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2df658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2df65c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2df65cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df660: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2df660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2df664: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF66Cu;
    // 0x2df66c: 0x0  nop
    ctx->pc = 0x2df66cu;
    // NOP
    ctx->pc = 0x2df670u;
}
