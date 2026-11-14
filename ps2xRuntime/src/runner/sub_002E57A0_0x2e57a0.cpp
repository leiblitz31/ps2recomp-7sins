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

// Function: sub_002E57A0
// Address: 0x2e57a0 - 0x2e5840
void sub_002E57A0_0x2e57a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E57A0_0x2e57a0");
#endif

    switch (ctx->pc) {
        case 0x2e57a0u: goto label_2e57a0;
        case 0x2e57a4u: goto label_2e57a4;
        case 0x2e57a8u: goto label_2e57a8;
        case 0x2e57acu: goto label_2e57ac;
        case 0x2e57b0u: goto label_2e57b0;
        case 0x2e57b4u: goto label_2e57b4;
        case 0x2e57b8u: goto label_2e57b8;
        case 0x2e57bcu: goto label_2e57bc;
        case 0x2e57c0u: goto label_2e57c0;
        case 0x2e57c4u: goto label_2e57c4;
        case 0x2e57c8u: goto label_2e57c8;
        case 0x2e57ccu: goto label_2e57cc;
        case 0x2e57d0u: goto label_2e57d0;
        case 0x2e57d4u: goto label_2e57d4;
        case 0x2e57d8u: goto label_2e57d8;
        case 0x2e57dcu: goto label_2e57dc;
        case 0x2e57e0u: goto label_2e57e0;
        case 0x2e57e4u: goto label_2e57e4;
        case 0x2e57e8u: goto label_2e57e8;
        case 0x2e57ecu: goto label_2e57ec;
        case 0x2e57f0u: goto label_2e57f0;
        case 0x2e57f4u: goto label_2e57f4;
        case 0x2e57f8u: goto label_2e57f8;
        case 0x2e57fcu: goto label_2e57fc;
        case 0x2e5800u: goto label_2e5800;
        case 0x2e5804u: goto label_2e5804;
        case 0x2e5808u: goto label_2e5808;
        case 0x2e580cu: goto label_2e580c;
        case 0x2e5810u: goto label_2e5810;
        case 0x2e5814u: goto label_2e5814;
        case 0x2e5818u: goto label_2e5818;
        case 0x2e581cu: goto label_2e581c;
        case 0x2e5820u: goto label_2e5820;
        case 0x2e5824u: goto label_2e5824;
        case 0x2e5828u: goto label_2e5828;
        case 0x2e582cu: goto label_2e582c;
        case 0x2e5830u: goto label_2e5830;
        case 0x2e5834u: goto label_2e5834;
        case 0x2e5838u: goto label_2e5838;
        case 0x2e583cu: goto label_2e583c;
        default: break;
    }

    ctx->pc = 0x2e57a0u;

label_2e57a0:
    // 0x2e57a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e57a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2e57a4:
    // 0x2e57a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e57a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2e57a8:
    // 0x2e57a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e57a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e57ac:
    // 0x2e57ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e57acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e57b0:
    // 0x2e57b0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2e57b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_2e57b4:
    // 0x2e57b4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2e57b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2e57b8:
    // 0x2e57b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2e57bc:
    if (ctx->pc == 0x2E57BCu) {
        ctx->pc = 0x2E57C0u;
        goto label_2e57c0;
    }
    ctx->pc = 0x2E57B8u;
    {
        const bool branch_taken_0x2e57b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e57b8) {
            ctx->pc = 0x2E57C8u;
            goto label_2e57c8;
        }
    }
    ctx->pc = 0x2E57C0u;
label_2e57c0:
    // 0x2e57c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e57c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e57c4:
    // 0x2e57c4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2e57c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_2e57c8:
    // 0x2e57c8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2e57c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2e57cc:
    // 0x2e57cc: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2e57ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2e57d0:
    // 0x2e57d0: 0xc119b68  jal         func_466DA0
