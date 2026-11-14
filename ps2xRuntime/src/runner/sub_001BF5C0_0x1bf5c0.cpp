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

// Function: sub_001BF5C0
// Address: 0x1bf5c0 - 0x1bf660
void sub_001BF5C0_0x1bf5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BF5C0_0x1bf5c0");
#endif

    switch (ctx->pc) {
        case 0x1bf5e4u: goto label_1bf5e4;
        case 0x1bf5f0u: goto label_1bf5f0;
        case 0x1bf61cu: goto label_1bf61c;
        case 0x1bf638u: goto label_1bf638;
        default: break;
    }

    ctx->pc = 0x1bf5c0u;

    // 0x1bf5c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bf5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bf5c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bf5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bf5c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bf5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bf5cc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1bf5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1bf5d0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1bf5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1bf5d4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1bf5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bf5d8: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x1bf5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x1bf5dc: 0xc06ef1c  jal         func_1BBC70
    ctx->pc = 0x1BF5DCu;
    SET_GPR_U32(ctx, 31, 0x1BF5E4u);
    ctx->pc = 0x1BBC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBC70u, 0x1BF5DCu, 0x1BF5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF5E4u;
label_1bf5e4:
    // 0x1bf5e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bf5e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf5e8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1BF5E8u;
    {
        const bool branch_taken_0x1bf5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf5e8) {
            ctx->pc = 0x1BF628u;
            goto label_1bf628;
        }
    }
    ctx->pc = 0x1BF5F0u;
label_1bf5f0:
    // 0x1bf5f0: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x1bf5f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bf5f4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1bf5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1bf5f8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1bf5f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1bf5fc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1bf5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bf600: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BF600u;
    {
        const bool branch_taken_0x1bf600 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bf600) {
            ctx->pc = 0x1BF624u;
            goto label_1bf624;
        }
    }
    ctx->pc = 0x1BF608u;
    // 0x1bf608: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1bf608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bf60c: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x1bf60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x1bf610: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bf610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf614: 0xc06fd98  jal         func_1BF660
    ctx->pc = 0x1BF614u;
    SET_GPR_U32(ctx, 31, 0x1BF61Cu);
    ctx->pc = 0x1BF660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF660u, 0x1BF614u, 0x1BF61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF61Cu;
label_1bf61c:
    // 0x1bf61c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BF61Cu;
    {
        const bool branch_taken_0x1bf61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf61c) {
            ctx->pc = 0x1BF640u;
            goto label_1bf640;
        }
    }
    ctx->pc = 0x1BF624u;
label_1bf624:
    // 0x1bf624: 0x261000d0  addiu       $s0, $s0, 0xD0
    ctx->pc = 0x1bf624u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_1bf628:
    // 0x1bf628: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1bf628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bf62c: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x1bf62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x1bf630: 0xc06f438  jal         func_1BD0E0
    ctx->pc = 0x1BF630u;
    SET_GPR_U32(ctx, 31, 0x1BF638u);
    ctx->pc = 0x1BD0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD0E0u, 0x1BF630u, 0x1BF638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF638u;
label_1bf638:
    // 0x1bf638: 0x1602ffed  bne         $s0, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1BF638u;
    {
        const bool branch_taken_0x1bf638 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bf638) {
            ctx->pc = 0x1BF5F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bf5f0;
        }
    }
    ctx->pc = 0x1BF640u;
label_1bf640:
    // 0x1bf640: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bf640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf644: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bf644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf648: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1bf648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1bf64c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF654u;
    // 0x1bf654: 0x0  nop
    ctx->pc = 0x1bf654u;
    // NOP
    // 0x1bf658: 0x0  nop
    ctx->pc = 0x1bf658u;
    // NOP
    // 0x1bf65c: 0x0  nop
    ctx->pc = 0x1bf65cu;
    // NOP
    ctx->pc = 0x1bf660u;
}
