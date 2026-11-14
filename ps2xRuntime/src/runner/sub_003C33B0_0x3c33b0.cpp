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

// Function: sub_003C33B0
// Address: 0x3c33b0 - 0x3c3420
void sub_003C33B0_0x3c33b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C33B0_0x3c33b0");
#endif

    switch (ctx->pc) {
        case 0x3c33b0u: goto label_3c33b0;
        case 0x3c33b4u: goto label_3c33b4;
        case 0x3c33b8u: goto label_3c33b8;
        case 0x3c33bcu: goto label_3c33bc;
        case 0x3c33c0u: goto label_3c33c0;
        case 0x3c33c4u: goto label_3c33c4;
        case 0x3c33c8u: goto label_3c33c8;
        case 0x3c33ccu: goto label_3c33cc;
        case 0x3c33d0u: goto label_3c33d0;
        case 0x3c33d4u: goto label_3c33d4;
        case 0x3c33d8u: goto label_3c33d8;
        case 0x3c33dcu: goto label_3c33dc;
        case 0x3c33e0u: goto label_3c33e0;
        case 0x3c33e4u: goto label_3c33e4;
        case 0x3c33e8u: goto label_3c33e8;
        case 0x3c33ecu: goto label_3c33ec;
        case 0x3c33f0u: goto label_3c33f0;
        case 0x3c33f4u: goto label_3c33f4;
        case 0x3c33f8u: goto label_3c33f8;
        case 0x3c33fcu: goto label_3c33fc;
        case 0x3c3400u: goto label_3c3400;
        case 0x3c3404u: goto label_3c3404;
        case 0x3c3408u: goto label_3c3408;
        case 0x3c340cu: goto label_3c340c;
        case 0x3c3410u: goto label_3c3410;
        case 0x3c3414u: goto label_3c3414;
        case 0x3c3418u: goto label_3c3418;
        case 0x3c341cu: goto label_3c341c;
        default: break;
    }

    ctx->pc = 0x3c33b0u;

label_3c33b0:
    // 0x3c33b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c33b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3c33b4:
    // 0x3c33b4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3c33b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3c33b8:
    // 0x3c33b8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3c33b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3c33bc:
    // 0x3c33bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c33bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3c33c0:
    // 0x3c33c0: 0x8c50dff0  lw          $s0, -0x2010($v0)
    ctx->pc = 0x3c33c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959088)));
label_3c33c4:
    // 0x3c33c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c33c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c33c8:
    // 0x3c33c8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3c33c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3c33cc:
    // 0x3c33cc: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_3c33d0:
    if (ctx->pc == 0x3C33D0u) {
        ctx->pc = 0x3C33D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C33CCu;
        // 0x3c33d0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C33D4u;
        goto label_3c33d4;
    }
    ctx->pc = 0x3C33CCu;
    {
        const bool branch_taken_0x3c33cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C33D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C33CCu;
        // 0x3c33d0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c33cc) {
            ctx->pc = 0x3C3404u;
            goto label_3c3404;
        }
    }
    ctx->pc = 0x3C33D4u;
label_3c33d4:
    // 0x3c33d4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3c33d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3c33d8:
    // 0x3c33d8: 0x2452e880  addiu       $s2, $v0, -0x1780
    ctx->pc = 0x3c33d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3c33dc:
    // 0x3c33dc: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x3c33dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_3c33e0:
    // 0x3c33e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c33e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c33e4:
    // 0x3c33e4: 0x40f809  jalr        $v0
label_3c33e8:
    if (ctx->pc == 0x3C33E8u) {
        ctx->pc = 0x3C33E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C33E4u;
        // 0x3c33e8: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C33ECu;
        goto label_3c33ec;
    }
    ctx->pc = 0x3C33E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C33ECu);
        ctx->pc = 0x3C33E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C33E4u;
        // 0x3c33e8: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C33E4u, 0x3C33ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C33ECu;
label_3c33ec:
    // 0x3c33ec: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3c33f0:
    if (ctx->pc == 0x3C33F0u) {
        ctx->pc = 0x3C33F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C33ECu;
        // 0x3c33f0: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C33F4u;
        goto label_3c33f4;
    }
    ctx->pc = 0x3C33ECu;
    {
        const bool branch_taken_0x3c33ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c33ec) {
            ctx->pc = 0x3C33F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C33ECu;
            // 0x3c33f0: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C33FCu;
            goto label_3c33fc;
        }
    }
    ctx->pc = 0x3C33F4u;
label_3c33f4:
    // 0x3c33f4: 0x10000004  b           . + 4 + (0x4 << 2)
label_3c33f8:
    if (ctx->pc == 0x3C33F8u) {
        ctx->pc = 0x3C33F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C33F4u;
        // 0x3c33f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C33FCu;
        goto label_3c33fc;
    }
    ctx->pc = 0x3C33F4u;
    {
        const bool branch_taken_0x3c33f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C33F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C33F4u;
        // 0x3c33f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c33f4) {
            ctx->pc = 0x3C3408u;
            goto label_3c3408;
        }
    }
    ctx->pc = 0x3C33FCu;
label_3c33fc:
    // 0x3c33fc: 0x5600fff8  bnel        $s0, $zero, . + 4 + (-0x8 << 2)
label_3c3400:
    if (ctx->pc == 0x3C3400u) {
        ctx->pc = 0x3C3400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C33FCu;
        // 0x3c3400: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3404u;
        goto label_3c3404;
    }
    ctx->pc = 0x3C33FCu;
    {
        const bool branch_taken_0x3c33fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c33fc) {
            ctx->pc = 0x3C3400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C33FCu;
            // 0x3c3400: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C33E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c33e0;
        }
    }
    ctx->pc = 0x3C3404u;
label_3c3404:
    // 0x3c3404: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c3404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c3408:
    // 0x3c3408: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3c3408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c340c:
    // 0x3c340c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c340cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c3410:
    // 0x3c3410: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3c3410u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c3414:
    // 0x3c3414: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c3414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c3418:
    // 0x3c3418: 0x3e00008  jr          $ra
label_3c341c:
    if (ctx->pc == 0x3C341Cu) {
        ctx->pc = 0x3C341Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3418u;
        // 0x3c341c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3420u;
        goto label_fallthrough_0x3c3418;
    }
    ctx->pc = 0x3C3418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C341Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3418u;
        // 0x3c341c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C3418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c3418:
    ctx->pc = 0x3C3420u;
}
