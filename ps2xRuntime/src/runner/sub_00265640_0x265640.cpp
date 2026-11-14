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

// Function: sub_00265640
// Address: 0x265640 - 0x2656f0
void sub_00265640_0x265640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265640_0x265640");
#endif

    switch (ctx->pc) {
        case 0x265640u: goto label_265640;
        case 0x265644u: goto label_265644;
        case 0x265648u: goto label_265648;
        case 0x26564cu: goto label_26564c;
        case 0x265650u: goto label_265650;
        case 0x265654u: goto label_265654;
        case 0x265658u: goto label_265658;
        case 0x26565cu: goto label_26565c;
        case 0x265660u: goto label_265660;
        case 0x265664u: goto label_265664;
        case 0x265668u: goto label_265668;
        case 0x26566cu: goto label_26566c;
        case 0x265670u: goto label_265670;
        case 0x265674u: goto label_265674;
        case 0x265678u: goto label_265678;
        case 0x26567cu: goto label_26567c;
        case 0x265680u: goto label_265680;
        case 0x265684u: goto label_265684;
        case 0x265688u: goto label_265688;
        case 0x26568cu: goto label_26568c;
        case 0x265690u: goto label_265690;
        case 0x265694u: goto label_265694;
        case 0x265698u: goto label_265698;
        case 0x26569cu: goto label_26569c;
        case 0x2656a0u: goto label_2656a0;
        case 0x2656a4u: goto label_2656a4;
        case 0x2656a8u: goto label_2656a8;
        case 0x2656acu: goto label_2656ac;
        case 0x2656b0u: goto label_2656b0;
        case 0x2656b4u: goto label_2656b4;
        case 0x2656b8u: goto label_2656b8;
        case 0x2656bcu: goto label_2656bc;
        case 0x2656c0u: goto label_2656c0;
        case 0x2656c4u: goto label_2656c4;
        case 0x2656c8u: goto label_2656c8;
        case 0x2656ccu: goto label_2656cc;
        case 0x2656d0u: goto label_2656d0;
        case 0x2656d4u: goto label_2656d4;
        case 0x2656d8u: goto label_2656d8;
        case 0x2656dcu: goto label_2656dc;
        case 0x2656e0u: goto label_2656e0;
        case 0x2656e4u: goto label_2656e4;
        case 0x2656e8u: goto label_2656e8;
        case 0x2656ecu: goto label_2656ec;
        default: break;
    }

    ctx->pc = 0x265640u;

label_265640:
    // 0x265640: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x265640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_265644:
    // 0x265644: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x265644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_265648:
    // 0x265648: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x265648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_26564c:
    // 0x26564c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26564cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_265650:
    // 0x265650: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x265650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_265654:
    // 0x265654: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x265654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_265658:
    // 0x265658: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_26565c:
    if (ctx->pc == 0x26565Cu) {
        ctx->pc = 0x265660u;
        goto label_265660;
    }
    ctx->pc = 0x265658u;
    {
        const bool branch_taken_0x265658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x265658) {
            ctx->pc = 0x265668u;
            goto label_265668;
        }
    }
    ctx->pc = 0x265660u;
label_265660:
    // 0x265660: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x265660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_265664:
    // 0x265664: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x265664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_265668:
    // 0x265668: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x265668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_26566c:
    // 0x26566c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x26566cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_265670:
    // 0x265670: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x265670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_265674:
    // 0x265674: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x265674u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_265678:
    // 0x265678: 0xc119b68  jal         func_466DA0
label_26567c:
    if (ctx->pc == 0x26567Cu) {
        ctx->pc = 0x265680u;
        goto label_265680;
    }
    ctx->pc = 0x265678u;
    SET_GPR_U32(ctx, 31, 0x265680u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x265678u, 0x265680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265680u;
label_265680:
    // 0x265680: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x265680u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_265684:
    // 0x265684: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_265688:
    if (ctx->pc == 0x265688u) {
        ctx->pc = 0x26568Cu;
        goto label_26568c;
    }
    ctx->pc = 0x265684u;
    {
        const bool branch_taken_0x265684 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x265684) {
            ctx->pc = 0x265698u;
            goto label_265698;
        }
    }
    ctx->pc = 0x26568Cu;
