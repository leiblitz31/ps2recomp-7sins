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

// Function: sub_0019C2F0
// Address: 0x19c2f0 - 0x19c340
void sub_0019C2F0_0x19c2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C2F0_0x19c2f0");
#endif

    switch (ctx->pc) {
        case 0x19c32cu: goto label_19c32c;
        default: break;
    }

    ctx->pc = 0x19c2f0u;

    // 0x19c2f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19c2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19c2f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19c2f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x19c2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19c2fc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x19c2fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x19c300: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19c300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c304: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19C304u;
    {
        const bool branch_taken_0x19c304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c304) {
            ctx->pc = 0x19C32Cu;
            goto label_19c32c;
        }
    }
    ctx->pc = 0x19C30Cu;
    // 0x19c30c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x19c30cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c310: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x19c310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19c314: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19c314u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19c318: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19C318u;
    {
        const bool branch_taken_0x19c318 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x19c318) {
            ctx->pc = 0x19C32Cu;
            goto label_19c32c;
        }
    }
    ctx->pc = 0x19C320u;
    // 0x19c320: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19c320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c324: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x19C324u;
    SET_GPR_U32(ctx, 31, 0x19C32Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x19C324u, 0x19C32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C32Cu;
label_19c32c:
    // 0x19c32c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19c32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c330: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c334: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19c334u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19c338: 0x3e00008  jr          $ra
    ctx->pc = 0x19C338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C340u;
}
