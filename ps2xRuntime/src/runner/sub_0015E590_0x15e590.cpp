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

// Function: sub_0015E590
// Address: 0x15e590 - 0x15e620
void sub_0015E590_0x15e590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E590_0x15e590");
#endif

    switch (ctx->pc) {
        case 0x15e5ccu: goto label_15e5cc;
        case 0x15e60cu: goto label_15e60c;
        default: break;
    }

    ctx->pc = 0x15e590u;

    // 0x15e590: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15e590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15e594: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15e594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15e598: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x15e598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x15e59c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x15e59cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x15e5a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x15e5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e5a4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15e5a8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x15e5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e5ac: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x15e5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15e5b0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x15E5B0u;
    {
        const bool branch_taken_0x15e5b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15e5b0) {
            ctx->pc = 0x15E5E4u;
            goto label_15e5e4;
        }
    }
    ctx->pc = 0x15E5B8u;
    // 0x15e5b8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x15e5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e5bc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x15e5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15e5c0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x15e5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15e5c4: 0xc057a50  jal         func_15E940
    ctx->pc = 0x15E5C4u;
    SET_GPR_U32(ctx, 31, 0x15E5CCu);
    ctx->pc = 0x15E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E940u, 0x15E5C4u, 0x15E5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E5CCu;
label_15e5cc:
    // 0x15e5cc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x15e5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e5d0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x15e5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15e5d4: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x15e5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x15e5d8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x15e5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x15e5dc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15E5DCu;
    {
        const bool branch_taken_0x15e5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e5dc) {
            ctx->pc = 0x15E60Cu;
            goto label_15e60c;
        }
    }
    ctx->pc = 0x15E5E4u;
label_15e5e4:
    // 0x15e5e4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x15e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e5e8: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x15e5e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x15e5ec: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x15e5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e5f0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x15e5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15e5f4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x15e5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15e5f8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x15e5f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x15e5fc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x15e5fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e600: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x15e600u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e604: 0xc057988  jal         func_15E620
    ctx->pc = 0x15E604u;
    SET_GPR_U32(ctx, 31, 0x15E60Cu);
    ctx->pc = 0x15E620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E620u, 0x15E604u, 0x15E60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E60Cu;
label_15e60c:
    // 0x15e60c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15e60cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e610: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x15e610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15e614: 0x3e00008  jr          $ra
    ctx->pc = 0x15E614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E61Cu;
    // 0x15e61c: 0x0  nop
    ctx->pc = 0x15e61cu;
    // NOP
    ctx->pc = 0x15e620u;
}
