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

// Function: sub_00491680
// Address: 0x491680 - 0x491710
void sub_00491680_0x491680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00491680_0x491680");
#endif

    switch (ctx->pc) {
        case 0x4916bcu: goto label_4916bc;
        case 0x4916fcu: goto label_4916fc;
        default: break;
    }

    ctx->pc = 0x491680u;

    // 0x491680: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x491680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x491684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x491684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x491688: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x491688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x49168c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x49168cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x491690: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x491690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x491694: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x491694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x491698: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x491698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49169c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x49169cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4916a0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4916A0u;
    {
        const bool branch_taken_0x4916a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4916a0) {
            ctx->pc = 0x4916D4u;
            goto label_4916d4;
        }
    }
    ctx->pc = 0x4916A8u;
    // 0x4916a8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4916a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4916ac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4916acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4916b0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x4916b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4916b4: 0xc1246a0  jal         func_491A80
    ctx->pc = 0x4916B4u;
    SET_GPR_U32(ctx, 31, 0x4916BCu);
    ctx->pc = 0x491A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491A80u, 0x4916B4u, 0x4916BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4916BCu;
label_4916bc:
    // 0x4916bc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x4916bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4916c0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x4916c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4916c4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x4916c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x4916c8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x4916c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x4916cc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4916CCu;
    {
        const bool branch_taken_0x4916cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4916cc) {
            ctx->pc = 0x4916FCu;
            goto label_4916fc;
        }
    }
    ctx->pc = 0x4916D4u;
label_4916d4:
    // 0x4916d4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4916d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4916d8: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x4916d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x4916dc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x4916dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4916e0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x4916e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4916e4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x4916e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4916e8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x4916e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x4916ec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4916ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4916f0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x4916f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4916f4: 0xc1245c4  jal         func_491710
    ctx->pc = 0x4916F4u;
    SET_GPR_U32(ctx, 31, 0x4916FCu);
    ctx->pc = 0x491710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491710u, 0x4916F4u, 0x4916FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4916FCu;
label_4916fc:
    // 0x4916fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4916fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x491700: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x491700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x491704: 0x3e00008  jr          $ra
    ctx->pc = 0x491704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x491704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49170Cu;
    // 0x49170c: 0x0  nop
    ctx->pc = 0x49170cu;
    // NOP
    ctx->pc = 0x491710u;
}
