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

// Function: sub_0017A5B0
// Address: 0x17a5b0 - 0x17a660
void sub_0017A5B0_0x17a5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A5B0_0x17a5b0");
#endif

    switch (ctx->pc) {
        case 0x17a5b0u: goto label_17a5b0;
        case 0x17a5b4u: goto label_17a5b4;
        case 0x17a5b8u: goto label_17a5b8;
        case 0x17a5bcu: goto label_17a5bc;
        case 0x17a5c0u: goto label_17a5c0;
        case 0x17a5c4u: goto label_17a5c4;
        case 0x17a5c8u: goto label_17a5c8;
        case 0x17a5ccu: goto label_17a5cc;
        case 0x17a5d0u: goto label_17a5d0;
        case 0x17a5d4u: goto label_17a5d4;
        case 0x17a5d8u: goto label_17a5d8;
        case 0x17a5dcu: goto label_17a5dc;
        case 0x17a5e0u: goto label_17a5e0;
        case 0x17a5e4u: goto label_17a5e4;
        case 0x17a5e8u: goto label_17a5e8;
        case 0x17a5ecu: goto label_17a5ec;
        case 0x17a5f0u: goto label_17a5f0;
        case 0x17a5f4u: goto label_17a5f4;
        case 0x17a5f8u: goto label_17a5f8;
        case 0x17a5fcu: goto label_17a5fc;
        case 0x17a600u: goto label_17a600;
        case 0x17a604u: goto label_17a604;
        case 0x17a608u: goto label_17a608;
        case 0x17a60cu: goto label_17a60c;
        case 0x17a610u: goto label_17a610;
        case 0x17a614u: goto label_17a614;
        case 0x17a618u: goto label_17a618;
        case 0x17a61cu: goto label_17a61c;
        case 0x17a620u: goto label_17a620;
        case 0x17a624u: goto label_17a624;
        case 0x17a628u: goto label_17a628;
        case 0x17a62cu: goto label_17a62c;
        case 0x17a630u: goto label_17a630;
        case 0x17a634u: goto label_17a634;
        case 0x17a638u: goto label_17a638;
        case 0x17a63cu: goto label_17a63c;
        case 0x17a640u: goto label_17a640;
        case 0x17a644u: goto label_17a644;
        case 0x17a648u: goto label_17a648;
        case 0x17a64cu: goto label_17a64c;
        case 0x17a650u: goto label_17a650;
        case 0x17a654u: goto label_17a654;
        case 0x17a658u: goto label_17a658;
        case 0x17a65cu: goto label_17a65c;
        default: break;
    }

    ctx->pc = 0x17a5b0u;

label_17a5b0:
    // 0x17a5b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17a5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_17a5b4:
    // 0x17a5b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17a5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_17a5b8:
    // 0x17a5b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17a5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17a5bc:
    // 0x17a5bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17a5c0:
    // 0x17a5c0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x17a5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_17a5c4:
    // 0x17a5c4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x17a5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_17a5c8:
    // 0x17a5c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_17a5cc:
    if (ctx->pc == 0x17A5CCu) {
        ctx->pc = 0x17A5D0u;
        goto label_17a5d0;
    }
    ctx->pc = 0x17A5C8u;
    {
        const bool branch_taken_0x17a5c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a5c8) {
            ctx->pc = 0x17A5D8u;
            goto label_17a5d8;
        }
    }
    ctx->pc = 0x17A5D0u;
label_17a5d0:
    // 0x17a5d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17a5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17a5d4:
    // 0x17a5d4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x17a5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_17a5d8:
    // 0x17a5d8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x17a5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_17a5dc:
    // 0x17a5dc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x17a5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_17a5e0:
    // 0x17a5e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17a5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17a5e4:
    // 0x17a5e4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x17a5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_17a5e8:
    // 0x17a5e8: 0xc119b68  jal         func_466DA0
