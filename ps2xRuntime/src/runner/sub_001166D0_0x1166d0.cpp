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

// Function: sub_001166D0
// Address: 0x1166d0 - 0x116780
void sub_001166D0_0x1166d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001166D0_0x1166d0");
#endif

    switch (ctx->pc) {
        case 0x1166d0u: goto label_1166d0;
        case 0x1166d4u: goto label_1166d4;
        case 0x1166d8u: goto label_1166d8;
        case 0x1166dcu: goto label_1166dc;
        case 0x1166e0u: goto label_1166e0;
        case 0x1166e4u: goto label_1166e4;
        case 0x1166e8u: goto label_1166e8;
        case 0x1166ecu: goto label_1166ec;
        case 0x1166f0u: goto label_1166f0;
        case 0x1166f4u: goto label_1166f4;
        case 0x1166f8u: goto label_1166f8;
        case 0x1166fcu: goto label_1166fc;
        case 0x116700u: goto label_116700;
        case 0x116704u: goto label_116704;
        case 0x116708u: goto label_116708;
        case 0x11670cu: goto label_11670c;
        case 0x116710u: goto label_116710;
        case 0x116714u: goto label_116714;
        case 0x116718u: goto label_116718;
        case 0x11671cu: goto label_11671c;
        case 0x116720u: goto label_116720;
        case 0x116724u: goto label_116724;
        case 0x116728u: goto label_116728;
        case 0x11672cu: goto label_11672c;
        case 0x116730u: goto label_116730;
        case 0x116734u: goto label_116734;
        case 0x116738u: goto label_116738;
        case 0x11673cu: goto label_11673c;
        case 0x116740u: goto label_116740;
        case 0x116744u: goto label_116744;
        case 0x116748u: goto label_116748;
        case 0x11674cu: goto label_11674c;
        case 0x116750u: goto label_116750;
        case 0x116754u: goto label_116754;
        case 0x116758u: goto label_116758;
        case 0x11675cu: goto label_11675c;
        case 0x116760u: goto label_116760;
        case 0x116764u: goto label_116764;
        case 0x116768u: goto label_116768;
        case 0x11676cu: goto label_11676c;
        case 0x116770u: goto label_116770;
        case 0x116774u: goto label_116774;
        case 0x116778u: goto label_116778;
        case 0x11677cu: goto label_11677c;
        default: break;
    }

    ctx->pc = 0x1166d0u;

label_1166d0:
    // 0x1166d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1166d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1166d4:
    // 0x1166d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1166d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1166d8:
    // 0x1166d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1166d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1166dc:
    // 0x1166dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1166dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1166e0:
    // 0x1166e0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1166e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_1166e4:
    // 0x1166e4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1166e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1166e8:
    // 0x1166e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1166ec:
    if (ctx->pc == 0x1166ECu) {
        ctx->pc = 0x1166F0u;
        goto label_1166f0;
    }
    ctx->pc = 0x1166E8u;
    {
        const bool branch_taken_0x1166e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1166e8) {
            ctx->pc = 0x1166F8u;
            goto label_1166f8;
        }
    }
    ctx->pc = 0x1166F0u;
label_1166f0:
    // 0x1166f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1166f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1166f4:
    // 0x1166f4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1166f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1166f8:
    // 0x1166f8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1166f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1166fc:
    // 0x1166fc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1166fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_116700:
    // 0x116700: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x116700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_116704:
    // 0x116704: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x116704u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_116708:
    // 0x116708: 0xc119b68  jal         func_466DA0
label_11670c:
    if (ctx->pc == 0x11670Cu) {
        ctx->pc = 0x116710u;
        goto label_116710;
    }
    ctx->pc = 0x116708u;
    SET_GPR_U32(ctx, 31, 0x116710u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x116708u, 0x116710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116710u;
label_116710:
    // 0x116710: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x116710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_116714:
    // 0x116714: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_116718:
    if (ctx->pc == 0x116718u) {
        ctx->pc = 0x11671Cu;
        goto label_11671c;
    }
    ctx->pc = 0x116714u;
    {
        const bool branch_taken_0x116714 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x116714) {
            ctx->pc = 0x116728u;
            goto label_116728;
        }
    }
    ctx->pc = 0x11671Cu;
label_11671c:
    // 0x11671c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x11671cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_116720:
    // 0x116720: 0x1000000e  b           . + 4 + (0xE << 2)
label_116724:
    if (ctx->pc == 0x116724u) {
        ctx->pc = 0x116728u;
        goto label_116728;
    }
    ctx->pc = 0x116720u;
    {
        const bool branch_taken_0x116720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x116720) {
            ctx->pc = 0x11675Cu;
            goto label_11675c;
        }
    }
    ctx->pc = 0x116728u;
label_116728:
    // 0x116728: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x116728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11672c:
    // 0x11672c: 0xc0ba088  jal         func_2E8220
label_116730:
    if (ctx->pc == 0x116730u) {
        ctx->pc = 0x116734u;
        goto label_116734;
    }
    ctx->pc = 0x11672Cu;
    SET_GPR_U32(ctx, 31, 0x116734u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x11672Cu, 0x116734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116734u;
label_116734:
    // 0x116734: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x116734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_116738:
    // 0x116738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11673c:
    // 0x11673c: 0xc0ba088  jal         func_2E8220
label_116740:
    if (ctx->pc == 0x116740u) {
        ctx->pc = 0x116744u;
        goto label_116744;
    }
    ctx->pc = 0x11673Cu;
    SET_GPR_U32(ctx, 31, 0x116744u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x11673Cu, 0x116744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116744u;
label_116744:
    // 0x116744: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_116748:
    if (ctx->pc == 0x116748u) {
        ctx->pc = 0x11674Cu;
        goto label_11674c;
    }
    ctx->pc = 0x116744u;
    {
        const bool branch_taken_0x116744 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x116744) {
            ctx->pc = 0x1166F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1166f8;
        }
    }
    ctx->pc = 0x11674Cu;
label_11674c:
    // 0x11674c: 0x200f809  jalr        $s0
label_116750:
    if (ctx->pc == 0x116750u) {
        ctx->pc = 0x116754u;
        goto label_116754;
    }
    ctx->pc = 0x11674Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x116754u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11674Cu, 0x116754u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x116754u;
label_116754:
    // 0x116754: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_116758:
    if (ctx->pc == 0x116758u) {
        ctx->pc = 0x11675Cu;
        goto label_11675c;
    }
    ctx->pc = 0x116754u;
    {
        const bool branch_taken_0x116754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x116754) {
            ctx->pc = 0x1166F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1166f8;
        }
    }
    ctx->pc = 0x11675Cu;
label_11675c:
    // 0x11675c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11675cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_116760:
    // 0x116760: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x116760u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_116764:
    // 0x116764: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x116764u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_116768:
    // 0x116768: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x116768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_11676c:
    // 0x11676c: 0x3e00008  jr          $ra
label_116770:
    if (ctx->pc == 0x116770u) {
        ctx->pc = 0x116774u;
        goto label_116774;
    }
    ctx->pc = 0x11676Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11676Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116774u;
label_116774:
    // 0x116774: 0x0  nop
    ctx->pc = 0x116774u;
    // NOP
label_116778:
    // 0x116778: 0x0  nop
    ctx->pc = 0x116778u;
    // NOP
label_11677c:
    // 0x11677c: 0x0  nop
    ctx->pc = 0x11677cu;
    // NOP
    ctx->pc = 0x116780u;
}
