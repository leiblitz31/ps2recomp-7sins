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

// Function: sub_00230390
// Address: 0x230390 - 0x230400
void sub_00230390_0x230390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230390_0x230390");
#endif

    switch (ctx->pc) {
        case 0x2303acu: goto label_2303ac;
        default: break;
    }

    ctx->pc = 0x230390u;

    // 0x230390: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x230390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x230394: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x230394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x230398: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x230398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23039c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23039cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2303a0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2303a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2303a4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2303A4u;
    {
        const bool branch_taken_0x2303a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2303a4) {
            ctx->pc = 0x2303D4u;
            goto label_2303d4;
        }
    }
    ctx->pc = 0x2303ACu;
label_2303ac:
    // 0x2303ac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2303acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2303b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2303b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2303b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2303b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2303b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2303b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2303bc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2303bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2303c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2303c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2303c4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2303c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2303c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2303c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2303cc: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x2303ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2303d0: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x2303d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_2303d4:
    // 0x2303d4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2303d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2303d8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2303D8u;
    {
        const bool branch_taken_0x2303d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2303d8) {
            ctx->pc = 0x2303ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2303ac;
        }
    }
    ctx->pc = 0x2303E0u;
    // 0x2303e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2303e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2303e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2303e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2303e8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2303e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2303ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2303ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2303ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2303F4u;
    // 0x2303f4: 0x0  nop
    ctx->pc = 0x2303f4u;
    // NOP
    // 0x2303f8: 0x0  nop
    ctx->pc = 0x2303f8u;
    // NOP
    // 0x2303fc: 0x0  nop
    ctx->pc = 0x2303fcu;
    // NOP
    ctx->pc = 0x230400u;
}
