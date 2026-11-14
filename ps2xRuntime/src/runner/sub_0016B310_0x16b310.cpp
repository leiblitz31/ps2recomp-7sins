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

// Function: sub_0016B310
// Address: 0x16b310 - 0x16b3a0
void sub_0016B310_0x16b310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B310_0x16b310");
#endif

    switch (ctx->pc) {
        case 0x16b368u: goto label_16b368;
        case 0x16b388u: goto label_16b388;
        default: break;
    }

    ctx->pc = 0x16b310u;

    // 0x16b310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16b310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16b314: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16b314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16b318: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x16b318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x16b31c: 0x8f84bac8  lw          $a0, -0x4538($gp)
    ctx->pc = 0x16b31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949576)));
    // 0x16b320: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16b320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b324: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x16b324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x16b328: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16B328u;
    {
        const bool branch_taken_0x16b328 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x16b328) {
            ctx->pc = 0x16B33Cu;
            goto label_16b33c;
        }
    }
    ctx->pc = 0x16B330u;
    // 0x16b330: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x16B330u;
    {
        const bool branch_taken_0x16b330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b330) {
            ctx->pc = 0x16B33Cu;
            goto label_16b33c;
        }
    }
    ctx->pc = 0x16B338u;
    // 0x16b338: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x16b338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_16b33c:
    // 0x16b33c: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x16B33Cu;
    {
        const bool branch_taken_0x16b33c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b33c) {
            ctx->pc = 0x16B388u;
            goto label_16b388;
        }
    }
    ctx->pc = 0x16B344u;
    // 0x16b344: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16b344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16b348: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16b348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16b34c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x16b34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x16b350: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16b350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x16b354: 0x24a54240  addiu       $a1, $a1, 0x4240
    ctx->pc = 0x16b354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16960));
    // 0x16b358: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16b358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b35c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x16b35cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b360: 0xc08f558  jal         func_23D560
    ctx->pc = 0x16B360u;
    SET_GPR_U32(ctx, 31, 0x16B368u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x16B360u, 0x16B368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B368u;
label_16b368:
    // 0x16b368: 0x8f82bac8  lw          $v0, -0x4538($gp)
    ctx->pc = 0x16b368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949576)));
    // 0x16b36c: 0xaf828ee8  sw          $v0, -0x7118($gp)
    ctx->pc = 0x16b36cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938344), GPR_U32(ctx, 2));
    // 0x16b370: 0x8f82bac8  lw          $v0, -0x4538($gp)
    ctx->pc = 0x16b370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949576)));
    // 0x16b374: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16b374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16b378: 0xaf82bac8  sw          $v0, -0x4538($gp)
    ctx->pc = 0x16b378u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949576), GPR_U32(ctx, 2));
    // 0x16b37c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16b37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b380: 0xc05ace8  jal         func_16B3A0
    ctx->pc = 0x16B380u;
    SET_GPR_U32(ctx, 31, 0x16B388u);
    ctx->pc = 0x16B3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B3A0u, 0x16B380u, 0x16B388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B388u;
label_16b388:
    // 0x16b388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b38c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x16b38cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16b390: 0x3e00008  jr          $ra
    ctx->pc = 0x16B390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B398u;
    // 0x16b398: 0x0  nop
    ctx->pc = 0x16b398u;
    // NOP
    // 0x16b39c: 0x0  nop
    ctx->pc = 0x16b39cu;
    // NOP
    ctx->pc = 0x16b3a0u;
}
