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

// Function: sub_0019E560
// Address: 0x19e560 - 0x19e610
void sub_0019E560_0x19e560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E560_0x19e560");
#endif

    switch (ctx->pc) {
        case 0x19e560u: goto label_19e560;
        case 0x19e564u: goto label_19e564;
        case 0x19e568u: goto label_19e568;
        case 0x19e56cu: goto label_19e56c;
        case 0x19e570u: goto label_19e570;
        case 0x19e574u: goto label_19e574;
        case 0x19e578u: goto label_19e578;
        case 0x19e57cu: goto label_19e57c;
        case 0x19e580u: goto label_19e580;
        case 0x19e584u: goto label_19e584;
        case 0x19e588u: goto label_19e588;
        case 0x19e58cu: goto label_19e58c;
        case 0x19e590u: goto label_19e590;
        case 0x19e594u: goto label_19e594;
        case 0x19e598u: goto label_19e598;
        case 0x19e59cu: goto label_19e59c;
        case 0x19e5a0u: goto label_19e5a0;
        case 0x19e5a4u: goto label_19e5a4;
        case 0x19e5a8u: goto label_19e5a8;
        case 0x19e5acu: goto label_19e5ac;
        case 0x19e5b0u: goto label_19e5b0;
        case 0x19e5b4u: goto label_19e5b4;
        case 0x19e5b8u: goto label_19e5b8;
        case 0x19e5bcu: goto label_19e5bc;
        case 0x19e5c0u: goto label_19e5c0;
        case 0x19e5c4u: goto label_19e5c4;
        case 0x19e5c8u: goto label_19e5c8;
        case 0x19e5ccu: goto label_19e5cc;
        case 0x19e5d0u: goto label_19e5d0;
        case 0x19e5d4u: goto label_19e5d4;
        case 0x19e5d8u: goto label_19e5d8;
        case 0x19e5dcu: goto label_19e5dc;
        case 0x19e5e0u: goto label_19e5e0;
        case 0x19e5e4u: goto label_19e5e4;
        case 0x19e5e8u: goto label_19e5e8;
        case 0x19e5ecu: goto label_19e5ec;
        case 0x19e5f0u: goto label_19e5f0;
        case 0x19e5f4u: goto label_19e5f4;
        case 0x19e5f8u: goto label_19e5f8;
        case 0x19e5fcu: goto label_19e5fc;
        case 0x19e600u: goto label_19e600;
        case 0x19e604u: goto label_19e604;
        case 0x19e608u: goto label_19e608;
        case 0x19e60cu: goto label_19e60c;
        default: break;
    }

    ctx->pc = 0x19e560u;

label_19e560:
    // 0x19e560: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19e560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_19e564:
    // 0x19e564: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19e564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_19e568:
    // 0x19e568: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19e568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_19e56c:
    // 0x19e56c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19e56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_19e570:
    // 0x19e570: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x19e570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_19e574:
    // 0x19e574: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19e574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_19e578:
    // 0x19e578: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_19e57c:
    if (ctx->pc == 0x19E57Cu) {
        ctx->pc = 0x19E580u;
        goto label_19e580;
    }
    ctx->pc = 0x19E578u;
    {
        const bool branch_taken_0x19e578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e578) {
            ctx->pc = 0x19E588u;
            goto label_19e588;
        }
    }
    ctx->pc = 0x19E580u;
label_19e580:
    // 0x19e580: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e584:
    // 0x19e584: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x19e584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_19e588:
    // 0x19e588: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x19e588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_19e58c:
    // 0x19e58c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x19e58cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_19e590:
    // 0x19e590: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19e590u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19e594:
    // 0x19e594: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x19e594u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_19e598:
    // 0x19e598: 0xc119b68  jal         func_466DA0
label_19e59c:
    if (ctx->pc == 0x19E59Cu) {
        ctx->pc = 0x19E5A0u;
        goto label_19e5a0;
    }
    ctx->pc = 0x19E598u;
    SET_GPR_U32(ctx, 31, 0x19E5A0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x19E598u, 0x19E5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E5A0u;
label_19e5a0:
    // 0x19e5a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19e5a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19e5a4:
    // 0x19e5a4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_19e5a8:
    if (ctx->pc == 0x19E5A8u) {
        ctx->pc = 0x19E5ACu;
        goto label_19e5ac;
    }
    ctx->pc = 0x19E5A4u;
    {
        const bool branch_taken_0x19e5a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e5a4) {
            ctx->pc = 0x19E5B8u;
            goto label_19e5b8;
        }
    }
    ctx->pc = 0x19E5ACu;
