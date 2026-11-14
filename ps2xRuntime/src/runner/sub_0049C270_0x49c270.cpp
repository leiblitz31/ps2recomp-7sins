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

// Function: sub_0049C270
// Address: 0x49c270 - 0x49c2d8
void sub_0049C270_0x49c270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049C270_0x49c270");
#endif

    switch (ctx->pc) {
        case 0x49c270u: goto label_49c270;
        case 0x49c274u: goto label_49c274;
        case 0x49c278u: goto label_49c278;
        case 0x49c27cu: goto label_49c27c;
        case 0x49c280u: goto label_49c280;
        case 0x49c284u: goto label_49c284;
        case 0x49c288u: goto label_49c288;
        case 0x49c28cu: goto label_49c28c;
        case 0x49c290u: goto label_49c290;
        case 0x49c294u: goto label_49c294;
        case 0x49c298u: goto label_49c298;
        case 0x49c29cu: goto label_49c29c;
        case 0x49c2a0u: goto label_49c2a0;
        case 0x49c2a4u: goto label_49c2a4;
        case 0x49c2a8u: goto label_49c2a8;
        case 0x49c2acu: goto label_49c2ac;
        case 0x49c2b0u: goto label_49c2b0;
        case 0x49c2b4u: goto label_49c2b4;
        case 0x49c2b8u: goto label_49c2b8;
        case 0x49c2bcu: goto label_49c2bc;
        case 0x49c2c0u: goto label_49c2c0;
        case 0x49c2c4u: goto label_49c2c4;
        case 0x49c2c8u: goto label_49c2c8;
        case 0x49c2ccu: goto label_49c2cc;
        case 0x49c2d0u: goto label_49c2d0;
        case 0x49c2d4u: goto label_49c2d4;
        default: break;
    }

    ctx->pc = 0x49c270u;

label_49c270:
    // 0x49c270: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x49c270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_49c274:
    // 0x49c274: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x49c274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_49c278:
    // 0x49c278: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x49c278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_49c27c:
    // 0x49c27c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x49c27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_49c280:
    // 0x49c280: 0x2791c198  addiu       $s1, $gp, -0x3E68
    ctx->pc = 0x49c280u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951320));
label_49c284:
    // 0x49c284: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x49c284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_49c288:
    // 0x49c288: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x49c288u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_49c28c:
    // 0x49c28c: 0x8f90c198  lw          $s0, -0x3E68($gp)
    ctx->pc = 0x49c28cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951320)));
label_49c290:
    // 0x49c290: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x49c290u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49c294:
    // 0x49c294: 0x12110009  beq         $s0, $s1, . + 4 + (0x9 << 2)
label_49c298:
    if (ctx->pc == 0x49C298u) {
        ctx->pc = 0x49C298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C294u;
        // 0x49c298: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C29Cu;
        goto label_49c29c;
    }
    ctx->pc = 0x49C294u;
    {
        const bool branch_taken_0x49c294 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x49C298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C294u;
        // 0x49c298: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c294) {
            ctx->pc = 0x49C2BCu;
            goto label_49c2bc;
        }
    }
    ctx->pc = 0x49C29Cu;
label_49c29c:
    // 0x49c29c: 0x2604fffc  addiu       $a0, $s0, -0x4
    ctx->pc = 0x49c29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
label_49c2a0:
    // 0x49c2a0: 0x260f809  jalr        $s3
label_49c2a4:
    if (ctx->pc == 0x49C2A4u) {
        ctx->pc = 0x49C2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C2A0u;
        // 0x49c2a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C2A8u;
        goto label_49c2a8;
    }
    ctx->pc = 0x49C2A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x49C2A8u);
        ctx->pc = 0x49C2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C2A0u;
        // 0x49c2a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C2A0u, 0x49C2A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49C2A8u;
label_49c2a8:
    // 0x49c2a8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_49c2ac:
    if (ctx->pc == 0x49C2ACu) {
        ctx->pc = 0x49C2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C2A8u;
        // 0x49c2ac: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C2B0u;
        goto label_49c2b0;
    }
    ctx->pc = 0x49C2A8u;
    {
        const bool branch_taken_0x49c2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49c2a8) {
            ctx->pc = 0x49C2ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49C2A8u;
            // 0x49c2ac: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49C2C0u;
            goto label_49c2c0;
        }
    }
    ctx->pc = 0x49C2B0u;
label_49c2b0:
    // 0x49c2b0: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x49c2b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_49c2b4:
    // 0x49c2b4: 0x1611fffa  bne         $s0, $s1, . + 4 + (-0x6 << 2)
label_49c2b8:
    if (ctx->pc == 0x49C2B8u) {
        ctx->pc = 0x49C2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C2B4u;
        // 0x49c2b8: 0x2604fffc  addiu       $a0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C2BCu;
        goto label_49c2bc;
    }
    ctx->pc = 0x49C2B4u;
    {
        const bool branch_taken_0x49c2b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x49C2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C2B4u;
        // 0x49c2b8: 0x2604fffc  addiu       $a0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c2b4) {
            ctx->pc = 0x49C2A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49c2a0;
        }
    }
    ctx->pc = 0x49C2BCu;
label_49c2bc:
    // 0x49c2bc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x49c2bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_49c2c0:
    // 0x49c2c0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x49c2c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49c2c4:
    // 0x49c2c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x49c2c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49c2c8:
    // 0x49c2c8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x49c2c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49c2cc:
    // 0x49c2cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49c2ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49c2d0:
    // 0x49c2d0: 0x3e00008  jr          $ra
label_49c2d4:
    if (ctx->pc == 0x49C2D4u) {
        ctx->pc = 0x49C2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C2D0u;
        // 0x49c2d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49C2D8u;
        goto label_fallthrough_0x49c2d0;
    }
    ctx->pc = 0x49C2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C2D0u;
        // 0x49c2d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x49c2d0:
    ctx->pc = 0x49C2D8u;
}