label_26568c:
    // 0x26568c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x26568cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_265690:
    // 0x265690: 0x1000000e  b           . + 4 + (0xE << 2)
label_265694:
    if (ctx->pc == 0x265694u) {
        ctx->pc = 0x265698u;
        goto label_265698;
    }
    ctx->pc = 0x265690u;
    {
        const bool branch_taken_0x265690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265690) {
            ctx->pc = 0x2656CCu;
            goto label_2656cc;
        }
    }
    ctx->pc = 0x265698u;
label_265698:
    // 0x265698: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x265698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26569c:
    // 0x26569c: 0xc0ba088  jal         func_2E8220
label_2656a0:
    if (ctx->pc == 0x2656A0u) {
        ctx->pc = 0x2656A4u;
        goto label_2656a4;
    }
    ctx->pc = 0x26569Cu;
    SET_GPR_U32(ctx, 31, 0x2656A4u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x26569Cu, 0x2656A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2656A4u;
label_2656a4:
    // 0x2656a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2656a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2656a8:
    // 0x2656a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2656a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2656ac:
    // 0x2656ac: 0xc0ba088  jal         func_2E8220
label_2656b0:
    if (ctx->pc == 0x2656B0u) {
        ctx->pc = 0x2656B4u;
        goto label_2656b4;
    }
    ctx->pc = 0x2656ACu;
    SET_GPR_U32(ctx, 31, 0x2656B4u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2656ACu, 0x2656B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2656B4u;
label_2656b4:
    // 0x2656b4: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_2656b8:
    if (ctx->pc == 0x2656B8u) {
        ctx->pc = 0x2656BCu;
        goto label_2656bc;
    }
    ctx->pc = 0x2656B4u;
    {
        const bool branch_taken_0x2656b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2656b4) {
            ctx->pc = 0x265668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_265668;
        }
    }
    ctx->pc = 0x2656BCu;
label_2656bc:
    // 0x2656bc: 0x200f809  jalr        $s0
label_2656c0:
    if (ctx->pc == 0x2656C0u) {
        ctx->pc = 0x2656C4u;
        goto label_2656c4;
    }
    ctx->pc = 0x2656BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2656C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2656BCu, 0x2656C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2656C4u;
label_2656c4:
    // 0x2656c4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_2656c8:
    if (ctx->pc == 0x2656C8u) {
        ctx->pc = 0x2656CCu;
        goto label_2656cc;
    }
    ctx->pc = 0x2656C4u;
    {
        const bool branch_taken_0x2656c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2656c4) {
            ctx->pc = 0x265668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_265668;
        }
    }
    ctx->pc = 0x2656CCu;
label_2656cc:
    // 0x2656cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2656ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2656d0:
    // 0x2656d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2656d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2656d4:
    // 0x2656d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2656d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2656d8:
    // 0x2656d8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2656d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2656dc:
    // 0x2656dc: 0x3e00008  jr          $ra
label_2656e0:
    if (ctx->pc == 0x2656E0u) {
        ctx->pc = 0x2656E4u;
        goto label_2656e4;
    }
    ctx->pc = 0x2656DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2656DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2656E4u;
label_2656e4:
    // 0x2656e4: 0x0  nop
    ctx->pc = 0x2656e4u;
    // NOP
label_2656e8:
    // 0x2656e8: 0x0  nop
    ctx->pc = 0x2656e8u;
    // NOP
label_2656ec:
    // 0x2656ec: 0x0  nop
    ctx->pc = 0x2656ecu;
    // NOP
    ctx->pc = 0x2656f0u;
}
