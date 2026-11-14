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

// Function: sub_00207B60
// Address: 0x207b60 - 0x207be0
void sub_00207B60_0x207b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207B60_0x207b60");
#endif

    switch (ctx->pc) {
        case 0x207b94u: goto label_207b94;
        case 0x207ba4u: goto label_207ba4;
        case 0x207bc4u: goto label_207bc4;
        default: break;
    }

    ctx->pc = 0x207b60u;

    // 0x207b60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x207b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x207b64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x207b68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x207b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x207b6c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x207b6cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x207b70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x207b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207b74: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x207B74u;
    {
        const bool branch_taken_0x207b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207b74) {
            ctx->pc = 0x207BC4u;
            goto label_207bc4;
        }
    }
    ctx->pc = 0x207B7Cu;
    // 0x207b7c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x207b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207b80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x207b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207b84: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x207b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x207b88: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x207b88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x207b8c: 0xc081f24  jal         func_207C90
    ctx->pc = 0x207B8Cu;
    SET_GPR_U32(ctx, 31, 0x207B94u);
    ctx->pc = 0x207C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207C90u, 0x207B8Cu, 0x207B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207B94u;
label_207b94:
    // 0x207b94: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x207b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207b98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x207b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207b9c: 0xc081ef8  jal         func_207BE0
    ctx->pc = 0x207B9Cu;
    SET_GPR_U32(ctx, 31, 0x207BA4u);
    ctx->pc = 0x207BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207BE0u, 0x207B9Cu, 0x207BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207BA4u;
label_207ba4:
    // 0x207ba4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x207ba4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x207ba8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x207ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x207bac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x207bacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x207bb0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x207BB0u;
    {
        const bool branch_taken_0x207bb0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x207bb0) {
            ctx->pc = 0x207BC4u;
            goto label_207bc4;
        }
    }
    ctx->pc = 0x207BB8u;
    // 0x207bb8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x207bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207bbc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x207BBCu;
    SET_GPR_U32(ctx, 31, 0x207BC4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x207BBCu, 0x207BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207BC4u;
label_207bc4:
    // 0x207bc4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x207bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207bc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207bcc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x207bccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x207bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x207BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207BD8u;
    // 0x207bd8: 0x0  nop
    ctx->pc = 0x207bd8u;
    // NOP
    // 0x207bdc: 0x0  nop
    ctx->pc = 0x207bdcu;
    // NOP
    ctx->pc = 0x207be0u;
}
