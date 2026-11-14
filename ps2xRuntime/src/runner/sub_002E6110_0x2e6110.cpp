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

// Function: sub_002E6110
// Address: 0x2e6110 - 0x2e61b0
void sub_002E6110_0x2e6110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6110_0x2e6110");
#endif

    switch (ctx->pc) {
        case 0x2e6138u: goto label_2e6138;
        case 0x2e614cu: goto label_2e614c;
        case 0x2e6160u: goto label_2e6160;
        case 0x2e6178u: goto label_2e6178;
        case 0x2e618cu: goto label_2e618c;
        default: break;
    }

    ctx->pc = 0x2e6110u;

    // 0x2e6110: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e6110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e6114: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e6114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e6118: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e6118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e611c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e611cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e6120: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2e6120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2e6124: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2e6124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2e6128: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e6128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e612c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2e612cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2e6130: 0xc041010  jal         func_104040
    ctx->pc = 0x2E6130u;
    SET_GPR_U32(ctx, 31, 0x2E6138u);
    ctx->pc = 0x104040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104040u, 0x2E6130u, 0x2E6138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6138u;
label_2e6138:
    // 0x2e6138: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e6138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e613c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e613cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e6140: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2e6140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2e6144: 0xc040ff8  jal         func_103FE0
    ctx->pc = 0x2E6144u;
    SET_GPR_U32(ctx, 31, 0x2E614Cu);
    ctx->pc = 0x103FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FE0u, 0x2E6144u, 0x2E614Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E614Cu;
label_2e614c:
    // 0x2e614c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e614cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6150: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e6150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6154: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2e6154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e6158: 0xc058b78  jal         func_162DE0
    ctx->pc = 0x2E6158u;
    SET_GPR_U32(ctx, 31, 0x2E6160u);
    ctx->pc = 0x162DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162DE0u, 0x2E6158u, 0x2E6160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6160u;
label_2e6160:
    // 0x2e6160: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e6160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6164: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e6164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e6168: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2e6168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2e616c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e616cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6170: 0xc06fa28  jal         func_1BE8A0
    ctx->pc = 0x2E6170u;
    SET_GPR_U32(ctx, 31, 0x2E6178u);
    ctx->pc = 0x1BE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE8A0u, 0x2E6170u, 0x2E6178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6178u;
label_2e6178:
    // 0x2e6178: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e6178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e617c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2e617cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2e6180: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2e6180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e6184: 0xc0444e0  jal         func_111380
    ctx->pc = 0x2E6184u;
    SET_GPR_U32(ctx, 31, 0x2E618Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x2E6184u, 0x2E618Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E618Cu;
label_2e618c:
    // 0x2e618c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e618cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e6190: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e6190u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e6194: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e6194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e6198: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2e6198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e619c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E619Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E619Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E61A4u;
    // 0x2e61a4: 0x0  nop
    ctx->pc = 0x2e61a4u;
    // NOP
    // 0x2e61a8: 0x0  nop
    ctx->pc = 0x2e61a8u;
    // NOP
    // 0x2e61ac: 0x0  nop
    ctx->pc = 0x2e61acu;
    // NOP
    ctx->pc = 0x2e61b0u;
}
