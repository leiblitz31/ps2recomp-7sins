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

// Function: sub_003E1640
// Address: 0x3e1640 - 0x3e16a8
void sub_003E1640_0x3e1640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1640_0x3e1640");
#endif

    switch (ctx->pc) {
        case 0x3e1664u: goto label_3e1664;
        case 0x3e167cu: goto label_3e167c;
        case 0x3e1694u: goto label_3e1694;
        default: break;
    }

    ctx->pc = 0x3e1640u;

    // 0x3e1640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e1640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3e1644: 0x24067fff  addiu       $a2, $zero, 0x7FFF
    ctx->pc = 0x3e1644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x3e1648: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3e1648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3e164c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x3e164cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e1650: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e1650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3e1654: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e1654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1658: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e1658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e165c: 0xc0f838e  jal         func_3E0E38
    ctx->pc = 0x3E165Cu;
    SET_GPR_U32(ctx, 31, 0x3E1664u);
    ctx->pc = 0x3E1660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E165Cu;
    // 0x3e1660: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0E38u, 0x3E165Cu, 0x3E1664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1664u;
label_3e1664:
    // 0x3e1664: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x3e1664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x3e1668: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E1668u;
    {
        const bool branch_taken_0x3e1668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E166Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1668u;
        // 0x3e166c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1668) {
            ctx->pc = 0x3E1688u;
            goto label_3e1688;
        }
    }
    ctx->pc = 0x3E1670u;
    // 0x3e1670: 0x8e0502cc  lw          $a1, 0x2CC($s0)
    ctx->pc = 0x3e1670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 716)));
    // 0x3e1674: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3E1674u;
    SET_GPR_U32(ctx, 31, 0x3E167Cu);
    ctx->pc = 0x3E1678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1674u;
    // 0x3e1678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3E1674u, 0x3E167Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E167Cu;
label_3e167c:
    // 0x3e167c: 0xae0002c8  sw          $zero, 0x2C8($s0)
    ctx->pc = 0x3e167cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 0));
    // 0x3e1680: 0xae0002cc  sw          $zero, 0x2CC($s0)
    ctx->pc = 0x3e1680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 0));
    // 0x3e1684: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e1684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e1688:
    // 0x3e1688: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e1688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e168c: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x3E168Cu;
    SET_GPR_U32(ctx, 31, 0x3E1694u);
    ctx->pc = 0x3E1690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E168Cu;
    // 0x3e1690: 0x24060190  addiu       $a2, $zero, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3E168Cu, 0x3E1694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1694u;
label_3e1694:
    // 0x3e1694: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3e1694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e1698: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e1698u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e169c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e169cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e16a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E16A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E16A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E16A0u;
        // 0x3e16a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E16A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E16A8u;
}
