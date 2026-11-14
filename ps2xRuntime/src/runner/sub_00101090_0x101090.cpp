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

// Function: sub_00101090
// Address: 0x101090 - 0x1010f0
void sub_00101090_0x101090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101090_0x101090");
#endif

    switch (ctx->pc) {
        case 0x1010a0u: goto label_1010a0;
        case 0x1010a8u: goto label_1010a8;
        case 0x1010b0u: goto label_1010b0;
        case 0x1010c8u: goto label_1010c8;
        case 0x1010d0u: goto label_1010d0;
        case 0x1010d8u: goto label_1010d8;
        default: break;
    }

    ctx->pc = 0x101090u;

    // 0x101090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x101090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x101094: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x101094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x101098: 0xc040444  jal         func_101110
    ctx->pc = 0x101098u;
    SET_GPR_U32(ctx, 31, 0x1010A0u);
    ctx->pc = 0x101110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101110u, 0x101098u, 0x1010A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1010A0u;
label_1010a0:
    // 0x1010a0: 0xc0888b4  jal         func_2222D0
    ctx->pc = 0x1010A0u;
    SET_GPR_U32(ctx, 31, 0x1010A8u);
    ctx->pc = 0x2222D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2222D0u, 0x1010A0u, 0x1010A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1010A8u;
label_1010a8:
    // 0x1010a8: 0xc0400b0  jal         func_1002C0
    ctx->pc = 0x1010A8u;
    SET_GPR_U32(ctx, 31, 0x1010B0u);
    ctx->pc = 0x1002C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1002C0u, 0x1010A8u, 0x1010B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1010B0u;
label_1010b0:
    // 0x1010b0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1010b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1010b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1010b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1010b8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1010B8u;
    {
        const bool branch_taken_0x1010b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1010b8) {
            ctx->pc = 0x1010C8u;
            goto label_1010c8;
        }
    }
    ctx->pc = 0x1010C0u;
    // 0x1010c0: 0xc040124  jal         func_100490
    ctx->pc = 0x1010C0u;
    SET_GPR_U32(ctx, 31, 0x1010C8u);
    ctx->pc = 0x100490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100490u, 0x1010C0u, 0x1010C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1010C8u;
label_1010c8:
    // 0x1010c8: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1010C8u;
    SET_GPR_U32(ctx, 31, 0x1010D0u);
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1010C8u, 0x1010D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1010D0u;
label_1010d0:
    // 0x1010d0: 0xc088aa4  jal         func_222A90
    ctx->pc = 0x1010D0u;
    SET_GPR_U32(ctx, 31, 0x1010D8u);
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x1010D0u, 0x1010D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1010D8u;
label_1010d8:
    // 0x1010d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1010d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1010dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1010dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1010e0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1010e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1010e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1010E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1010E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1010ECu;
    // 0x1010ec: 0x0  nop
    ctx->pc = 0x1010ecu;
    // NOP
    ctx->pc = 0x1010f0u;
}
