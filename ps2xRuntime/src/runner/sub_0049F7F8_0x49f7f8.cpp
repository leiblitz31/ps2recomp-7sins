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

// Function: sub_0049F7F8
// Address: 0x49f7f8 - 0x49f878
void sub_0049F7F8_0x49f7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049F7F8_0x49f7f8");
#endif

    switch (ctx->pc) {
        case 0x49f81cu: goto label_49f81c;
        case 0x49f838u: goto label_49f838;
        case 0x49f854u: goto label_49f854;
        default: break;
    }

    ctx->pc = 0x49f7f8u;

    // 0x49f7f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49f7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x49f7fc: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x49f7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x49f800: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x49f800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x49f804: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x49f804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x49f808: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49f808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x49f80c: 0x24845d70  addiu       $a0, $a0, 0x5D70
    ctx->pc = 0x49f80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23920));
    // 0x49f810: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49f810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49f814: 0xc127568  jal         func_49D5A0
    ctx->pc = 0x49F814u;
    SET_GPR_U32(ctx, 31, 0x49F81Cu);
    ctx->pc = 0x49F818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49F814u;
    // 0x49f818: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49D5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49D5A0u, 0x49F814u, 0x49F81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49F81Cu;
label_49f81c:
    // 0x49f81c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x49f81cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f820: 0x16300010  bne         $s1, $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x49F820u;
    {
        const bool branch_taken_0x49f820 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x49F824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F820u;
        // 0x49f824: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f820) {
            ctx->pc = 0x49F864u;
            goto label_49f864;
        }
    }
    ctx->pc = 0x49F828u;
    // 0x49f828: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x49f828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x49f82c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x49f82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49f830: 0xc12698e  jal         func_49A638
    ctx->pc = 0x49F830u;
    SET_GPR_U32(ctx, 31, 0x49F838u);
    ctx->pc = 0x49F834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49F830u;
    // 0x49f834: 0x24845d68  addiu       $a0, $a0, 0x5D68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49A638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A638u, 0x49F830u, 0x49F838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49F838u;
label_49f838:
    // 0x49f838: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x49f838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f83c: 0x56110009  bnel        $s0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x49F83Cu;
    {
        const bool branch_taken_0x49f83c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x49f83c) {
            ctx->pc = 0x49F840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49F83Cu;
            // 0x49f840: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49F864u;
            goto label_49f864;
        }
    }
    ctx->pc = 0x49F844u;
    // 0x49f844: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x49f844u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x49f848: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x49f848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49f84c: 0xc129a20  jal         func_4A6880
    ctx->pc = 0x49F84Cu;
    SET_GPR_U32(ctx, 31, 0x49F854u);
    ctx->pc = 0x49F850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49F84Cu;
    // 0x49f850: 0x24845d80  addiu       $a0, $a0, 0x5D80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6880u, 0x49F84Cu, 0x49F854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49F854u;
label_49f854:
    // 0x49f854: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49f854u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f858: 0x10700002  beq         $v1, $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x49F858u;
    {
        const bool branch_taken_0x49f858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x49F85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F858u;
        // 0x49f85c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f858) {
            ctx->pc = 0x49F864u;
            goto label_49f864;
        }
    }
    ctx->pc = 0x49F860u;
    // 0x49f860: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x49f860u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49f864:
    // 0x49f864: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x49f864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49f868: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49f868u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49f86c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49f86cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49f870: 0x3e00008  jr          $ra
    ctx->pc = 0x49F870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F870u;
        // 0x49f874: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49F878u;
}