label_2e57d4:
    if (ctx->pc == 0x2E57D4u) {
        ctx->pc = 0x2E57D8u;
        goto label_2e57d8;
    }
    ctx->pc = 0x2E57D0u;
    SET_GPR_U32(ctx, 31, 0x2E57D8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2E57D0u, 0x2E57D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E57D8u;
label_2e57d8:
    // 0x2e57d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e57d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e57dc:
    // 0x2e57dc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2e57e0:
    if (ctx->pc == 0x2E57E0u) {
        ctx->pc = 0x2E57E4u;
        goto label_2e57e4;
    }
    ctx->pc = 0x2E57DCu;
    {
        const bool branch_taken_0x2e57dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e57dc) {
            ctx->pc = 0x2E57F0u;
            goto label_2e57f0;
        }
    }
    ctx->pc = 0x2E57E4u;
label_2e57e4:
    // 0x2e57e4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2e57e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e57e8:
    // 0x2e57e8: 0x1000000e  b           . + 4 + (0xE << 2)
label_2e57ec:
    if (ctx->pc == 0x2E57ECu) {
        ctx->pc = 0x2E57F0u;
        goto label_2e57f0;
    }
    ctx->pc = 0x2E57E8u;
    {
        const bool branch_taken_0x2e57e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e57e8) {
            ctx->pc = 0x2E5824u;
            goto label_2e5824;
        }
    }
    ctx->pc = 0x2E57F0u;
label_2e57f0:
    // 0x2e57f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e57f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e57f4:
    // 0x2e57f4: 0xc0ba088  jal         func_2E8220
label_2e57f8:
    if (ctx->pc == 0x2E57F8u) {
        ctx->pc = 0x2E57FCu;
        goto label_2e57fc;
    }
    ctx->pc = 0x2E57F4u;
    SET_GPR_U32(ctx, 31, 0x2E57FCu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2E57F4u, 0x2E57FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E57FCu;
label_2e57fc:
    // 0x2e57fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e57fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5800:
    // 0x2e5800: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e5804:
    // 0x2e5804: 0xc0ba088  jal         func_2E8220
label_2e5808:
    if (ctx->pc == 0x2E5808u) {
        ctx->pc = 0x2E580Cu;
        goto label_2e580c;
    }
    ctx->pc = 0x2E5804u;
    SET_GPR_U32(ctx, 31, 0x2E580Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2E5804u, 0x2E580Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E580Cu;
label_2e580c:
    // 0x2e580c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_2e5810:
    if (ctx->pc == 0x2E5810u) {
        ctx->pc = 0x2E5814u;
        goto label_2e5814;
    }
    ctx->pc = 0x2E580Cu;
    {
        const bool branch_taken_0x2e580c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e580c) {
            ctx->pc = 0x2E57C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e57c8;
        }
    }
    ctx->pc = 0x2E5814u;
label_2e5814:
    // 0x2e5814: 0x200f809  jalr        $s0
label_2e5818:
    if (ctx->pc == 0x2E5818u) {
        ctx->pc = 0x2E581Cu;
        goto label_2e581c;
    }
    ctx->pc = 0x2E5814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2E581Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5814u, 0x2E581Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E581Cu;
label_2e581c:
    // 0x2e581c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_2e5820:
    if (ctx->pc == 0x2E5820u) {
        ctx->pc = 0x2E5824u;
        goto label_2e5824;
    }
    ctx->pc = 0x2E581Cu;
    {
        const bool branch_taken_0x2e581c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e581c) {
            ctx->pc = 0x2E57C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e57c8;
        }
    }
    ctx->pc = 0x2E5824u;
label_2e5824:
    // 0x2e5824: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e5824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e5828:
    // 0x2e5828: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e5828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e582c:
    // 0x2e582c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e582cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e5830:
    // 0x2e5830: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2e5830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2e5834:
    // 0x2e5834: 0x3e00008  jr          $ra
label_2e5838:
    if (ctx->pc == 0x2E5838u) {
        ctx->pc = 0x2E583Cu;
        goto label_2e583c;
    }
    ctx->pc = 0x2E5834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E583Cu;
label_2e583c:
    // 0x2e583c: 0x0  nop
    ctx->pc = 0x2e583cu;
    // NOP
    ctx->pc = 0x2e5840u;
}
