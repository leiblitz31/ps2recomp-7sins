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

// Function: sub_0018E620
// Address: 0x18e620 - 0x18e680
void sub_0018E620_0x18e620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E620_0x18e620");
#endif

    switch (ctx->pc) {
        case 0x18e63cu: goto label_18e63c;
        case 0x18e64cu: goto label_18e64c;
        case 0x18e660u: goto label_18e660;
        default: break;
    }

    ctx->pc = 0x18e620u;

    // 0x18e620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18e620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18e624: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18e624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18e628: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18e628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18e62c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x18e62cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x18e630: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x18e630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e634: 0xc0637d8  jal         func_18DF60
    ctx->pc = 0x18E634u;
    SET_GPR_U32(ctx, 31, 0x18E63Cu);
    ctx->pc = 0x18DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DF60u, 0x18E634u, 0x18E63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E63Cu;
label_18e63c:
    // 0x18e63c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18e63cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e640: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x18e640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e644: 0xc063a28  jal         func_18E8A0
    ctx->pc = 0x18E644u;
    SET_GPR_U32(ctx, 31, 0x18E64Cu);
    ctx->pc = 0x18E8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E8A0u, 0x18E644u, 0x18E64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E64Cu;
label_18e64c:
    // 0x18e64c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x18e64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e650: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18e650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e654: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x18e654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e658: 0xc0639a0  jal         func_18E680
    ctx->pc = 0x18E658u;
    SET_GPR_U32(ctx, 31, 0x18E660u);
    ctx->pc = 0x18E680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E680u, 0x18E658u, 0x18E660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E660u;
label_18e660:
    // 0x18e660: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18e660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e664: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18e664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e668: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18e668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18e66c: 0x3e00008  jr          $ra
    ctx->pc = 0x18E66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E66Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E674u;
    // 0x18e674: 0x0  nop
    ctx->pc = 0x18e674u;
    // NOP
    // 0x18e678: 0x0  nop
    ctx->pc = 0x18e678u;
    // NOP
    // 0x18e67c: 0x0  nop
    ctx->pc = 0x18e67cu;
    // NOP
    ctx->pc = 0x18e680u;
}
