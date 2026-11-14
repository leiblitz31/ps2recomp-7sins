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

// Function: sub_00458980
// Address: 0x458980 - 0x458a30
void sub_00458980_0x458980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00458980_0x458980");
#endif

    switch (ctx->pc) {
        case 0x458980u: goto label_458980;
        case 0x458984u: goto label_458984;
        case 0x458988u: goto label_458988;
        case 0x45898cu: goto label_45898c;
        case 0x458990u: goto label_458990;
        case 0x458994u: goto label_458994;
        case 0x458998u: goto label_458998;
        case 0x45899cu: goto label_45899c;
        case 0x4589a0u: goto label_4589a0;
        case 0x4589a4u: goto label_4589a4;
        case 0x4589a8u: goto label_4589a8;
        case 0x4589acu: goto label_4589ac;
        case 0x4589b0u: goto label_4589b0;
        case 0x4589b4u: goto label_4589b4;
        case 0x4589b8u: goto label_4589b8;
        case 0x4589bcu: goto label_4589bc;
        case 0x4589c0u: goto label_4589c0;
        case 0x4589c4u: goto label_4589c4;
        case 0x4589c8u: goto label_4589c8;
        case 0x4589ccu: goto label_4589cc;
        case 0x4589d0u: goto label_4589d0;
        case 0x4589d4u: goto label_4589d4;
        case 0x4589d8u: goto label_4589d8;
        case 0x4589dcu: goto label_4589dc;
        case 0x4589e0u: goto label_4589e0;
        case 0x4589e4u: goto label_4589e4;
        case 0x4589e8u: goto label_4589e8;
        case 0x4589ecu: goto label_4589ec;
        case 0x4589f0u: goto label_4589f0;
        case 0x4589f4u: goto label_4589f4;
        case 0x4589f8u: goto label_4589f8;
        case 0x4589fcu: goto label_4589fc;
        case 0x458a00u: goto label_458a00;
        case 0x458a04u: goto label_458a04;
        case 0x458a08u: goto label_458a08;
        case 0x458a0cu: goto label_458a0c;
        case 0x458a10u: goto label_458a10;
        case 0x458a14u: goto label_458a14;
        case 0x458a18u: goto label_458a18;
        case 0x458a1cu: goto label_458a1c;
        case 0x458a20u: goto label_458a20;
        case 0x458a24u: goto label_458a24;
        case 0x458a28u: goto label_458a28;
        case 0x458a2cu: goto label_458a2c;
        default: break;
    }

    ctx->pc = 0x458980u;

label_458980:
    // 0x458980: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x458980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_458984:
    // 0x458984: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x458984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_458988:
    // 0x458988: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x458988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45898c:
    // 0x45898c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45898cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_458990:
    // 0x458990: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x458990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_458994:
    // 0x458994: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x458994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_458998:
    // 0x458998: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_45899c:
    if (ctx->pc == 0x45899Cu) {
        ctx->pc = 0x4589A0u;
        goto label_4589a0;
    }
    ctx->pc = 0x458998u;
    {
        const bool branch_taken_0x458998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x458998) {
            ctx->pc = 0x4589A8u;
            goto label_4589a8;
        }
    }
    ctx->pc = 0x4589A0u;
label_4589a0:
    // 0x4589a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4589a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4589a4:
    // 0x4589a4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x4589a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_4589a8:
    // 0x4589a8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x4589a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_4589ac:
    // 0x4589ac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4589acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4589b0:
    // 0x4589b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4589b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4589b4:
    // 0x4589b4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x4589b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4589b8:
    // 0x4589b8: 0xc119b68  jal         func_466DA0
