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

// Function: sub_002550C0
// Address: 0x2550c0 - 0x255160
void sub_002550C0_0x2550c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002550C0_0x2550c0");
#endif

    switch (ctx->pc) {
        case 0x2550e8u: goto label_2550e8;
        case 0x2550fcu: goto label_2550fc;
        case 0x255110u: goto label_255110;
        case 0x255124u: goto label_255124;
        case 0x255140u: goto label_255140;
        default: break;
    }

    ctx->pc = 0x2550c0u;

    // 0x2550c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2550c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2550c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2550c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2550c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2550c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2550cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2550ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2550d0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2550d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2550d4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2550d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2550d8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2550d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2550dc: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2550dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2550e0: 0xc09538c  jal         func_254E30
    ctx->pc = 0x2550E0u;
    SET_GPR_U32(ctx, 31, 0x2550E8u);
    ctx->pc = 0x254E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254E30u, 0x2550E0u, 0x2550E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2550E8u;
label_2550e8:
    // 0x2550e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2550e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2550ec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2550ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2550f0: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2550f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2550f4: 0xc095384  jal         func_254E10
    ctx->pc = 0x2550F4u;
    SET_GPR_U32(ctx, 31, 0x2550FCu);
    ctx->pc = 0x254E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254E10u, 0x2550F4u, 0x2550FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2550FCu;
label_2550fc:
    // 0x2550fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2550fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255100: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x255100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255104: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x255104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x255108: 0xc095cc4  jal         func_257310
    ctx->pc = 0x255108u;
    SET_GPR_U32(ctx, 31, 0x255110u);
    ctx->pc = 0x257310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257310u, 0x255108u, 0x255110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255110u;
label_255110:
    // 0x255110: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x255110u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255114: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x255114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x255118: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x255118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x25511c: 0xc095384  jal         func_254E10
    ctx->pc = 0x25511Cu;
    SET_GPR_U32(ctx, 31, 0x255124u);
    ctx->pc = 0x254E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254E10u, 0x25511Cu, 0x255124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255124u;
label_255124:
    // 0x255124: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x255124u;
    {
        const bool branch_taken_0x255124 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x255124) {
            ctx->pc = 0x255140u;
            goto label_255140;
        }
    }
    ctx->pc = 0x25512Cu;
    // 0x25512c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25512cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x255130: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x255130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x255134: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x255134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x255138: 0xc095458  jal         func_255160
    ctx->pc = 0x255138u;
    SET_GPR_U32(ctx, 31, 0x255140u);
    ctx->pc = 0x255160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255160u, 0x255138u, 0x255140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255140u;
label_255140:
    // 0x255140: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x255140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x255144: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x255144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x255148: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x255148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25514c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x25514cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x255150: 0x3e00008  jr          $ra
    ctx->pc = 0x255150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255158u;
    // 0x255158: 0x0  nop
    ctx->pc = 0x255158u;
    // NOP
    // 0x25515c: 0x0  nop
    ctx->pc = 0x25515cu;
    // NOP
    ctx->pc = 0x255160u;
}
