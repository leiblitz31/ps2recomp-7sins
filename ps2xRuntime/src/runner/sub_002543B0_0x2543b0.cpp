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

// Function: sub_002543B0
// Address: 0x2543b0 - 0x254420
void sub_002543B0_0x2543b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002543B0_0x2543b0");
#endif

    switch (ctx->pc) {
        case 0x2543e4u: goto label_2543e4;
        case 0x254404u: goto label_254404;
        default: break;
    }

    ctx->pc = 0x2543b0u;

    // 0x2543b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2543b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2543b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2543b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2543b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2543b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2543bc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2543bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2543c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2543c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2543c4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2543C4u;
    {
        const bool branch_taken_0x2543c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2543c4) {
            ctx->pc = 0x254404u;
            goto label_254404;
        }
    }
    ctx->pc = 0x2543CCu;
    // 0x2543cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2543ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2543d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2543d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2543d4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2543d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2543d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2543d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2543dc: 0xc095c74  jal         func_2571D0
    ctx->pc = 0x2543DCu;
    SET_GPR_U32(ctx, 31, 0x2543E4u);
    ctx->pc = 0x2571D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2571D0u, 0x2543DCu, 0x2543E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2543E4u;
label_2543e4:
    // 0x2543e4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2543e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2543e8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2543e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2543ec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2543ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2543f0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2543F0u;
    {
        const bool branch_taken_0x2543f0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2543f0) {
            ctx->pc = 0x254404u;
            goto label_254404;
        }
    }
    ctx->pc = 0x2543F8u;
    // 0x2543f8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2543f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2543fc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2543FCu;
    SET_GPR_U32(ctx, 31, 0x254404u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2543FCu, 0x254404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254404u;
label_254404:
    // 0x254404: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x254404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25440c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25440cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x254410: 0x3e00008  jr          $ra
    ctx->pc = 0x254410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254418u;
    // 0x254418: 0x0  nop
    ctx->pc = 0x254418u;
    // NOP
    // 0x25441c: 0x0  nop
    ctx->pc = 0x25441cu;
    // NOP
    ctx->pc = 0x254420u;
}
