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

// Function: sub_0016B1A0
// Address: 0x16b1a0 - 0x16b210
void sub_0016B1A0_0x16b1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B1A0_0x16b1a0");
#endif

    switch (ctx->pc) {
        case 0x16b1e0u: goto label_16b1e0;
        case 0x16b200u: goto label_16b200;
        default: break;
    }

    ctx->pc = 0x16b1a0u;

    // 0x16b1a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16b1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16b1a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16b1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16b1a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x16b1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x16b1ac: 0x8f83bac8  lw          $v1, -0x4538($gp)
    ctx->pc = 0x16b1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949576)));
    // 0x16b1b0: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x16b1b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x16b1b4: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x16B1B4u;
    {
        const bool branch_taken_0x16b1b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b1b4) {
            ctx->pc = 0x16B200u;
            goto label_16b200;
        }
    }
    ctx->pc = 0x16B1BCu;
    // 0x16b1bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16b1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16b1c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16b1c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16b1c4: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x16b1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x16b1c8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16b1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x16b1cc: 0x24a54240  addiu       $a1, $a1, 0x4240
    ctx->pc = 0x16b1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16960));
    // 0x16b1d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16b1d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b1d4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x16b1d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b1d8: 0xc08f558  jal         func_23D560
    ctx->pc = 0x16B1D8u;
    SET_GPR_U32(ctx, 31, 0x16B1E0u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x16B1D8u, 0x16B1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B1E0u;
label_16b1e0:
    // 0x16b1e0: 0x8f82bac8  lw          $v0, -0x4538($gp)
    ctx->pc = 0x16b1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949576)));
    // 0x16b1e4: 0xaf828ee8  sw          $v0, -0x7118($gp)
    ctx->pc = 0x16b1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938344), GPR_U32(ctx, 2));
    // 0x16b1e8: 0x8f82bac8  lw          $v0, -0x4538($gp)
    ctx->pc = 0x16b1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949576)));
    // 0x16b1ec: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x16b1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x16b1f0: 0xaf82bac8  sw          $v0, -0x4538($gp)
    ctx->pc = 0x16b1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949576), GPR_U32(ctx, 2));
    // 0x16b1f4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16b1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b1f8: 0xc05ace8  jal         func_16B3A0
    ctx->pc = 0x16B1F8u;
    SET_GPR_U32(ctx, 31, 0x16B200u);
    ctx->pc = 0x16B3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B3A0u, 0x16B1F8u, 0x16B200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B200u;
label_16b200:
    // 0x16b200: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b204: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x16b204u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16b208: 0x3e00008  jr          $ra
    ctx->pc = 0x16B208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B210u;
}
