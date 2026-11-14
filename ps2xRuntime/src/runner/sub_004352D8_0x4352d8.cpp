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

// Function: sub_004352D8
// Address: 0x4352d8 - 0x435330
void sub_004352D8_0x4352d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004352D8_0x4352d8");
#endif

    ctx->pc = 0x4352d8u;

    // 0x4352d8: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4352D8u;
    {
        const bool branch_taken_0x4352d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4352d8) {
            ctx->pc = 0x435320u;
            goto label_435320;
        }
    }
    ctx->pc = 0x4352E0u;
    // 0x4352e0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4352e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4352e4: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x4352E4u;
    {
        const bool branch_taken_0x4352e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4352E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4352E4u;
        // 0x4352e8: 0x8f82beb8  lw          $v0, -0x4148($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4352e4) {
            ctx->pc = 0x435320u;
            goto label_435320;
        }
    }
    ctx->pc = 0x4352ECu;
    // 0x4352ec: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4352ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4352f0: 0x94430014  lhu         $v1, 0x14($v0)
    ctx->pc = 0x4352f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x4352f4: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x4352f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x4352f8: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x4352f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x4352fc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4352FCu;
    {
        const bool branch_taken_0x4352fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x435300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4352FCu;
        // 0x435300: 0x2402f000  addiu       $v0, $zero, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4352fc) {
            ctx->pc = 0x435308u;
            goto label_435308;
        }
    }
    ctx->pc = 0x435304u;
    // 0x435304: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x435304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_435308:
    // 0x435308: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x435308u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x43530c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x43530cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x435310: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x435310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x435314: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x435314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x435318: 0x3e00008  jr          $ra
    ctx->pc = 0x435318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43531Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435318u;
        // 0x43531c: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x435320u;
label_435320:
    // 0x435320: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x435320u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x435324: 0x3e00008  jr          $ra
    ctx->pc = 0x435324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43532Cu;
    // 0x43532c: 0x0  nop
    ctx->pc = 0x43532cu;
    // NOP
    ctx->pc = 0x435330u;
}
