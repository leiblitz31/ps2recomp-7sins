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

// Function: sub_00278300
// Address: 0x278300 - 0x278390
void sub_00278300_0x278300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278300_0x278300");
#endif

    switch (ctx->pc) {
        case 0x27833cu: goto label_27833c;
        case 0x27837cu: goto label_27837c;
        default: break;
    }

    ctx->pc = 0x278300u;

    // 0x278300: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x278300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x278304: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x278304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x278308: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x278308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x27830c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x27830cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x278310: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x278310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278314: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x278314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x278318: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x278318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27831c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x27831cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x278320: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x278320u;
    {
        const bool branch_taken_0x278320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x278320) {
            ctx->pc = 0x278354u;
            goto label_278354;
        }
    }
    ctx->pc = 0x278328u;
    // 0x278328: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x278328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27832c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x27832cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x278330: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x278330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x278334: 0xc09e1ac  jal         func_2786B0
    ctx->pc = 0x278334u;
    SET_GPR_U32(ctx, 31, 0x27833Cu);
    ctx->pc = 0x2786B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2786B0u, 0x278334u, 0x27833Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27833Cu;
label_27833c:
    // 0x27833c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x27833cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278340: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x278340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x278344: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x278344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x278348: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x278348u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x27834c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27834Cu;
    {
        const bool branch_taken_0x27834c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27834c) {
            ctx->pc = 0x27837Cu;
            goto label_27837c;
        }
    }
    ctx->pc = 0x278354u;
label_278354:
    // 0x278354: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x278354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278358: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x278358u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x27835c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x27835cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278360: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x278360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x278364: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x278364u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x278368: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x278368u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x27836c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x27836cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278370: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x278370u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278374: 0xc09e0e4  jal         func_278390
    ctx->pc = 0x278374u;
    SET_GPR_U32(ctx, 31, 0x27837Cu);
    ctx->pc = 0x278390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278390u, 0x278374u, 0x27837Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27837Cu;
label_27837c:
    // 0x27837c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27837cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278380: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x278380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x278384: 0x3e00008  jr          $ra
    ctx->pc = 0x278384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27838Cu;
    // 0x27838c: 0x0  nop
    ctx->pc = 0x27838cu;
    // NOP
    ctx->pc = 0x278390u;
}
