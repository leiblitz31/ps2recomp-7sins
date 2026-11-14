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

// Function: sub_0016A1C0
// Address: 0x16a1c0 - 0x16a230
void sub_0016A1C0_0x16a1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A1C0_0x16a1c0");
#endif

    switch (ctx->pc) {
        case 0x16a200u: goto label_16a200;
        case 0x16a220u: goto label_16a220;
        default: break;
    }

    ctx->pc = 0x16a1c0u;

    // 0x16a1c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16a1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16a1c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16a1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16a1c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x16a1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x16a1cc: 0x8f83bac4  lw          $v1, -0x453C($gp)
    ctx->pc = 0x16a1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949572)));
    // 0x16a1d0: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x16a1d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x16a1d4: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x16A1D4u;
    {
        const bool branch_taken_0x16a1d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a1d4) {
            ctx->pc = 0x16A220u;
            goto label_16a220;
        }
    }
    ctx->pc = 0x16A1DCu;
    // 0x16a1dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16a1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16a1e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16a1e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16a1e4: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x16a1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x16a1e8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16a1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x16a1ec: 0x24a54240  addiu       $a1, $a1, 0x4240
    ctx->pc = 0x16a1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16960));
    // 0x16a1f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16a1f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a1f4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x16a1f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16a1f8: 0xc08f558  jal         func_23D560
    ctx->pc = 0x16A1F8u;
    SET_GPR_U32(ctx, 31, 0x16A200u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x16A1F8u, 0x16A200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A200u;
label_16a200:
    // 0x16a200: 0x8f82bac4  lw          $v0, -0x453C($gp)
    ctx->pc = 0x16a200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949572)));
    // 0x16a204: 0xaf828ee4  sw          $v0, -0x711C($gp)
    ctx->pc = 0x16a204u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938340), GPR_U32(ctx, 2));
    // 0x16a208: 0x8f82bac4  lw          $v0, -0x453C($gp)
    ctx->pc = 0x16a208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949572)));
    // 0x16a20c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16a20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16a210: 0xaf82bac4  sw          $v0, -0x453C($gp)
    ctx->pc = 0x16a210u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949572), GPR_U32(ctx, 2));
    // 0x16a214: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16a214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a218: 0xc05a88c  jal         func_16A230
    ctx->pc = 0x16A218u;
    SET_GPR_U32(ctx, 31, 0x16A220u);
    ctx->pc = 0x16A230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A230u, 0x16A218u, 0x16A220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A220u;
label_16a220:
    // 0x16a220: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16a220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a224: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x16a224u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16a228: 0x3e00008  jr          $ra
    ctx->pc = 0x16A228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A230u;
}
