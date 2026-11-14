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

// Function: sub_0022F580
// Address: 0x22f580 - 0x22f610
void sub_0022F580_0x22f580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F580_0x22f580");
#endif

    switch (ctx->pc) {
        case 0x22f5bcu: goto label_22f5bc;
        case 0x22f5fcu: goto label_22f5fc;
        default: break;
    }

    ctx->pc = 0x22f580u;

    // 0x22f580: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22f580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22f584: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22f584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22f588: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x22f588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x22f58c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x22f58cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x22f590: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x22f590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f594: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x22f594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22f598: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x22f598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f59c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x22f59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x22f5a0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22F5A0u;
    {
        const bool branch_taken_0x22f5a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22f5a0) {
            ctx->pc = 0x22F5D4u;
            goto label_22f5d4;
        }
    }
    ctx->pc = 0x22F5A8u;
    // 0x22f5a8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x22f5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f5ac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x22f5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22f5b0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x22f5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22f5b4: 0xc08be4c  jal         func_22F930
    ctx->pc = 0x22F5B4u;
    SET_GPR_U32(ctx, 31, 0x22F5BCu);
    ctx->pc = 0x22F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F930u, 0x22F5B4u, 0x22F5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F5BCu;
label_22f5bc:
    // 0x22f5bc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22f5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f5c0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x22f5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22f5c4: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x22f5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x22f5c8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x22f5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x22f5cc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x22F5CCu;
    {
        const bool branch_taken_0x22f5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f5cc) {
            ctx->pc = 0x22F5FCu;
            goto label_22f5fc;
        }
    }
    ctx->pc = 0x22F5D4u;
label_22f5d4:
    // 0x22f5d4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x22f5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f5d8: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x22f5d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x22f5dc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22f5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f5e0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x22f5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22f5e4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x22f5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22f5e8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x22f5e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x22f5ec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x22f5ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f5f0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x22f5f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f5f4: 0xc08bd84  jal         func_22F610
    ctx->pc = 0x22F5F4u;
    SET_GPR_U32(ctx, 31, 0x22F5FCu);
    ctx->pc = 0x22F610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F610u, 0x22F5F4u, 0x22F5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F5FCu;
label_22f5fc:
    // 0x22f5fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22f5fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f600: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x22f600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22f604: 0x3e00008  jr          $ra
    ctx->pc = 0x22F604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F60Cu;
    // 0x22f60c: 0x0  nop
    ctx->pc = 0x22f60cu;
    // NOP
    ctx->pc = 0x22f610u;
}
