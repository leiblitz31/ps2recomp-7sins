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

// Function: sub_001AEDC0
// Address: 0x1aedc0 - 0x1aee40
void sub_001AEDC0_0x1aedc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AEDC0_0x1aedc0");
#endif

    switch (ctx->pc) {
        case 0x1aedf4u: goto label_1aedf4;
        case 0x1aee04u: goto label_1aee04;
        case 0x1aee24u: goto label_1aee24;
        default: break;
    }

    ctx->pc = 0x1aedc0u;

    // 0x1aedc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aedc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aedc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aedc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aedc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1aedc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1aedcc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1aedccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1aedd0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1aedd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aedd4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AEDD4u;
    {
        const bool branch_taken_0x1aedd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aedd4) {
            ctx->pc = 0x1AEE24u;
            goto label_1aee24;
        }
    }
    ctx->pc = 0x1AEDDCu;
    // 0x1aeddc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1aeddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aede0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1aede0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aede4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1aede4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aede8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1aede8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1aedec: 0xc06bbb8  jal         func_1AEEE0
    ctx->pc = 0x1AEDECu;
    SET_GPR_U32(ctx, 31, 0x1AEDF4u);
    ctx->pc = 0x1AEEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEEE0u, 0x1AEDECu, 0x1AEDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEDF4u;
label_1aedf4:
    // 0x1aedf4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1aedf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aedf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aedf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aedfc: 0xc06bb90  jal         func_1AEE40
    ctx->pc = 0x1AEDFCu;
    SET_GPR_U32(ctx, 31, 0x1AEE04u);
    ctx->pc = 0x1AEE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEE40u, 0x1AEDFCu, 0x1AEE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEE04u;
label_1aee04:
    // 0x1aee04: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1aee04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aee08: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1aee08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1aee0c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1aee0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1aee10: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AEE10u;
    {
        const bool branch_taken_0x1aee10 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1aee10) {
            ctx->pc = 0x1AEE24u;
            goto label_1aee24;
        }
    }
    ctx->pc = 0x1AEE18u;
    // 0x1aee18: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1aee18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aee1c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1AEE1Cu;
    SET_GPR_U32(ctx, 31, 0x1AEE24u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1AEE1Cu, 0x1AEE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEE24u;
label_1aee24:
    // 0x1aee24: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1aee24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aee28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aee28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aee2c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1aee2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1aee30: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEE30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AEE38u;
    // 0x1aee38: 0x0  nop
    ctx->pc = 0x1aee38u;
    // NOP
    // 0x1aee3c: 0x0  nop
    ctx->pc = 0x1aee3cu;
    // NOP
    ctx->pc = 0x1aee40u;
}
