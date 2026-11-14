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

// Function: sub_0016B280
// Address: 0x16b280 - 0x16b310
void sub_0016B280_0x16b280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B280_0x16b280");
#endif

    switch (ctx->pc) {
        case 0x16b2d8u: goto label_16b2d8;
        case 0x16b2f8u: goto label_16b2f8;
        default: break;
    }

    ctx->pc = 0x16b280u;

    // 0x16b280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16b280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16b284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16b284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16b288: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x16b288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x16b28c: 0x8f84bac8  lw          $a0, -0x4538($gp)
    ctx->pc = 0x16b28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949576)));
    // 0x16b290: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16b290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b294: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x16b294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x16b298: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16B298u;
    {
        const bool branch_taken_0x16b298 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x16b298) {
            ctx->pc = 0x16B2ACu;
            goto label_16b2ac;
        }
    }
    ctx->pc = 0x16B2A0u;
    // 0x16b2a0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x16B2A0u;
    {
        const bool branch_taken_0x16b2a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b2a0) {
            ctx->pc = 0x16B2ACu;
            goto label_16b2ac;
        }
    }
    ctx->pc = 0x16B2A8u;
    // 0x16b2a8: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x16b2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_16b2ac:
    // 0x16b2ac: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x16B2ACu;
    {
        const bool branch_taken_0x16b2ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b2ac) {
            ctx->pc = 0x16B2F8u;
            goto label_16b2f8;
        }
    }
    ctx->pc = 0x16B2B4u;
    // 0x16b2b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16b2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16b2b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16b2b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16b2bc: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x16b2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x16b2c0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16b2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x16b2c4: 0x24a54240  addiu       $a1, $a1, 0x4240
    ctx->pc = 0x16b2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16960));
    // 0x16b2c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16b2c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b2cc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x16b2ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b2d0: 0xc08f558  jal         func_23D560
    ctx->pc = 0x16B2D0u;
    SET_GPR_U32(ctx, 31, 0x16B2D8u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x16B2D0u, 0x16B2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B2D8u;
label_16b2d8:
    // 0x16b2d8: 0x8f82bac8  lw          $v0, -0x4538($gp)
    ctx->pc = 0x16b2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949576)));
    // 0x16b2dc: 0xaf828ee8  sw          $v0, -0x7118($gp)
    ctx->pc = 0x16b2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938344), GPR_U32(ctx, 2));
    // 0x16b2e0: 0x8f82bac8  lw          $v0, -0x4538($gp)
    ctx->pc = 0x16b2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949576)));
    // 0x16b2e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16b2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16b2e8: 0xaf82bac8  sw          $v0, -0x4538($gp)
    ctx->pc = 0x16b2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949576), GPR_U32(ctx, 2));
    // 0x16b2ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16b2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b2f0: 0xc05ace8  jal         func_16B3A0
    ctx->pc = 0x16B2F0u;
    SET_GPR_U32(ctx, 31, 0x16B2F8u);
    ctx->pc = 0x16B3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B3A0u, 0x16B2F0u, 0x16B2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B2F8u;
label_16b2f8:
    // 0x16b2f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b2f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b2fc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x16b2fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16b300: 0x3e00008  jr          $ra
    ctx->pc = 0x16B300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B308u;
    // 0x16b308: 0x0  nop
    ctx->pc = 0x16b308u;
    // NOP
    // 0x16b30c: 0x0  nop
    ctx->pc = 0x16b30cu;
    // NOP
    ctx->pc = 0x16b310u;
}
