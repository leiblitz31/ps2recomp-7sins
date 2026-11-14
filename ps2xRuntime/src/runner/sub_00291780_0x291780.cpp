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

// Function: sub_00291780
// Address: 0x291780 - 0x291820
void sub_00291780_0x291780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291780_0x291780");
#endif

    switch (ctx->pc) {
        case 0x291780u: goto label_291780;
        case 0x291784u: goto label_291784;
        case 0x291788u: goto label_291788;
        case 0x29178cu: goto label_29178c;
        case 0x291790u: goto label_291790;
        case 0x291794u: goto label_291794;
        case 0x291798u: goto label_291798;
        case 0x29179cu: goto label_29179c;
        case 0x2917a0u: goto label_2917a0;
        case 0x2917a4u: goto label_2917a4;
        case 0x2917a8u: goto label_2917a8;
        case 0x2917acu: goto label_2917ac;
        case 0x2917b0u: goto label_2917b0;
        case 0x2917b4u: goto label_2917b4;
        case 0x2917b8u: goto label_2917b8;
        case 0x2917bcu: goto label_2917bc;
        case 0x2917c0u: goto label_2917c0;
        case 0x2917c4u: goto label_2917c4;
        case 0x2917c8u: goto label_2917c8;
        case 0x2917ccu: goto label_2917cc;
        case 0x2917d0u: goto label_2917d0;
        case 0x2917d4u: goto label_2917d4;
        case 0x2917d8u: goto label_2917d8;
        case 0x2917dcu: goto label_2917dc;
        case 0x2917e0u: goto label_2917e0;
        case 0x2917e4u: goto label_2917e4;
        case 0x2917e8u: goto label_2917e8;
        case 0x2917ecu: goto label_2917ec;
        case 0x2917f0u: goto label_2917f0;
        case 0x2917f4u: goto label_2917f4;
        case 0x2917f8u: goto label_2917f8;
        case 0x2917fcu: goto label_2917fc;
        case 0x291800u: goto label_291800;
        case 0x291804u: goto label_291804;
        case 0x291808u: goto label_291808;
        case 0x29180cu: goto label_29180c;
        case 0x291810u: goto label_291810;
        case 0x291814u: goto label_291814;
        case 0x291818u: goto label_291818;
        case 0x29181cu: goto label_29181c;
        default: break;
    }

    ctx->pc = 0x291780u;

label_291780:
    // 0x291780: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x291780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_291784:
    // 0x291784: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x291784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_291788:
    // 0x291788: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x291788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29178c:
    // 0x29178c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29178cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_291790:
    // 0x291790: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x291790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_291794:
    // 0x291794: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x291794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_291798:
    // 0x291798: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_29179c:
    if (ctx->pc == 0x29179Cu) {
        ctx->pc = 0x2917A0u;
        goto label_2917a0;
    }
    ctx->pc = 0x291798u;
    {
        const bool branch_taken_0x291798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x291798) {
            ctx->pc = 0x2917A8u;
            goto label_2917a8;
        }
    }
    ctx->pc = 0x2917A0u;
label_2917a0:
    // 0x2917a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2917a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2917a4:
    // 0x2917a4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2917a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_2917a8:
    // 0x2917a8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2917a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2917ac:
    // 0x2917ac: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2917acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2917b0:
    // 0x2917b0: 0xc119b68  jal         func_466DA0
label_2917b4:
    if (ctx->pc == 0x2917B4u) {
        ctx->pc = 0x2917B8u;
        goto label_2917b8;
    }
    ctx->pc = 0x2917B0u;
    SET_GPR_U32(ctx, 31, 0x2917B8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2917B0u, 0x2917B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2917B8u;
label_2917b8:
    // 0x2917b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2917b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2917bc:
    // 0x2917bc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2917c0:
    if (ctx->pc == 0x2917C0u) {
        ctx->pc = 0x2917C4u;
        goto label_2917c4;
    }
    ctx->pc = 0x2917BCu;
    {
        const bool branch_taken_0x2917bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2917bc) {
            ctx->pc = 0x2917D0u;
            goto label_2917d0;
        }
    }
    ctx->pc = 0x2917C4u;
label_2917c4:
    // 0x2917c4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2917c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2917c8:
    // 0x2917c8: 0x1000000e  b           . + 4 + (0xE << 2)
label_2917cc:
    if (ctx->pc == 0x2917CCu) {
        ctx->pc = 0x2917D0u;
        goto label_2917d0;
    }
    ctx->pc = 0x2917C8u;
    {
        const bool branch_taken_0x2917c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2917c8) {
            ctx->pc = 0x291804u;
            goto label_291804;
        }
    }
    ctx->pc = 0x2917D0u;
label_2917d0:
    // 0x2917d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2917d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2917d4:
    // 0x2917d4: 0xc0ba088  jal         func_2E8220
label_2917d8:
    if (ctx->pc == 0x2917D8u) {
        ctx->pc = 0x2917DCu;
        goto label_2917dc;
    }
    ctx->pc = 0x2917D4u;
    SET_GPR_U32(ctx, 31, 0x2917DCu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2917D4u, 0x2917DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2917DCu;
label_2917dc:
    // 0x2917dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2917dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2917e0:
    // 0x2917e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2917e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2917e4:
    // 0x2917e4: 0xc0ba088  jal         func_2E8220
label_2917e8:
    if (ctx->pc == 0x2917E8u) {
        ctx->pc = 0x2917ECu;
        goto label_2917ec;
    }
    ctx->pc = 0x2917E4u;
    SET_GPR_U32(ctx, 31, 0x2917ECu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2917E4u, 0x2917ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2917ECu;
label_2917ec:
    // 0x2917ec: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_2917f0:
    if (ctx->pc == 0x2917F0u) {
        ctx->pc = 0x2917F4u;
        goto label_2917f4;
    }
    ctx->pc = 0x2917ECu;
    {
        const bool branch_taken_0x2917ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2917ec) {
            ctx->pc = 0x2917A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2917a8;
        }
    }
    ctx->pc = 0x2917F4u;
label_2917f4:
    // 0x2917f4: 0x200f809  jalr        $s0
label_2917f8:
    if (ctx->pc == 0x2917F8u) {
        ctx->pc = 0x2917FCu;
        goto label_2917fc;
    }
    ctx->pc = 0x2917F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2917FCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2917F4u, 0x2917FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2917FCu;
label_2917fc:
    // 0x2917fc: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_291800:
    if (ctx->pc == 0x291800u) {
        ctx->pc = 0x291804u;
        goto label_291804;
    }
    ctx->pc = 0x2917FCu;
    {
        const bool branch_taken_0x2917fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2917fc) {
            ctx->pc = 0x2917A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2917a8;
        }
    }
    ctx->pc = 0x291804u;
label_291804:
    // 0x291804: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x291804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_291808:
    // 0x291808: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x291808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29180c:
    // 0x29180c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29180cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_291810:
    // 0x291810: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x291810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_291814:
    // 0x291814: 0x3e00008  jr          $ra
label_291818:
    if (ctx->pc == 0x291818u) {
        ctx->pc = 0x29181Cu;
        goto label_29181c;
    }
    ctx->pc = 0x291814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29181Cu;
label_29181c:
    // 0x29181c: 0x0  nop
    ctx->pc = 0x29181cu;
    // NOP
    ctx->pc = 0x291820u;
}
