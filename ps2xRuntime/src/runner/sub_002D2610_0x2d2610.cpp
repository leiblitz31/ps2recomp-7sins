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

// Function: sub_002D2610
// Address: 0x2d2610 - 0x2d26a0
void sub_002D2610_0x2d2610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2610_0x2d2610");
#endif

    switch (ctx->pc) {
        case 0x2d264cu: goto label_2d264c;
        case 0x2d268cu: goto label_2d268c;
        default: break;
    }

    ctx->pc = 0x2d2610u;

    // 0x2d2610: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d2610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d2614: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d2614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d2618: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2d2618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2d261c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2d261cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2d2620: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d2620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2624: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2d2624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d2628: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d2628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d262c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2d262cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d2630: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D2630u;
    {
        const bool branch_taken_0x2d2630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d2630) {
            ctx->pc = 0x2D2664u;
            goto label_2d2664;
        }
    }
    ctx->pc = 0x2D2638u;
    // 0x2d2638: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d2638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d263c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2d263cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d2640: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2d2640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2644: 0xc0b4a4c  jal         func_2D2930
    ctx->pc = 0x2D2644u;
    SET_GPR_U32(ctx, 31, 0x2D264Cu);
    ctx->pc = 0x2D2930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2930u, 0x2D2644u, 0x2D264Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D264Cu;
label_2d264c:
    // 0x2d264c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2d264cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2650: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2d2650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d2654: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2d2654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2d2658: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2d2658u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2d265c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D265Cu;
    {
        const bool branch_taken_0x2d265c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d265c) {
            ctx->pc = 0x2D268Cu;
            goto label_2d268c;
        }
    }
    ctx->pc = 0x2D2664u;
label_2d2664:
    // 0x2d2664: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d2664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2668: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x2d2668u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d266c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2d266cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2670: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2d2670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d2674: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2d2674u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2678: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x2d2678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2d267c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d267cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2680: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2d2680u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2684: 0xc0b49a8  jal         func_2D26A0
    ctx->pc = 0x2D2684u;
    SET_GPR_U32(ctx, 31, 0x2D268Cu);
    ctx->pc = 0x2D26A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D26A0u, 0x2D2684u, 0x2D268Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D268Cu;
label_2d268c:
    // 0x2d268c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d268cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2690: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d2690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d2694: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D269Cu;
    // 0x2d269c: 0x0  nop
    ctx->pc = 0x2d269cu;
    // NOP
    ctx->pc = 0x2d26a0u;
}
