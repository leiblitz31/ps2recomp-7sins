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

// Function: sub_00282090
// Address: 0x282090 - 0x282130
void sub_00282090_0x282090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282090_0x282090");
#endif

    switch (ctx->pc) {
        case 0x282090u: goto label_282090;
        case 0x282094u: goto label_282094;
        case 0x282098u: goto label_282098;
        case 0x28209cu: goto label_28209c;
        case 0x2820a0u: goto label_2820a0;
        case 0x2820a4u: goto label_2820a4;
        case 0x2820a8u: goto label_2820a8;
        case 0x2820acu: goto label_2820ac;
        case 0x2820b0u: goto label_2820b0;
        case 0x2820b4u: goto label_2820b4;
        case 0x2820b8u: goto label_2820b8;
        case 0x2820bcu: goto label_2820bc;
        case 0x2820c0u: goto label_2820c0;
        case 0x2820c4u: goto label_2820c4;
        case 0x2820c8u: goto label_2820c8;
        case 0x2820ccu: goto label_2820cc;
        case 0x2820d0u: goto label_2820d0;
        case 0x2820d4u: goto label_2820d4;
        case 0x2820d8u: goto label_2820d8;
        case 0x2820dcu: goto label_2820dc;
        case 0x2820e0u: goto label_2820e0;
        case 0x2820e4u: goto label_2820e4;
        case 0x2820e8u: goto label_2820e8;
        case 0x2820ecu: goto label_2820ec;
        case 0x2820f0u: goto label_2820f0;
        case 0x2820f4u: goto label_2820f4;
        case 0x2820f8u: goto label_2820f8;
        case 0x2820fcu: goto label_2820fc;
        case 0x282100u: goto label_282100;
        case 0x282104u: goto label_282104;
        case 0x282108u: goto label_282108;
        case 0x28210cu: goto label_28210c;
        case 0x282110u: goto label_282110;
        case 0x282114u: goto label_282114;
        case 0x282118u: goto label_282118;
        case 0x28211cu: goto label_28211c;
        case 0x282120u: goto label_282120;
        case 0x282124u: goto label_282124;
        case 0x282128u: goto label_282128;
        case 0x28212cu: goto label_28212c;
        default: break;
    }

    ctx->pc = 0x282090u;

label_282090:
    // 0x282090: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x282090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_282094:
    // 0x282094: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x282094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_282098:
    // 0x282098: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x282098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_28209c:
    // 0x28209c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28209cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2820a0:
    // 0x2820a0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2820a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_2820a4:
    // 0x2820a4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2820a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2820a8:
    // 0x2820a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2820ac:
    if (ctx->pc == 0x2820ACu) {
        ctx->pc = 0x2820B0u;
        goto label_2820b0;
    }
    ctx->pc = 0x2820A8u;
    {
        const bool branch_taken_0x2820a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2820a8) {
            ctx->pc = 0x2820B8u;
            goto label_2820b8;
        }
    }
    ctx->pc = 0x2820B0u;
label_2820b0:
    // 0x2820b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2820b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2820b4:
    // 0x2820b4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2820b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_2820b8:
    // 0x2820b8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2820b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2820bc:
    // 0x2820bc: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2820bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2820c0:
    // 0x2820c0: 0xc119b68  jal         func_466DA0
label_2820c4:
    if (ctx->pc == 0x2820C4u) {
        ctx->pc = 0x2820C8u;
        goto label_2820c8;
    }
    ctx->pc = 0x2820C0u;
    SET_GPR_U32(ctx, 31, 0x2820C8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2820C0u, 0x2820C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2820C8u;
label_2820c8:
    // 0x2820c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2820c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2820cc:
    // 0x2820cc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2820d0:
    if (ctx->pc == 0x2820D0u) {
        ctx->pc = 0x2820D4u;
        goto label_2820d4;
    }
    ctx->pc = 0x2820CCu;
    {
        const bool branch_taken_0x2820cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2820cc) {
            ctx->pc = 0x2820E0u;
            goto label_2820e0;
        }
    }
    ctx->pc = 0x2820D4u;
label_2820d4:
    // 0x2820d4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2820d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2820d8:
    // 0x2820d8: 0x1000000e  b           . + 4 + (0xE << 2)
label_2820dc:
    if (ctx->pc == 0x2820DCu) {
        ctx->pc = 0x2820E0u;
        goto label_2820e0;
    }
    ctx->pc = 0x2820D8u;
    {
        const bool branch_taken_0x2820d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2820d8) {
            ctx->pc = 0x282114u;
            goto label_282114;
        }
    }
    ctx->pc = 0x2820E0u;
label_2820e0:
    // 0x2820e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2820e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2820e4:
    // 0x2820e4: 0xc0ba088  jal         func_2E8220
label_2820e8:
    if (ctx->pc == 0x2820E8u) {
        ctx->pc = 0x2820ECu;
        goto label_2820ec;
    }
    ctx->pc = 0x2820E4u;
    SET_GPR_U32(ctx, 31, 0x2820ECu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2820E4u, 0x2820ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2820ECu;
label_2820ec:
    // 0x2820ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2820ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2820f0:
    // 0x2820f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2820f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2820f4:
    // 0x2820f4: 0xc0ba088  jal         func_2E8220
label_2820f8:
    if (ctx->pc == 0x2820F8u) {
        ctx->pc = 0x2820FCu;
        goto label_2820fc;
    }
    ctx->pc = 0x2820F4u;
    SET_GPR_U32(ctx, 31, 0x2820FCu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2820F4u, 0x2820FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2820FCu;
label_2820fc:
    // 0x2820fc: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_282100:
    if (ctx->pc == 0x282100u) {
        ctx->pc = 0x282104u;
        goto label_282104;
    }
    ctx->pc = 0x2820FCu;
    {
        const bool branch_taken_0x2820fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2820fc) {
            ctx->pc = 0x2820B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2820b8;
        }
    }
    ctx->pc = 0x282104u;
label_282104:
    // 0x282104: 0x200f809  jalr        $s0
label_282108:
    if (ctx->pc == 0x282108u) {
        ctx->pc = 0x28210Cu;
        goto label_28210c;
    }
    ctx->pc = 0x282104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x28210Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282104u, 0x28210Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28210Cu;
label_28210c:
    // 0x28210c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_282110:
    if (ctx->pc == 0x282110u) {
        ctx->pc = 0x282114u;
        goto label_282114;
    }
    ctx->pc = 0x28210Cu;
    {
        const bool branch_taken_0x28210c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28210c) {
            ctx->pc = 0x2820B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2820b8;
        }
    }
    ctx->pc = 0x282114u;
label_282114:
    // 0x282114: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x282114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_282118:
    // 0x282118: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x282118u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28211c:
    // 0x28211c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28211cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_282120:
    // 0x282120: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x282120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_282124:
    // 0x282124: 0x3e00008  jr          $ra
label_282128:
    if (ctx->pc == 0x282128u) {
        ctx->pc = 0x28212Cu;
        goto label_28212c;
    }
    ctx->pc = 0x282124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28212Cu;
label_28212c:
    // 0x28212c: 0x0  nop
    ctx->pc = 0x28212cu;
    // NOP
    ctx->pc = 0x282130u;
}
