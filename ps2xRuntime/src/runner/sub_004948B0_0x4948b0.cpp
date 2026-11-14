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

// Function: sub_004948B0
// Address: 0x4948b0 - 0x494930
void sub_004948B0_0x4948b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004948B0_0x4948b0");
#endif

    ctx->pc = 0x4948b0u;

    // 0x4948b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4948b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4948b4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x4948b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x4948b8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x4948b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x4948bc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4948bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4948c0: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4948C0u;
    {
        const bool branch_taken_0x4948c0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x4948c0) {
            ctx->pc = 0x4948D8u;
            goto label_4948d8;
        }
    }
    ctx->pc = 0x4948C8u;
    // 0x4948c8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4948c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4948cc: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x4948ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x4948d0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x4948D0u;
    {
        const bool branch_taken_0x4948d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4948d0) {
            ctx->pc = 0x4948E0u;
            goto label_4948e0;
        }
    }
    ctx->pc = 0x4948D8u;
label_4948d8:
    // 0x4948d8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4948D8u;
    {
        const bool branch_taken_0x4948d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4948d8) {
            ctx->pc = 0x494920u;
            goto label_494920;
        }
    }
    ctx->pc = 0x4948E0u;
label_4948e0:
    // 0x4948e0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4948e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4948e4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4948E4u;
    {
        const bool branch_taken_0x4948e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4948e4) {
            ctx->pc = 0x494904u;
            goto label_494904;
        }
    }
    ctx->pc = 0x4948ECu;
    // 0x4948ec: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4948ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4948f0: 0x8f83c14c  lw          $v1, -0x3EB4($gp)
    ctx->pc = 0x4948f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951244)));
    // 0x4948f4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4948f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4948f8: 0xaf83c14c  sw          $v1, -0x3EB4($gp)
    ctx->pc = 0x4948f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951244), GPR_U32(ctx, 3));
    // 0x4948fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4948FCu;
    {
        const bool branch_taken_0x4948fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4948fc) {
            ctx->pc = 0x494920u;
            goto label_494920;
        }
    }
    ctx->pc = 0x494904u;
label_494904:
    // 0x494904: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x494904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x494908: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x494908u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x49490c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x49490cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x494910: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x494910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x494914: 0x8f83c14c  lw          $v1, -0x3EB4($gp)
    ctx->pc = 0x494914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951244)));
    // 0x494918: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x494918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x49491c: 0xaf83c14c  sw          $v1, -0x3EB4($gp)
    ctx->pc = 0x49491cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951244), GPR_U32(ctx, 3));
label_494920:
    // 0x494920: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x494920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x494924: 0x3e00008  jr          $ra
    ctx->pc = 0x494924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x494924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49492Cu;
    // 0x49492c: 0x0  nop
    ctx->pc = 0x49492cu;
    // NOP
    ctx->pc = 0x494930u;
}
