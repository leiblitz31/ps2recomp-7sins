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

// Function: sub_002DC790
// Address: 0x2dc790 - 0x2dc820
void sub_002DC790_0x2dc790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC790_0x2dc790");
#endif

    switch (ctx->pc) {
        case 0x2dc7ccu: goto label_2dc7cc;
        case 0x2dc80cu: goto label_2dc80c;
        default: break;
    }

    ctx->pc = 0x2dc790u;

    // 0x2dc790: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2dc790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2dc794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dc798: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2dc798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2dc79c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2dc79cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2dc7a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2dc7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dc7a4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2dc7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dc7a8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2dc7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dc7ac: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2dc7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2dc7b0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2DC7B0u;
    {
        const bool branch_taken_0x2dc7b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2dc7b0) {
            ctx->pc = 0x2DC7E4u;
            goto label_2dc7e4;
        }
    }
    ctx->pc = 0x2DC7B8u;
    // 0x2dc7b8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2dc7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dc7bc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2dc7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dc7c0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2dc7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dc7c4: 0xc0b72e4  jal         func_2DCB90
    ctx->pc = 0x2DC7C4u;
    SET_GPR_U32(ctx, 31, 0x2DC7CCu);
    ctx->pc = 0x2DCB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCB90u, 0x2DC7C4u, 0x2DC7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC7CCu;
label_2dc7cc:
    // 0x2dc7cc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2dc7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dc7d0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2dc7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2dc7d4: 0x24630054  addiu       $v1, $v1, 0x54
    ctx->pc = 0x2dc7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x2dc7d8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2dc7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2dc7dc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DC7DCu;
    {
        const bool branch_taken_0x2dc7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc7dc) {
            ctx->pc = 0x2DC80Cu;
            goto label_2dc80c;
        }
    }
    ctx->pc = 0x2DC7E4u;
label_2dc7e4:
    // 0x2dc7e4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2dc7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dc7e8: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x2dc7e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc7ec: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2dc7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dc7f0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2dc7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dc7f4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2dc7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dc7f8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x2dc7f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2dc7fc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2dc7fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc800: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2dc800u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc804: 0xc0b7208  jal         func_2DC820
    ctx->pc = 0x2DC804u;
    SET_GPR_U32(ctx, 31, 0x2DC80Cu);
    ctx->pc = 0x2DC820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC820u, 0x2DC804u, 0x2DC80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC80Cu;
label_2dc80c:
    // 0x2dc80c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc80cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc810: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2dc810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2dc814: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC81Cu;
    // 0x2dc81c: 0x0  nop
    ctx->pc = 0x2dc81cu;
    // NOP
    ctx->pc = 0x2dc820u;
}
