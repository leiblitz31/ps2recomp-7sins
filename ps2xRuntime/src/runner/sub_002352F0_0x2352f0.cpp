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

// Function: sub_002352F0
// Address: 0x2352f0 - 0x235380
void sub_002352F0_0x2352f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002352F0_0x2352f0");
#endif

    switch (ctx->pc) {
        case 0x23532cu: goto label_23532c;
        case 0x23536cu: goto label_23536c;
        default: break;
    }

    ctx->pc = 0x2352f0u;

    // 0x2352f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2352f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2352f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2352f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2352f8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2352f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2352fc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2352fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x235300: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x235300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235304: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x235304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x235308: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x235308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23530c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x23530cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x235310: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x235310u;
    {
        const bool branch_taken_0x235310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x235310) {
            ctx->pc = 0x235344u;
            goto label_235344;
        }
    }
    ctx->pc = 0x235318u;
    // 0x235318: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x235318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23531c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x23531cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x235320: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x235320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x235324: 0xc051934  jal         func_1464D0
    ctx->pc = 0x235324u;
    SET_GPR_U32(ctx, 31, 0x23532Cu);
    ctx->pc = 0x1464D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1464D0u, 0x235324u, 0x23532Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23532Cu;
label_23532c:
    // 0x23532c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23532cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235330: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x235330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x235334: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x235334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x235338: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x235338u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x23533c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x23533Cu;
    {
        const bool branch_taken_0x23533c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23533c) {
            ctx->pc = 0x23536Cu;
            goto label_23536c;
        }
    }
    ctx->pc = 0x235344u;
label_235344:
    // 0x235344: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x235344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235348: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x235348u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x23534c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23534cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235350: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x235350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x235354: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x235354u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x235358: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x235358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x23535c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x23535cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x235360: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x235360u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x235364: 0xc08d4e0  jal         func_235380
    ctx->pc = 0x235364u;
    SET_GPR_U32(ctx, 31, 0x23536Cu);
    ctx->pc = 0x235380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235380u, 0x235364u, 0x23536Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23536Cu;
label_23536c:
    // 0x23536c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23536cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235370: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x235370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x235374: 0x3e00008  jr          $ra
    ctx->pc = 0x235374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23537Cu;
    // 0x23537c: 0x0  nop
    ctx->pc = 0x23537cu;
    // NOP
    ctx->pc = 0x235380u;
}
