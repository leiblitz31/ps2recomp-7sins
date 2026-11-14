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

// Function: sub_0023BFA0
// Address: 0x23bfa0 - 0x23c010
void sub_0023BFA0_0x23bfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BFA0_0x23bfa0");
#endif

    switch (ctx->pc) {
        case 0x23bfd4u: goto label_23bfd4;
        case 0x23bff4u: goto label_23bff4;
        default: break;
    }

    ctx->pc = 0x23bfa0u;

    // 0x23bfa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23bfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23bfa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23bfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23bfa8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23bfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23bfac: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x23bfacu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x23bfb0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23bfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23bfb4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x23BFB4u;
    {
        const bool branch_taken_0x23bfb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bfb4) {
            ctx->pc = 0x23BFF4u;
            goto label_23bff4;
        }
    }
    ctx->pc = 0x23BFBCu;
    // 0x23bfbc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23bfc0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23bfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23bfc4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x23bfc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23bfc8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23bfc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23bfcc: 0xc08f898  jal         func_23E260
    ctx->pc = 0x23BFCCu;
    SET_GPR_U32(ctx, 31, 0x23BFD4u);
    ctx->pc = 0x23E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E260u, 0x23BFCCu, 0x23BFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BFD4u;
label_23bfd4:
    // 0x23bfd4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x23bfd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23bfd8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23bfd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23bfdc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23bfdcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x23bfe0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23BFE0u;
    {
        const bool branch_taken_0x23bfe0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23bfe0) {
            ctx->pc = 0x23BFF4u;
            goto label_23bff4;
        }
    }
    ctx->pc = 0x23BFE8u;
    // 0x23bfe8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23bfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23bfec: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x23BFECu;
    SET_GPR_U32(ctx, 31, 0x23BFF4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x23BFECu, 0x23BFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BFF4u;
label_23bff4:
    // 0x23bff4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23bff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23bff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23bff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bffc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23bffcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23c000: 0x3e00008  jr          $ra
    ctx->pc = 0x23C000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C008u;
    // 0x23c008: 0x0  nop
    ctx->pc = 0x23c008u;
    // NOP
    // 0x23c00c: 0x0  nop
    ctx->pc = 0x23c00cu;
    // NOP
    ctx->pc = 0x23c010u;
}
