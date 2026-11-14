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

// Function: sub_001F09D0
// Address: 0x1f09d0 - 0x1f0a20
void sub_001F09D0_0x1f09d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F09D0_0x1f09d0");
#endif

    ctx->pc = 0x1f09d0u;

    // 0x1f09d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f09d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f09d4: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1f09d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1f09d8: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x1f09d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1f09dc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F09DCu;
    {
        const bool branch_taken_0x1f09dc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1f09dc) {
            ctx->pc = 0x1F09F8u;
            goto label_1f09f8;
        }
    }
    ctx->pc = 0x1F09E4u;
    // 0x1f09e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f09e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f09e8: 0x0  nop
    ctx->pc = 0x1f09e8u;
    // NOP
    // 0x1f09ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f09ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f09f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F09F0u;
    {
        const bool branch_taken_0x1f09f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f09f0) {
            ctx->pc = 0x1F0A14u;
            goto label_1f0a14;
        }
    }
    ctx->pc = 0x1F09F8u;
label_1f09f8:
    // 0x1f09f8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1f09f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1f09fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f09fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f0a00: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1f0a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1f0a04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0a04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0a08: 0x0  nop
    ctx->pc = 0x1f0a08u;
    // NOP
    // 0x1f0a0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f0a0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f0a10: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1f0a10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1f0a14:
    // 0x1f0a14: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1f0a14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f0a18: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0A20u;
}
