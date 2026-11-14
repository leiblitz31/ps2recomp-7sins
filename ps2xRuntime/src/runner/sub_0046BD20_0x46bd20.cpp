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

// Function: sub_0046BD20
// Address: 0x46bd20 - 0x46bda0
void sub_0046BD20_0x46bd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046BD20_0x46bd20");
#endif

    switch (ctx->pc) {
        case 0x46bd54u: goto label_46bd54;
        case 0x46bd64u: goto label_46bd64;
        case 0x46bd84u: goto label_46bd84;
        default: break;
    }

    ctx->pc = 0x46bd20u;

    // 0x46bd20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46bd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46bd24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46bd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46bd28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46bd28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46bd2c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x46bd2cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x46bd30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46bd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46bd34: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x46BD34u;
    {
        const bool branch_taken_0x46bd34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46bd34) {
            ctx->pc = 0x46BD84u;
            goto label_46bd84;
        }
    }
    ctx->pc = 0x46BD3Cu;
    // 0x46bd3c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x46bd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46bd40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46bd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46bd44: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x46bd44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x46bd48: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x46bd48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x46bd4c: 0xc11af94  jal         func_46BE50
    ctx->pc = 0x46BD4Cu;
    SET_GPR_U32(ctx, 31, 0x46BD54u);
    ctx->pc = 0x46BE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BE50u, 0x46BD4Cu, 0x46BD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BD54u;
label_46bd54:
    // 0x46bd54: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46bd54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46bd58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x46bd58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46bd5c: 0xc11af68  jal         func_46BDA0
    ctx->pc = 0x46BD5Cu;
    SET_GPR_U32(ctx, 31, 0x46BD64u);
    ctx->pc = 0x46BDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BDA0u, 0x46BD5Cu, 0x46BD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BD64u;
label_46bd64:
    // 0x46bd64: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x46bd64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46bd68: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x46bd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x46bd6c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x46bd6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x46bd70: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x46BD70u;
    {
        const bool branch_taken_0x46bd70 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x46bd70) {
            ctx->pc = 0x46BD84u;
            goto label_46bd84;
        }
    }
    ctx->pc = 0x46BD78u;
    // 0x46bd78: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46bd78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46bd7c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x46BD7Cu;
    SET_GPR_U32(ctx, 31, 0x46BD84u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x46BD7Cu, 0x46BD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BD84u;
label_46bd84:
    // 0x46bd84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46bd88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46bd88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46bd8c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46bd8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46bd90: 0x3e00008  jr          $ra
    ctx->pc = 0x46BD90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46BD90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46BD98u;
    // 0x46bd98: 0x0  nop
    ctx->pc = 0x46bd98u;
    // NOP
    // 0x46bd9c: 0x0  nop
    ctx->pc = 0x46bd9cu;
    // NOP
    ctx->pc = 0x46bda0u;
}