label_17a5ec:
    if (ctx->pc == 0x17A5ECu) {
        ctx->pc = 0x17A5F0u;
        goto label_17a5f0;
    }
    ctx->pc = 0x17A5E8u;
    SET_GPR_U32(ctx, 31, 0x17A5F0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x17A5E8u, 0x17A5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A5F0u;
label_17a5f0:
    // 0x17a5f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17a5f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17a5f4:
    // 0x17a5f4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_17a5f8:
    if (ctx->pc == 0x17A5F8u) {
        ctx->pc = 0x17A5FCu;
        goto label_17a5fc;
    }
    ctx->pc = 0x17A5F4u;
    {
        const bool branch_taken_0x17a5f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a5f4) {
            ctx->pc = 0x17A608u;
            goto label_17a608;
        }
    }
    ctx->pc = 0x17A5FCu;
label_17a5fc:
    // 0x17a5fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17a5fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17a600:
    // 0x17a600: 0x1000000e  b           . + 4 + (0xE << 2)
label_17a604:
    if (ctx->pc == 0x17A604u) {
        ctx->pc = 0x17A608u;
        goto label_17a608;
    }
    ctx->pc = 0x17A600u;
    {
        const bool branch_taken_0x17a600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a600) {
            ctx->pc = 0x17A63Cu;
            goto label_17a63c;
        }
    }
    ctx->pc = 0x17A608u;
label_17a608:
    // 0x17a608: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17a608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a60c:
    // 0x17a60c: 0xc0ba088  jal         func_2E8220
label_17a610:
    if (ctx->pc == 0x17A610u) {
        ctx->pc = 0x17A614u;
        goto label_17a614;
    }
    ctx->pc = 0x17A60Cu;
    SET_GPR_U32(ctx, 31, 0x17A614u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x17A60Cu, 0x17A614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A614u;
label_17a614:
    // 0x17a614: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17a614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17a618:
    // 0x17a618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17a618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17a61c:
    // 0x17a61c: 0xc0ba088  jal         func_2E8220
label_17a620:
    if (ctx->pc == 0x17A620u) {
        ctx->pc = 0x17A624u;
        goto label_17a624;
    }
    ctx->pc = 0x17A61Cu;
    SET_GPR_U32(ctx, 31, 0x17A624u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x17A61Cu, 0x17A624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A624u;
label_17a624:
    // 0x17a624: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_17a628:
    if (ctx->pc == 0x17A628u) {
        ctx->pc = 0x17A62Cu;
        goto label_17a62c;
    }
    ctx->pc = 0x17A624u;
    {
        const bool branch_taken_0x17a624 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a624) {
            ctx->pc = 0x17A5D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a5d8;
        }
    }
    ctx->pc = 0x17A62Cu;
label_17a62c:
    // 0x17a62c: 0x200f809  jalr        $s0
label_17a630:
    if (ctx->pc == 0x17A630u) {
        ctx->pc = 0x17A634u;
        goto label_17a634;
    }
    ctx->pc = 0x17A62Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x17A634u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A62Cu, 0x17A634u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17A634u;
label_17a634:
    // 0x17a634: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_17a638:
    if (ctx->pc == 0x17A638u) {
        ctx->pc = 0x17A63Cu;
        goto label_17a63c;
    }
    ctx->pc = 0x17A634u;
    {
        const bool branch_taken_0x17a634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a634) {
            ctx->pc = 0x17A5D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a5d8;
        }
    }
    ctx->pc = 0x17A63Cu;
label_17a63c:
    // 0x17a63c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17a63cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17a640:
    // 0x17a640: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17a640u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17a644:
    // 0x17a644: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17a648:
    // 0x17a648: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x17a648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_17a64c:
    // 0x17a64c: 0x3e00008  jr          $ra
label_17a650:
    if (ctx->pc == 0x17A650u) {
        ctx->pc = 0x17A654u;
        goto label_17a654;
    }
    ctx->pc = 0x17A64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A654u;
label_17a654:
    // 0x17a654: 0x0  nop
    ctx->pc = 0x17a654u;
    // NOP
label_17a658:
    // 0x17a658: 0x0  nop
    ctx->pc = 0x17a658u;
    // NOP
label_17a65c:
    // 0x17a65c: 0x0  nop
    ctx->pc = 0x17a65cu;
    // NOP
    ctx->pc = 0x17a660u;
}
