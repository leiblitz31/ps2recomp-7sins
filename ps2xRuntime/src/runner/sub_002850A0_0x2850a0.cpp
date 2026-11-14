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

// Function: sub_002850A0
// Address: 0x2850a0 - 0x285110
void sub_002850A0_0x2850a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002850A0_0x2850a0");
#endif

    switch (ctx->pc) {
        case 0x2850d4u: goto label_2850d4;
        case 0x2850f4u: goto label_2850f4;
        default: break;
    }

    ctx->pc = 0x2850a0u;

    // 0x2850a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2850a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2850a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2850a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2850a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2850a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2850ac: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2850acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2850b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2850b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2850b4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2850B4u;
    {
        const bool branch_taken_0x2850b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2850b4) {
            ctx->pc = 0x2850F4u;
            goto label_2850f4;
        }
    }
    ctx->pc = 0x2850BCu;
    // 0x2850bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2850bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2850c0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2850c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2850c4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2850c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2850c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2850c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2850cc: 0xc0a3830  jal         func_28E0C0
    ctx->pc = 0x2850CCu;
    SET_GPR_U32(ctx, 31, 0x2850D4u);
    ctx->pc = 0x28E0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E0C0u, 0x2850CCu, 0x2850D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2850D4u;
label_2850d4:
    // 0x2850d4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2850d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2850d8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2850d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2850dc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2850dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2850e0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2850E0u;
    {
        const bool branch_taken_0x2850e0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2850e0) {
            ctx->pc = 0x2850F4u;
            goto label_2850f4;
        }
    }
    ctx->pc = 0x2850E8u;
    // 0x2850e8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2850e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2850ec: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2850ECu;
    SET_GPR_U32(ctx, 31, 0x2850F4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2850ECu, 0x2850F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2850F4u;
label_2850f4:
    // 0x2850f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2850f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2850f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2850f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2850fc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2850fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x285100: 0x3e00008  jr          $ra
    ctx->pc = 0x285100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285108u;
    // 0x285108: 0x0  nop
    ctx->pc = 0x285108u;
    // NOP
    // 0x28510c: 0x0  nop
    ctx->pc = 0x28510cu;
    // NOP
    ctx->pc = 0x285110u;
}