label_19e5ac:
    // 0x19e5ac: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19e5acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e5b0:
    // 0x19e5b0: 0x1000000e  b           . + 4 + (0xE << 2)
label_19e5b4:
    if (ctx->pc == 0x19E5B4u) {
        ctx->pc = 0x19E5B8u;
        goto label_19e5b8;
    }
    ctx->pc = 0x19E5B0u;
    {
        const bool branch_taken_0x19e5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e5b0) {
            ctx->pc = 0x19E5ECu;
            goto label_19e5ec;
        }
    }
    ctx->pc = 0x19E5B8u;
label_19e5b8:
    // 0x19e5b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19e5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e5bc:
    // 0x19e5bc: 0xc0ba088  jal         func_2E8220
label_19e5c0:
    if (ctx->pc == 0x19E5C0u) {
        ctx->pc = 0x19E5C4u;
        goto label_19e5c4;
    }
    ctx->pc = 0x19E5BCu;
    SET_GPR_U32(ctx, 31, 0x19E5C4u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x19E5BCu, 0x19E5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E5C4u;
label_19e5c4:
    // 0x19e5c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19e5c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19e5c8:
    // 0x19e5c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19e5cc:
    // 0x19e5cc: 0xc0ba088  jal         func_2E8220
label_19e5d0:
    if (ctx->pc == 0x19E5D0u) {
        ctx->pc = 0x19E5D4u;
        goto label_19e5d4;
    }
    ctx->pc = 0x19E5CCu;
    SET_GPR_U32(ctx, 31, 0x19E5D4u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x19E5CCu, 0x19E5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E5D4u;
label_19e5d4:
    // 0x19e5d4: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_19e5d8:
    if (ctx->pc == 0x19E5D8u) {
        ctx->pc = 0x19E5DCu;
        goto label_19e5dc;
    }
    ctx->pc = 0x19E5D4u;
    {
        const bool branch_taken_0x19e5d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e5d4) {
            ctx->pc = 0x19E588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e588;
        }
    }
    ctx->pc = 0x19E5DCu;
label_19e5dc:
    // 0x19e5dc: 0x200f809  jalr        $s0
label_19e5e0:
    if (ctx->pc == 0x19E5E0u) {
        ctx->pc = 0x19E5E4u;
        goto label_19e5e4;
    }
    ctx->pc = 0x19E5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x19E5E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E5DCu, 0x19E5E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E5E4u;
label_19e5e4:
    // 0x19e5e4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_19e5e8:
    if (ctx->pc == 0x19E5E8u) {
        ctx->pc = 0x19E5ECu;
        goto label_19e5ec;
    }
    ctx->pc = 0x19E5E4u;
    {
        const bool branch_taken_0x19e5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e5e4) {
            ctx->pc = 0x19E588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e588;
        }
    }
    ctx->pc = 0x19E5ECu;
label_19e5ec:
    // 0x19e5ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19e5ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19e5f0:
    // 0x19e5f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19e5f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19e5f4:
    // 0x19e5f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19e5f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19e5f8:
    // 0x19e5f8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x19e5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_19e5fc:
    // 0x19e5fc: 0x3e00008  jr          $ra
label_19e600:
    if (ctx->pc == 0x19E600u) {
        ctx->pc = 0x19E604u;
        goto label_19e604;
    }
    ctx->pc = 0x19E5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E5FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E604u;
label_19e604:
    // 0x19e604: 0x0  nop
    ctx->pc = 0x19e604u;
    // NOP
label_19e608:
    // 0x19e608: 0x0  nop
    ctx->pc = 0x19e608u;
    // NOP
label_19e60c:
    // 0x19e60c: 0x0  nop
    ctx->pc = 0x19e60cu;
    // NOP
    ctx->pc = 0x19e610u;
}
