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

// Function: sub_00211680
// Address: 0x211680 - 0x2116d0
void sub_00211680_0x211680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211680_0x211680");
#endif

    switch (ctx->pc) {
        case 0x2116bcu: goto label_2116bc;
        default: break;
    }

    ctx->pc = 0x211680u;

    // 0x211680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x211680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x211684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x211684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x211688: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x211688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x21168c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x21168cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x211690: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x211690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211694: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x211694u;
    {
        const bool branch_taken_0x211694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x211694) {
            ctx->pc = 0x2116BCu;
            goto label_2116bc;
        }
    }
    ctx->pc = 0x21169Cu;
    // 0x21169c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x21169cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2116a0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2116a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2116a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2116a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2116a8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2116A8u;
    {
        const bool branch_taken_0x2116a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2116a8) {
            ctx->pc = 0x2116BCu;
            goto label_2116bc;
        }
    }
    ctx->pc = 0x2116B0u;
    // 0x2116b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2116b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2116b4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2116B4u;
    SET_GPR_U32(ctx, 31, 0x2116BCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2116B4u, 0x2116BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2116BCu;
label_2116bc:
    // 0x2116bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2116bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2116c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2116c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2116c4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2116c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2116c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2116C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2116C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2116D0u;
}
