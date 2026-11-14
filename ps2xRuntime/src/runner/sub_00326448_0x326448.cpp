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

// Function: sub_00326448
// Address: 0x326448 - 0x3264e8
void sub_00326448_0x326448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326448_0x326448");
#endif

    switch (ctx->pc) {
        case 0x326478u: goto label_326478;
        case 0x3264b8u: goto label_3264b8;
        case 0x3264c4u: goto label_3264c4;
        case 0x3264ccu: goto label_3264cc;
        default: break;
    }

    ctx->pc = 0x326448u;

    // 0x326448: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x326448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32644c: 0x8f82a634  lw          $v0, -0x59CC($gp)
    ctx->pc = 0x32644cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
    // 0x326450: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x326450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x326454: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x326454u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x326458: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x326458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x32645c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32645cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326460: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x326460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x326464: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x326464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x326468: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x326468u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32646c: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x32646cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x326470: 0x71180  sll         $v0, $a3, 6
    ctx->pc = 0x326470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x326474: 0x0  nop
    ctx->pc = 0x326474u;
    // NOP
label_326478:
    // 0x326478: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x326478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x32647c: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x32647cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x326480: 0x14690003  bne         $v1, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x326480u;
    {
        const bool branch_taken_0x326480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        ctx->pc = 0x326484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326480u;
        // 0x326484: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326480) {
            ctx->pc = 0x326490u;
            goto label_326490;
        }
    }
    ctx->pc = 0x326488u;
    // 0x326488: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x326488u;
    {
        const bool branch_taken_0x326488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326488u;
        // 0x32648c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326488) {
            ctx->pc = 0x3264A4u;
            goto label_3264a4;
        }
    }
    ctx->pc = 0x326490u;
label_326490:
    // 0x326490: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x326490u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x326494: 0x2ce30002  sltiu       $v1, $a3, 0x2
    ctx->pc = 0x326494u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x326498: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x326498u;
    {
        const bool branch_taken_0x326498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326498u;
        // 0x32649c: 0x71180  sll         $v0, $a3, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326498) {
            ctx->pc = 0x326478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_326478;
        }
    }
    ctx->pc = 0x3264A0u;
    // 0x3264a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3264a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3264a4:
    // 0x3264a4: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x3264a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x3264a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3264a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3264ac: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x3264acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x3264b0: 0xc0c9b4e  jal         func_326D38
    ctx->pc = 0x3264B0u;
    SET_GPR_U32(ctx, 31, 0x3264B8u);
    ctx->pc = 0x3264B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3264B0u;
    // 0x3264b4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326D38u, 0x3264B0u, 0x3264B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3264B8u;
label_3264b8:
    // 0x3264b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3264b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3264bc: 0xc0c9b4e  jal         func_326D38
    ctx->pc = 0x3264BCu;
    SET_GPR_U32(ctx, 31, 0x3264C4u);
    ctx->pc = 0x3264C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3264BCu;
    // 0x3264c0: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326D38u, 0x3264BCu, 0x3264C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3264C4u;
label_3264c4:
    // 0x3264c4: 0xc0c9ace  jal         func_326B38
    ctx->pc = 0x3264C4u;
    SET_GPR_U32(ctx, 31, 0x3264CCu);
    ctx->pc = 0x3264C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3264C4u;
    // 0x3264c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326B38u, 0x3264C4u, 0x3264CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3264CCu;
label_3264cc:
    // 0x3264cc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3264ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3264d0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3264d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3264d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3264d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3264d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3264d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3264dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3264DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3264E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3264DCu;
        // 0x3264e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3264DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3264E4u;
    // 0x3264e4: 0x0  nop
    ctx->pc = 0x3264e4u;
    // NOP
    ctx->pc = 0x3264e8u;
}
