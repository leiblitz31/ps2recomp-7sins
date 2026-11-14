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

// Function: sub_00282180
// Address: 0x282180 - 0x282220
void sub_00282180_0x282180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282180_0x282180");
#endif

    switch (ctx->pc) {
        case 0x282180u: goto label_282180;
        case 0x282184u: goto label_282184;
        case 0x282188u: goto label_282188;
        case 0x28218cu: goto label_28218c;
        case 0x282190u: goto label_282190;
        case 0x282194u: goto label_282194;
        case 0x282198u: goto label_282198;
        case 0x28219cu: goto label_28219c;
        case 0x2821a0u: goto label_2821a0;
        case 0x2821a4u: goto label_2821a4;
        case 0x2821a8u: goto label_2821a8;
        case 0x2821acu: goto label_2821ac;
        case 0x2821b0u: goto label_2821b0;
        case 0x2821b4u: goto label_2821b4;
        case 0x2821b8u: goto label_2821b8;
        case 0x2821bcu: goto label_2821bc;
        case 0x2821c0u: goto label_2821c0;
        case 0x2821c4u: goto label_2821c4;
        case 0x2821c8u: goto label_2821c8;
        case 0x2821ccu: goto label_2821cc;
        case 0x2821d0u: goto label_2821d0;
        case 0x2821d4u: goto label_2821d4;
        case 0x2821d8u: goto label_2821d8;
        case 0x2821dcu: goto label_2821dc;
        case 0x2821e0u: goto label_2821e0;
        case 0x2821e4u: goto label_2821e4;
        case 0x2821e8u: goto label_2821e8;
        case 0x2821ecu: goto label_2821ec;
        case 0x2821f0u: goto label_2821f0;
        case 0x2821f4u: goto label_2821f4;
        case 0x2821f8u: goto label_2821f8;
        case 0x2821fcu: goto label_2821fc;
        case 0x282200u: goto label_282200;
        case 0x282204u: goto label_282204;
        case 0x282208u: goto label_282208;
        case 0x28220cu: goto label_28220c;
        case 0x282210u: goto label_282210;
        case 0x282214u: goto label_282214;
        case 0x282218u: goto label_282218;
        case 0x28221cu: goto label_28221c;
        default: break;
    }

    ctx->pc = 0x282180u;

label_282180:
    // 0x282180: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x282180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_282184:
    // 0x282184: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x282184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_282188:
    // 0x282188: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x282188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_28218c:
    // 0x28218c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28218cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_282190:
    // 0x282190: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x282190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_282194:
    // 0x282194: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x282194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_282198:
    // 0x282198: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_28219c:
    if (ctx->pc == 0x28219Cu) {
        ctx->pc = 0x2821A0u;
        goto label_2821a0;
    }
    ctx->pc = 0x282198u;
    {
        const bool branch_taken_0x282198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282198) {
            ctx->pc = 0x2821A8u;
            goto label_2821a8;
        }
    }
    ctx->pc = 0x2821A0u;
label_2821a0:
    // 0x2821a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2821a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2821a4:
    // 0x2821a4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2821a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_2821a8:
    // 0x2821a8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2821a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2821ac:
    // 0x2821ac: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2821acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2821b0:
    // 0x2821b0: 0xc119b68  jal         func_466DA0
label_2821b4:
    if (ctx->pc == 0x2821B4u) {
        ctx->pc = 0x2821B8u;
        goto label_2821b8;
    }
    ctx->pc = 0x2821B0u;
    SET_GPR_U32(ctx, 31, 0x2821B8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2821B0u, 0x2821B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2821B8u;
label_2821b8:
    // 0x2821b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2821b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2821bc:
    // 0x2821bc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2821c0:
    if (ctx->pc == 0x2821C0u) {
        ctx->pc = 0x2821C4u;
        goto label_2821c4;
    }
    ctx->pc = 0x2821BCu;
    {
        const bool branch_taken_0x2821bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2821bc) {
            ctx->pc = 0x2821D0u;
            goto label_2821d0;
        }
    }
    ctx->pc = 0x2821C4u;
label_2821c4:
    // 0x2821c4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2821c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2821c8:
    // 0x2821c8: 0x1000000e  b           . + 4 + (0xE << 2)
label_2821cc:
    if (ctx->pc == 0x2821CCu) {
        ctx->pc = 0x2821D0u;
        goto label_2821d0;
    }
    ctx->pc = 0x2821C8u;
    {
        const bool branch_taken_0x2821c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2821c8) {
            ctx->pc = 0x282204u;
            goto label_282204;
        }
    }
    ctx->pc = 0x2821D0u;
label_2821d0:
    // 0x2821d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2821d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2821d4:
    // 0x2821d4: 0xc0ba088  jal         func_2E8220
label_2821d8:
    if (ctx->pc == 0x2821D8u) {
        ctx->pc = 0x2821DCu;
        goto label_2821dc;
    }
    ctx->pc = 0x2821D4u;
    SET_GPR_U32(ctx, 31, 0x2821DCu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2821D4u, 0x2821DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2821DCu;
label_2821dc:
    // 0x2821dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2821dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2821e0:
    // 0x2821e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2821e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2821e4:
    // 0x2821e4: 0xc0ba088  jal         func_2E8220
label_2821e8:
    if (ctx->pc == 0x2821E8u) {
        ctx->pc = 0x2821ECu;
        goto label_2821ec;
    }
    ctx->pc = 0x2821E4u;
    SET_GPR_U32(ctx, 31, 0x2821ECu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2821E4u, 0x2821ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2821ECu;
label_2821ec:
    // 0x2821ec: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_2821f0:
    if (ctx->pc == 0x2821F0u) {
        ctx->pc = 0x2821F4u;
        goto label_2821f4;
    }
    ctx->pc = 0x2821ECu;
    {
        const bool branch_taken_0x2821ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2821ec) {
            ctx->pc = 0x2821A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2821a8;
        }
    }
    ctx->pc = 0x2821F4u;
label_2821f4:
    // 0x2821f4: 0x200f809  jalr        $s0
label_2821f8:
    if (ctx->pc == 0x2821F8u) {
        ctx->pc = 0x2821FCu;
        goto label_2821fc;
    }
    ctx->pc = 0x2821F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2821FCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2821F4u, 0x2821FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2821FCu;
label_2821fc:
    // 0x2821fc: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_282200:
    if (ctx->pc == 0x282200u) {
        ctx->pc = 0x282204u;
        goto label_282204;
    }
    ctx->pc = 0x2821FCu;
    {
        const bool branch_taken_0x2821fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2821fc) {
            ctx->pc = 0x2821A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2821a8;
        }
    }
    ctx->pc = 0x282204u;
label_282204:
    // 0x282204: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x282204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_282208:
    // 0x282208: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x282208u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28220c:
    // 0x28220c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28220cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_282210:
    // 0x282210: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x282210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_282214:
    // 0x282214: 0x3e00008  jr          $ra
label_282218:
    if (ctx->pc == 0x282218u) {
        ctx->pc = 0x28221Cu;
        goto label_28221c;
    }
    ctx->pc = 0x282214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28221Cu;
label_28221c:
    // 0x28221c: 0x0  nop
    ctx->pc = 0x28221cu;
    // NOP
    ctx->pc = 0x282220u;
}
