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

// Function: sub_00221C80
// Address: 0x221c80 - 0x221d00
void sub_00221C80_0x221c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221C80_0x221c80");
#endif

    switch (ctx->pc) {
        case 0x221cb4u: goto label_221cb4;
        case 0x221cc4u: goto label_221cc4;
        case 0x221ce4u: goto label_221ce4;
        default: break;
    }

    ctx->pc = 0x221c80u;

    // 0x221c80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x221c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x221c84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x221c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x221c88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x221c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x221c8c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x221c8cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x221c90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x221c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221c94: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x221C94u;
    {
        const bool branch_taken_0x221c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221c94) {
            ctx->pc = 0x221CE4u;
            goto label_221ce4;
        }
    }
    ctx->pc = 0x221C9Cu;
    // 0x221c9c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x221c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221ca0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x221ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221ca4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x221ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x221ca8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x221ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x221cac: 0xc0886cc  jal         func_221B30
    ctx->pc = 0x221CACu;
    SET_GPR_U32(ctx, 31, 0x221CB4u);
    ctx->pc = 0x221B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221B30u, 0x221CACu, 0x221CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221CB4u;
label_221cb4:
    // 0x221cb4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x221cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221cb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x221cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221cbc: 0xc088740  jal         func_221D00
    ctx->pc = 0x221CBCu;
    SET_GPR_U32(ctx, 31, 0x221CC4u);
    ctx->pc = 0x221D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221D00u, 0x221CBCu, 0x221CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221CC4u;
label_221cc4:
    // 0x221cc4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x221cc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221cc8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x221cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x221ccc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x221cccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x221cd0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x221CD0u;
    {
        const bool branch_taken_0x221cd0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x221cd0) {
            ctx->pc = 0x221CE4u;
            goto label_221ce4;
        }
    }
    ctx->pc = 0x221CD8u;
    // 0x221cd8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x221cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221cdc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x221CDCu;
    SET_GPR_U32(ctx, 31, 0x221CE4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x221CDCu, 0x221CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221CE4u;
label_221ce4:
    // 0x221ce4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x221ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221ce8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221cec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x221cecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x221cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x221CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221CF8u;
    // 0x221cf8: 0x0  nop
    ctx->pc = 0x221cf8u;
    // NOP
    // 0x221cfc: 0x0  nop
    ctx->pc = 0x221cfcu;
    // NOP
    ctx->pc = 0x221d00u;
}
