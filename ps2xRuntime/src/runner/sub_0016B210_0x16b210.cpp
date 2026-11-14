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

// Function: sub_0016B210
// Address: 0x16b210 - 0x16b280
void sub_0016B210_0x16b210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B210_0x16b210");
#endif

    switch (ctx->pc) {
        case 0x16b250u: goto label_16b250;
        case 0x16b270u: goto label_16b270;
        default: break;
    }

    ctx->pc = 0x16b210u;

    // 0x16b210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16b210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16b214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16b214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16b218: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x16b218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x16b21c: 0x8f83bac8  lw          $v1, -0x4538($gp)
    ctx->pc = 0x16b21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949576)));
    // 0x16b220: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x16b220u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x16b224: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x16B224u;
    {
        const bool branch_taken_0x16b224 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b224) {
            ctx->pc = 0x16B270u;
            goto label_16b270;
        }
    }
    ctx->pc = 0x16B22Cu;
    // 0x16b22c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16b22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16b230: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16b230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16b234: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x16b234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x16b238: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16b238u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x16b23c: 0x24a54240  addiu       $a1, $a1, 0x4240
    ctx->pc = 0x16b23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16960));
    // 0x16b240: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16b240u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b244: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x16b244u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b248: 0xc08f558  jal         func_23D560
    ctx->pc = 0x16B248u;
    SET_GPR_U32(ctx, 31, 0x16B250u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x16B248u, 0x16B250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B250u;
label_16b250:
    // 0x16b250: 0x8f82bac8  lw          $v0, -0x4538($gp)
    ctx->pc = 0x16b250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949576)));
    // 0x16b254: 0xaf828ee8  sw          $v0, -0x7118($gp)
    ctx->pc = 0x16b254u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938344), GPR_U32(ctx, 2));
    // 0x16b258: 0x8f82bac8  lw          $v0, -0x4538($gp)
    ctx->pc = 0x16b258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949576)));
    // 0x16b25c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x16b25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x16b260: 0xaf82bac8  sw          $v0, -0x4538($gp)
    ctx->pc = 0x16b260u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949576), GPR_U32(ctx, 2));
    // 0x16b264: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16b264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b268: 0xc05ace8  jal         func_16B3A0
    ctx->pc = 0x16B268u;
    SET_GPR_U32(ctx, 31, 0x16B270u);
    ctx->pc = 0x16B3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B3A0u, 0x16B268u, 0x16B270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B270u;
label_16b270:
    // 0x16b270: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b274: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x16b274u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16b278: 0x3e00008  jr          $ra
    ctx->pc = 0x16B278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B280u;
}
