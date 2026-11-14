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

// Function: sub_0045A0E0
// Address: 0x45a0e0 - 0x45a190
void sub_0045A0E0_0x45a0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045A0E0_0x45a0e0");
#endif

    switch (ctx->pc) {
        case 0x45a110u: goto label_45a110;
        case 0x45a144u: goto label_45a144;
        case 0x45a164u: goto label_45a164;
        default: break;
    }

    ctx->pc = 0x45a0e0u;

    // 0x45a0e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x45a0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x45a0e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x45a0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x45a0e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45a0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x45a0ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45a0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45a0f0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x45a0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x45a0f4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x45a0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x45a0f8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x45a0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x45a0fc: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x45a0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x45a100: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x45a100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45a104: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x45a104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45a108: 0xc116b30  jal         func_45ACC0
    ctx->pc = 0x45A108u;
    SET_GPR_U32(ctx, 31, 0x45A110u);
    ctx->pc = 0x45ACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45ACC0u, 0x45A108u, 0x45A110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A110u;
label_45a110:
    // 0x45a110: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45a110u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45a114: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x45a114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x45a118: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x45A118u;
    {
        const bool branch_taken_0x45a118 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x45a118) {
            ctx->pc = 0x45A12Cu;
            goto label_45a12c;
        }
    }
    ctx->pc = 0x45A120u;
    // 0x45a120: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x45a120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x45a124: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x45A124u;
    {
        const bool branch_taken_0x45a124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a124) {
            ctx->pc = 0x45A170u;
            goto label_45a170;
        }
    }
    ctx->pc = 0x45A12Cu;
label_45a12c:
    // 0x45a12c: 0x8fb10060  lw          $s1, 0x60($sp)
    ctx->pc = 0x45a12cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x45a130: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x45a130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45a134: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x45a134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x45a138: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x45a138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45a13c: 0xc116864  jal         func_45A190
    ctx->pc = 0x45A13Cu;
    SET_GPR_U32(ctx, 31, 0x45A144u);
    ctx->pc = 0x45A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45A190u, 0x45A13Cu, 0x45A144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A144u;
label_45a144:
    // 0x45a144: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45a144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45a148: 0xac51012c  sw          $s1, 0x12C($v0)
    ctx->pc = 0x45a148u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 300), GPR_U32(ctx, 17));
    // 0x45a14c: 0x8fb10050  lw          $s1, 0x50($sp)
    ctx->pc = 0x45a14cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x45a150: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x45a150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45a154: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x45a154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x45a158: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x45a158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45a15c: 0xc116864  jal         func_45A190
    ctx->pc = 0x45A15Cu;
    SET_GPR_U32(ctx, 31, 0x45A164u);
    ctx->pc = 0x45A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45A190u, 0x45A15Cu, 0x45A164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A164u;
label_45a164:
    // 0x45a164: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45a164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45a168: 0xac510128  sw          $s1, 0x128($v0)
    ctx->pc = 0x45a168u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 17));
    // 0x45a16c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45a16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45a170:
    // 0x45a170: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x45a170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45a174: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45a174u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45a178: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45a178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45a17c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x45a17cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x45a180: 0x3e00008  jr          $ra
    ctx->pc = 0x45A180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45A180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45A188u;
    // 0x45a188: 0x0  nop
    ctx->pc = 0x45a188u;
    // NOP
    // 0x45a18c: 0x0  nop
    ctx->pc = 0x45a18cu;
    // NOP
    ctx->pc = 0x45a190u;
}
