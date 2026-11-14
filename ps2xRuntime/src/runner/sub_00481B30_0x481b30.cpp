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

// Function: sub_00481B30
// Address: 0x481b30 - 0x481bb0
void sub_00481B30_0x481b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481B30_0x481b30");
#endif

    switch (ctx->pc) {
        case 0x481b64u: goto label_481b64;
        case 0x481b74u: goto label_481b74;
        case 0x481b94u: goto label_481b94;
        default: break;
    }

    ctx->pc = 0x481b30u;

    // 0x481b30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x481b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x481b34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x481b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x481b38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x481b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x481b3c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x481b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x481b40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x481b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481b44: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x481B44u;
    {
        const bool branch_taken_0x481b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x481b44) {
            ctx->pc = 0x481B94u;
            goto label_481b94;
        }
    }
    ctx->pc = 0x481B4Cu;
    // 0x481b4c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x481b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481b50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x481b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481b54: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x481b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x481b58: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x481b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x481b5c: 0xc120744  jal         func_481D10
    ctx->pc = 0x481B5Cu;
    SET_GPR_U32(ctx, 31, 0x481B64u);
    ctx->pc = 0x481D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x481D10u, 0x481B5Cu, 0x481B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481B64u;
label_481b64:
    // 0x481b64: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x481b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481b68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x481b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481b6c: 0xc1206ec  jal         func_481BB0
    ctx->pc = 0x481B6Cu;
    SET_GPR_U32(ctx, 31, 0x481B74u);
    ctx->pc = 0x481BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x481BB0u, 0x481B6Cu, 0x481B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481B74u;
label_481b74:
    // 0x481b74: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x481b74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x481b78: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x481b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x481b7c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x481b7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x481b80: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x481B80u;
    {
        const bool branch_taken_0x481b80 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x481b80) {
            ctx->pc = 0x481B94u;
            goto label_481b94;
        }
    }
    ctx->pc = 0x481B88u;
    // 0x481b88: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x481b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481b8c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x481B8Cu;
    SET_GPR_U32(ctx, 31, 0x481B94u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x481B8Cu, 0x481B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481B94u;
label_481b94:
    // 0x481b94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x481b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481b98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x481b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x481b9c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x481b9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x481ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x481BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x481BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x481BA8u;
    // 0x481ba8: 0x0  nop
    ctx->pc = 0x481ba8u;
    // NOP
    // 0x481bac: 0x0  nop
    ctx->pc = 0x481bacu;
    // NOP
    ctx->pc = 0x481bb0u;
}
