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

// Function: sub_00307ED8
// Address: 0x307ed8 - 0x307f30
void sub_00307ED8_0x307ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307ED8_0x307ed8");
#endif

    switch (ctx->pc) {
        case 0x307ee8u: goto label_307ee8;
        case 0x307ef0u: goto label_307ef0;
        case 0x307ef8u: goto label_307ef8;
        case 0x307f00u: goto label_307f00;
        case 0x307f08u: goto label_307f08;
        case 0x307f10u: goto label_307f10;
        case 0x307f18u: goto label_307f18;
        case 0x307f20u: goto label_307f20;
        default: break;
    }

    ctx->pc = 0x307ed8u;

    // 0x307ed8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x307ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x307edc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x307edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x307ee0: 0xc0c1f22  jal         func_307C88
    ctx->pc = 0x307EE0u;
    SET_GPR_U32(ctx, 31, 0x307EE8u);
    ctx->pc = 0x307C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C88u, 0x307EE0u, 0x307EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307EE8u;
label_307ee8:
    // 0x307ee8: 0xc0c1f72  jal         func_307DC8
    ctx->pc = 0x307EE8u;
    SET_GPR_U32(ctx, 31, 0x307EF0u);
    ctx->pc = 0x307DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307DC8u, 0x307EE8u, 0x307EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307EF0u;
label_307ef0:
    // 0x307ef0: 0xc0c20ee  jal         func_3083B8
    ctx->pc = 0x307EF0u;
    SET_GPR_U32(ctx, 31, 0x307EF8u);
    ctx->pc = 0x3083B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3083B8u, 0x307EF0u, 0x307EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307EF8u;
label_307ef8:
    // 0x307ef8: 0xc0c214c  jal         func_308530
    ctx->pc = 0x307EF8u;
    SET_GPR_U32(ctx, 31, 0x307F00u);
    ctx->pc = 0x307EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307EF8u;
    // 0x307efc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308530u, 0x307EF8u, 0x307F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307F00u;
label_307f00:
    // 0x307f00: 0xc0c21dc  jal         func_308770
    ctx->pc = 0x307F00u;
    SET_GPR_U32(ctx, 31, 0x307F08u);
    ctx->pc = 0x308770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308770u, 0x307F00u, 0x307F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307F08u;
label_307f08:
    // 0x307f08: 0xc0bfa4e  jal         func_2FE938
    ctx->pc = 0x307F08u;
    SET_GPR_U32(ctx, 31, 0x307F10u);
    ctx->pc = 0x2FE938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE938u, 0x307F08u, 0x307F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307F10u;
label_307f10:
    // 0x307f10: 0xc0c2000  jal         func_308000
    ctx->pc = 0x307F10u;
    SET_GPR_U32(ctx, 31, 0x307F18u);
    ctx->pc = 0x308000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308000u, 0x307F10u, 0x307F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307F18u;
label_307f18:
    // 0x307f18: 0xc0c1d3c  jal         func_3074F0
    ctx->pc = 0x307F18u;
    SET_GPR_U32(ctx, 31, 0x307F20u);
    ctx->pc = 0x3074F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3074F0u, 0x307F18u, 0x307F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307F20u;
label_307f20:
    // 0x307f20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x307f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x307f24: 0x80c26fc  j           func_309BF0
    ctx->pc = 0x307F24u;
    ctx->pc = 0x307F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307F24u;
    // 0x307f28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309BF0u, 0x307F24u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x307F2Cu;
    // 0x307f2c: 0x0  nop
    ctx->pc = 0x307f2cu;
    // NOP
    ctx->pc = 0x307f30u;
}
