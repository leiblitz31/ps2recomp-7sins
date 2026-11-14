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

// Function: sub_0047EB50
// Address: 0x47eb50 - 0x47ebc0
void sub_0047EB50_0x47eb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047EB50_0x47eb50");
#endif

    switch (ctx->pc) {
        case 0x47eb94u: goto label_47eb94;
        case 0x47eba0u: goto label_47eba0;
        default: break;
    }

    ctx->pc = 0x47eb50u;

    // 0x47eb50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x47eb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x47eb54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47eb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47eb58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x47eb58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x47eb5c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x47eb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x47eb60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47eb60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47eb64: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x47eb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47eb68: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x47eb68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x47eb6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x47eb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47eb70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x47eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47eb74: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x47eb74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
    // 0x47eb78: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x47eb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47eb7c: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x47eb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
    // 0x47eb80: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x47eb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47eb84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x47eb84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47eb88: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x47eb88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x47eb8c: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x47EB8Cu;
    SET_GPR_U32(ctx, 31, 0x47EB94u);
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x47EB8Cu, 0x47EB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47EB94u;
label_47eb94:
    // 0x47eb94: 0x2784b520  addiu       $a0, $gp, -0x4AE0
    ctx->pc = 0x47eb94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948128));
    // 0x47eb98: 0xc0f53ae  jal         func_3D4EB8
    ctx->pc = 0x47EB98u;
    SET_GPR_U32(ctx, 31, 0x47EBA0u);
    ctx->pc = 0x3D4EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4EB8u, 0x47EB98u, 0x47EBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47EBA0u;
label_47eba0:
    // 0x47eba0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x47eba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47eba4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47eba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47eba8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x47eba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x47ebac: 0x3e00008  jr          $ra
    ctx->pc = 0x47EBACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47EBACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47EBB4u;
    // 0x47ebb4: 0x0  nop
    ctx->pc = 0x47ebb4u;
    // NOP
    // 0x47ebb8: 0x0  nop
    ctx->pc = 0x47ebb8u;
    // NOP
    // 0x47ebbc: 0x0  nop
    ctx->pc = 0x47ebbcu;
    // NOP
    ctx->pc = 0x47ebc0u;
}
