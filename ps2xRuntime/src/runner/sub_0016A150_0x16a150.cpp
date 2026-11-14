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

// Function: sub_0016A150
// Address: 0x16a150 - 0x16a1c0
void sub_0016A150_0x16a150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A150_0x16a150");
#endif

    switch (ctx->pc) {
        case 0x16a190u: goto label_16a190;
        case 0x16a1b0u: goto label_16a1b0;
        default: break;
    }

    ctx->pc = 0x16a150u;

    // 0x16a150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16a150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16a154: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16a154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16a158: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x16a158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x16a15c: 0x8f83bac4  lw          $v1, -0x453C($gp)
    ctx->pc = 0x16a15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949572)));
    // 0x16a160: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x16a160u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16a164: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x16A164u;
    {
        const bool branch_taken_0x16a164 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a164) {
            ctx->pc = 0x16A1B0u;
            goto label_16a1b0;
        }
    }
    ctx->pc = 0x16A16Cu;
    // 0x16a16c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16a16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16a170: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16a170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16a174: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x16a174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x16a178: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16a178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x16a17c: 0x24a54240  addiu       $a1, $a1, 0x4240
    ctx->pc = 0x16a17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16960));
    // 0x16a180: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16a180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a184: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x16a184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16a188: 0xc08f558  jal         func_23D560
    ctx->pc = 0x16A188u;
    SET_GPR_U32(ctx, 31, 0x16A190u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x16A188u, 0x16A190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A190u;
label_16a190:
    // 0x16a190: 0x8f82bac4  lw          $v0, -0x453C($gp)
    ctx->pc = 0x16a190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949572)));
    // 0x16a194: 0xaf828ee4  sw          $v0, -0x711C($gp)
    ctx->pc = 0x16a194u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938340), GPR_U32(ctx, 2));
    // 0x16a198: 0x8f82bac4  lw          $v0, -0x453C($gp)
    ctx->pc = 0x16a198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949572)));
    // 0x16a19c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16a19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16a1a0: 0xaf82bac4  sw          $v0, -0x453C($gp)
    ctx->pc = 0x16a1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949572), GPR_U32(ctx, 2));
    // 0x16a1a4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16a1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a1a8: 0xc05a88c  jal         func_16A230
    ctx->pc = 0x16A1A8u;
    SET_GPR_U32(ctx, 31, 0x16A1B0u);
    ctx->pc = 0x16A230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A230u, 0x16A1A8u, 0x16A1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A1B0u;
label_16a1b0:
    // 0x16a1b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16a1b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a1b4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x16a1b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16a1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x16A1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A1C0u;
}
