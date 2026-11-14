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

// Function: sub_00188880
// Address: 0x188880 - 0x1888f0
void sub_00188880_0x188880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188880_0x188880");
#endif

    switch (ctx->pc) {
        case 0x1888bcu: goto label_1888bc;
        case 0x1888dcu: goto label_1888dc;
        default: break;
    }

    ctx->pc = 0x188880u;

    // 0x188880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x188880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x188884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x188888: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x188888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18888c: 0x8f83bae4  lw          $v1, -0x451C($gp)
    ctx->pc = 0x18888cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949604)));
    // 0x188890: 0x18600012  blez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x188890u;
    {
        const bool branch_taken_0x188890 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x188890) {
            ctx->pc = 0x1888DCu;
            goto label_1888dc;
        }
    }
    ctx->pc = 0x188898u;
    // 0x188898: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x188898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18889c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18889cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1888a0: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1888a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1888a4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1888a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1888a8: 0x24a55280  addiu       $a1, $a1, 0x5280
    ctx->pc = 0x1888a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21120));
    // 0x1888ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1888acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1888b0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1888b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1888b4: 0xc08f558  jal         func_23D560
    ctx->pc = 0x1888B4u;
    SET_GPR_U32(ctx, 31, 0x1888BCu);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1888B4u, 0x1888BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1888BCu;
label_1888bc:
    // 0x1888bc: 0x8f82bae4  lw          $v0, -0x451C($gp)
    ctx->pc = 0x1888bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949604)));
    // 0x1888c0: 0xaf829190  sw          $v0, -0x6E70($gp)
    ctx->pc = 0x1888c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939024), GPR_U32(ctx, 2));
    // 0x1888c4: 0x8f82bae4  lw          $v0, -0x451C($gp)
    ctx->pc = 0x1888c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949604)));
    // 0x1888c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1888c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1888cc: 0xaf82bae4  sw          $v0, -0x451C($gp)
    ctx->pc = 0x1888ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949604), GPR_U32(ctx, 2));
    // 0x1888d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1888d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1888d4: 0xc062314  jal         func_188C50
    ctx->pc = 0x1888D4u;
    SET_GPR_U32(ctx, 31, 0x1888DCu);
    ctx->pc = 0x188C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188C50u, 0x1888D4u, 0x1888DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1888DCu;
label_1888dc:
    // 0x1888dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1888dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1888e0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1888e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1888e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1888E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1888E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1888ECu;
    // 0x1888ec: 0x0  nop
    ctx->pc = 0x1888ecu;
    // NOP
    ctx->pc = 0x1888f0u;
}
