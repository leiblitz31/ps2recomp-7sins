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

// Function: sub_002BEB20
// Address: 0x2beb20 - 0x2beba0
void sub_002BEB20_0x2beb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BEB20_0x2beb20");
#endif

    switch (ctx->pc) {
        case 0x2beb54u: goto label_2beb54;
        case 0x2beb64u: goto label_2beb64;
        case 0x2beb84u: goto label_2beb84;
        default: break;
    }

    ctx->pc = 0x2beb20u;

    // 0x2beb20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2beb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2beb24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2beb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2beb28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2beb28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2beb2c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2beb2cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2beb30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2beb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2beb34: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2BEB34u;
    {
        const bool branch_taken_0x2beb34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2beb34) {
            ctx->pc = 0x2BEB84u;
            goto label_2beb84;
        }
    }
    ctx->pc = 0x2BEB3Cu;
    // 0x2beb3c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2beb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2beb40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2beb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2beb44: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2beb44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2beb48: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2beb48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2beb4c: 0xc0afb14  jal         func_2BEC50
    ctx->pc = 0x2BEB4Cu;
    SET_GPR_U32(ctx, 31, 0x2BEB54u);
    ctx->pc = 0x2BEC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEC50u, 0x2BEB4Cu, 0x2BEB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEB54u;
label_2beb54:
    // 0x2beb54: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2beb54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2beb58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2beb58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2beb5c: 0xc0afae8  jal         func_2BEBA0
    ctx->pc = 0x2BEB5Cu;
    SET_GPR_U32(ctx, 31, 0x2BEB64u);
    ctx->pc = 0x2BEBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEBA0u, 0x2BEB5Cu, 0x2BEB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEB64u;
label_2beb64:
    // 0x2beb64: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2beb64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2beb68: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2beb68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2beb6c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2beb6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2beb70: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BEB70u;
    {
        const bool branch_taken_0x2beb70 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2beb70) {
            ctx->pc = 0x2BEB84u;
            goto label_2beb84;
        }
    }
    ctx->pc = 0x2BEB78u;
    // 0x2beb78: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2beb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2beb7c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2BEB7Cu;
    SET_GPR_U32(ctx, 31, 0x2BEB84u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2BEB7Cu, 0x2BEB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEB84u;
label_2beb84:
    // 0x2beb84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2beb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2beb88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2beb88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2beb8c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2beb8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2beb90: 0x3e00008  jr          $ra
    ctx->pc = 0x2BEB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEB90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BEB98u;
    // 0x2beb98: 0x0  nop
    ctx->pc = 0x2beb98u;
    // NOP
    // 0x2beb9c: 0x0  nop
    ctx->pc = 0x2beb9cu;
    // NOP
    ctx->pc = 0x2beba0u;
}
