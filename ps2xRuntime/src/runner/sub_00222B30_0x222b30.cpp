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

// Function: sub_00222B30
// Address: 0x222b30 - 0x222b90
void sub_00222B30_0x222b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222B30_0x222b30");
#endif

    switch (ctx->pc) {
        case 0x222b5cu: goto label_222b5c;
        case 0x222b7cu: goto label_222b7c;
        default: break;
    }

    ctx->pc = 0x222b30u;

    // 0x222b30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x222b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x222b34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x222b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x222b38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x222b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x222b3c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x222b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x222b40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x222b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222b44: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x222B44u;
    {
        const bool branch_taken_0x222b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222b44) {
            ctx->pc = 0x222B7Cu;
            goto label_222b7c;
        }
    }
    ctx->pc = 0x222B4Cu;
    // 0x222b4c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x222b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222b50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x222b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222b54: 0xc0888f0  jal         func_2223C0
    ctx->pc = 0x222B54u;
    SET_GPR_U32(ctx, 31, 0x222B5Cu);
    ctx->pc = 0x2223C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2223C0u, 0x222B54u, 0x222B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222B5Cu;
label_222b5c:
    // 0x222b5c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x222b5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222b60: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x222b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x222b64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x222b64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x222b68: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x222B68u;
    {
        const bool branch_taken_0x222b68 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x222b68) {
            ctx->pc = 0x222B7Cu;
            goto label_222b7c;
        }
    }
    ctx->pc = 0x222B70u;
    // 0x222b70: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x222b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222b74: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x222B74u;
    SET_GPR_U32(ctx, 31, 0x222B7Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x222B74u, 0x222B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222B7Cu;
label_222b7c:
    // 0x222b7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x222b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222b80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x222b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222b84: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x222b84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x222b88: 0x3e00008  jr          $ra
    ctx->pc = 0x222B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222B90u;
}
