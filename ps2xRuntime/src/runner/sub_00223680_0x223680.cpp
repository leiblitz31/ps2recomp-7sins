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

// Function: sub_00223680
// Address: 0x223680 - 0x223710
void sub_00223680_0x223680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223680_0x223680");
#endif

    switch (ctx->pc) {
        case 0x2236bcu: goto label_2236bc;
        case 0x2236fcu: goto label_2236fc;
        default: break;
    }

    ctx->pc = 0x223680u;

    // 0x223680: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x223680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x223684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223688: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x223688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x22368c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x22368cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x223690: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x223690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223694: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x223694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x223698: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x223698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22369c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x22369cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2236a0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2236A0u;
    {
        const bool branch_taken_0x2236a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2236a0) {
            ctx->pc = 0x2236D4u;
            goto label_2236d4;
        }
    }
    ctx->pc = 0x2236A8u;
    // 0x2236a8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2236a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2236ac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2236acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2236b0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2236b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2236b4: 0xc088ea0  jal         func_223A80
    ctx->pc = 0x2236B4u;
    SET_GPR_U32(ctx, 31, 0x2236BCu);
    ctx->pc = 0x223A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A80u, 0x2236B4u, 0x2236BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2236BCu;
label_2236bc:
    // 0x2236bc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2236bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2236c0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2236c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2236c4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2236c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2236c8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2236c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2236cc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2236CCu;
    {
        const bool branch_taken_0x2236cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2236cc) {
            ctx->pc = 0x2236FCu;
            goto label_2236fc;
        }
    }
    ctx->pc = 0x2236D4u;
label_2236d4:
    // 0x2236d4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2236d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2236d8: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x2236d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x2236dc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2236dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2236e0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2236e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2236e4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2236e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2236e8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x2236e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2236ec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2236ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2236f0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2236f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2236f4: 0xc088dc4  jal         func_223710
    ctx->pc = 0x2236F4u;
    SET_GPR_U32(ctx, 31, 0x2236FCu);
    ctx->pc = 0x223710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223710u, 0x2236F4u, 0x2236FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2236FCu;
label_2236fc:
    // 0x2236fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2236fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223700: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x223700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x223704: 0x3e00008  jr          $ra
    ctx->pc = 0x223704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22370Cu;
    // 0x22370c: 0x0  nop
    ctx->pc = 0x22370cu;
    // NOP
    ctx->pc = 0x223710u;
}
