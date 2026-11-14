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

// Function: sub_00232B30
// Address: 0x232b30 - 0x232bb0
void sub_00232B30_0x232b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232B30_0x232b30");
#endif

    switch (ctx->pc) {
        case 0x232b90u: goto label_232b90;
        default: break;
    }

    ctx->pc = 0x232b30u;

    // 0x232b30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x232b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x232b34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x232b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x232b38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x232b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x232b3c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x232b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x232b40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x232b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232b44: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x232b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x232b48: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x232B48u;
    {
        const bool branch_taken_0x232b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232b48) {
            ctx->pc = 0x232B5Cu;
            goto label_232b5c;
        }
    }
    ctx->pc = 0x232B50u;
    // 0x232b50: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x232b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232b54: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x232B54u;
    {
        const bool branch_taken_0x232b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232b54) {
            ctx->pc = 0x232B7Cu;
            goto label_232b7c;
        }
    }
    ctx->pc = 0x232B5Cu;
label_232b5c:
    // 0x232b5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x232b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232b60: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x232b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x232b64: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x232b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232b68: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x232b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x232b6c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x232b6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x232b70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x232b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x232b74: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x232B74u;
    {
        const bool branch_taken_0x232b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x232b74) {
            ctx->pc = 0x232B9Cu;
            goto label_232b9c;
        }
    }
    ctx->pc = 0x232B7Cu;
label_232b7c:
    // 0x232b7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x232b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232b80: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x232b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x232b84: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x232b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232b88: 0xc119210  jal         func_464840
    ctx->pc = 0x232B88u;
    SET_GPR_U32(ctx, 31, 0x232B90u);
    ctx->pc = 0x464840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464840u, 0x232B88u, 0x232B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232B90u;
label_232b90:
    // 0x232b90: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x232b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x232b94: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x232b94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x232b98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x232b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_232b9c:
    // 0x232b9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x232b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232ba0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x232ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x232ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x232BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232BACu;
    // 0x232bac: 0x0  nop
    ctx->pc = 0x232bacu;
    // NOP
    ctx->pc = 0x232bb0u;
}
