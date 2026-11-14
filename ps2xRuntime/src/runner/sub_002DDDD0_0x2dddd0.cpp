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

// Function: sub_002DDDD0
// Address: 0x2dddd0 - 0x2dde50
void sub_002DDDD0_0x2dddd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDDD0_0x2dddd0");
#endif

    switch (ctx->pc) {
        case 0x2dde04u: goto label_2dde04;
        case 0x2dde14u: goto label_2dde14;
        case 0x2dde34u: goto label_2dde34;
        default: break;
    }

    ctx->pc = 0x2dddd0u;

    // 0x2dddd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dddd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dddd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dddd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dddd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2dddd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2ddddc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2ddddcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2ddde0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ddde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ddde4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2DDDE4u;
    {
        const bool branch_taken_0x2ddde4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddde4) {
            ctx->pc = 0x2DDE34u;
            goto label_2dde34;
        }
    }
    ctx->pc = 0x2DDDECu;
    // 0x2dddec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2dddecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dddf0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dddf4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2dddf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dddf8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2dddf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dddfc: 0xc0b77c0  jal         func_2DDF00
    ctx->pc = 0x2DDDFCu;
    SET_GPR_U32(ctx, 31, 0x2DDE04u);
    ctx->pc = 0x2DDF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDF00u, 0x2DDDFCu, 0x2DDE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDE04u;
label_2dde04:
    // 0x2dde04: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2dde04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dde08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dde08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dde0c: 0xc0b7794  jal         func_2DDE50
    ctx->pc = 0x2DDE0Cu;
    SET_GPR_U32(ctx, 31, 0x2DDE14u);
    ctx->pc = 0x2DDE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDE50u, 0x2DDE0Cu, 0x2DDE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDE14u;
label_2dde14:
    // 0x2dde14: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2dde14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dde18: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2dde18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2dde1c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2dde1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2dde20: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DDE20u;
    {
        const bool branch_taken_0x2dde20 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2dde20) {
            ctx->pc = 0x2DDE34u;
            goto label_2dde34;
        }
    }
    ctx->pc = 0x2DDE28u;
    // 0x2dde28: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2dde28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dde2c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2DDE2Cu;
    SET_GPR_U32(ctx, 31, 0x2DDE34u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2DDE2Cu, 0x2DDE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDE34u;
label_2dde34:
    // 0x2dde34: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dde34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dde38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dde38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dde3c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2dde3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dde40: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDE40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDE48u;
    // 0x2dde48: 0x0  nop
    ctx->pc = 0x2dde48u;
    // NOP
    // 0x2dde4c: 0x0  nop
    ctx->pc = 0x2dde4cu;
    // NOP
    ctx->pc = 0x2dde50u;
}