label_4589bc:
    if (ctx->pc == 0x4589BCu) {
        ctx->pc = 0x4589C0u;
        goto label_4589c0;
    }
    ctx->pc = 0x4589B8u;
    SET_GPR_U32(ctx, 31, 0x4589C0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x4589B8u, 0x4589C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4589C0u;
label_4589c0:
    // 0x4589c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4589c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4589c4:
    // 0x4589c4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_4589c8:
    if (ctx->pc == 0x4589C8u) {
        ctx->pc = 0x4589CCu;
        goto label_4589cc;
    }
    ctx->pc = 0x4589C4u;
    {
        const bool branch_taken_0x4589c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4589c4) {
            ctx->pc = 0x4589D8u;
            goto label_4589d8;
        }
    }
    ctx->pc = 0x4589CCu;
label_4589cc:
    // 0x4589cc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4589ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4589d0:
    // 0x4589d0: 0x1000000e  b           . + 4 + (0xE << 2)
label_4589d4:
    if (ctx->pc == 0x4589D4u) {
        ctx->pc = 0x4589D8u;
        goto label_4589d8;
    }
    ctx->pc = 0x4589D0u;
    {
        const bool branch_taken_0x4589d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4589d0) {
            ctx->pc = 0x458A0Cu;
            goto label_458a0c;
        }
    }
    ctx->pc = 0x4589D8u;
label_4589d8:
    // 0x4589d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4589d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4589dc:
    // 0x4589dc: 0xc0ba088  jal         func_2E8220
label_4589e0:
    if (ctx->pc == 0x4589E0u) {
        ctx->pc = 0x4589E4u;
        goto label_4589e4;
    }
    ctx->pc = 0x4589DCu;
    SET_GPR_U32(ctx, 31, 0x4589E4u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x4589DCu, 0x4589E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4589E4u;
label_4589e4:
    // 0x4589e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4589e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4589e8:
    // 0x4589e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4589e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4589ec:
    // 0x4589ec: 0xc0ba088  jal         func_2E8220
label_4589f0:
    if (ctx->pc == 0x4589F0u) {
        ctx->pc = 0x4589F4u;
        goto label_4589f4;
    }
    ctx->pc = 0x4589ECu;
    SET_GPR_U32(ctx, 31, 0x4589F4u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x4589ECu, 0x4589F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4589F4u;
label_4589f4:
    // 0x4589f4: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_4589f8:
    if (ctx->pc == 0x4589F8u) {
        ctx->pc = 0x4589FCu;
        goto label_4589fc;
    }
    ctx->pc = 0x4589F4u;
    {
        const bool branch_taken_0x4589f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4589f4) {
            ctx->pc = 0x4589A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4589a8;
        }
    }
    ctx->pc = 0x4589FCu;
label_4589fc:
    // 0x4589fc: 0x200f809  jalr        $s0
label_458a00:
    if (ctx->pc == 0x458A00u) {
        ctx->pc = 0x458A04u;
        goto label_458a04;
    }
    ctx->pc = 0x4589FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x458A04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4589FCu, 0x458A04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x458A04u;
label_458a04:
    // 0x458a04: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_458a08:
    if (ctx->pc == 0x458A08u) {
        ctx->pc = 0x458A0Cu;
        goto label_458a0c;
    }
    ctx->pc = 0x458A04u;
    {
        const bool branch_taken_0x458a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x458a04) {
            ctx->pc = 0x4589A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4589a8;
        }
    }
    ctx->pc = 0x458A0Cu;
label_458a0c:
    // 0x458a0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x458a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_458a10:
    // 0x458a10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x458a10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_458a14:
    // 0x458a14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x458a14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_458a18:
    // 0x458a18: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x458a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_458a1c:
    // 0x458a1c: 0x3e00008  jr          $ra
label_458a20:
    if (ctx->pc == 0x458A20u) {
        ctx->pc = 0x458A24u;
        goto label_458a24;
    }
    ctx->pc = 0x458A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x458A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x458A24u;
label_458a24:
    // 0x458a24: 0x0  nop
    ctx->pc = 0x458a24u;
    // NOP
label_458a28:
    // 0x458a28: 0x0  nop
    ctx->pc = 0x458a28u;
    // NOP
label_458a2c:
    // 0x458a2c: 0x0  nop
    ctx->pc = 0x458a2cu;
    // NOP
    ctx->pc = 0x458a30u;
}
