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

// Function: sub_00233D10
// Address: 0x233d10 - 0x233d90
void sub_00233D10_0x233d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233D10_0x233d10");
#endif

    switch (ctx->pc) {
        case 0x233d28u: goto label_233d28;
        case 0x233d58u: goto label_233d58;
        case 0x233d70u: goto label_233d70;
        default: break;
    }

    ctx->pc = 0x233d10u;

    // 0x233d10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x233d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x233d14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x233d18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x233d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x233d1c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x233d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233d20: 0xc050fec  jal         func_143FB0
    ctx->pc = 0x233D20u;
    SET_GPR_U32(ctx, 31, 0x233D28u);
    ctx->pc = 0x143FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143FB0u, 0x233D20u, 0x233D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233D28u;
label_233d28:
    // 0x233d28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x233d28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233d2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x233d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233d30: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x233d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x233d34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x233d34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233d38: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x233d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233d3c: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x233d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x233d40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x233d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233d44: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x233d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x233d48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x233d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233d4c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x233d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x233d50: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x233D50u;
    SET_GPR_U32(ctx, 31, 0x233D58u);
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x233D50u, 0x233D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233D58u;
label_233d58:
    // 0x233d58: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x233d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233d5c: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x233d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x233d60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x233d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233d64: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x233d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x233d68: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x233D68u;
    SET_GPR_U32(ctx, 31, 0x233D70u);
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x233D68u, 0x233D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233D70u;
label_233d70:
    // 0x233d70: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x233d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233d74: 0xac60006c  sw          $zero, 0x6C($v1)
    ctx->pc = 0x233d74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 0));
    // 0x233d78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233d7c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x233d7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x233d80: 0x3e00008  jr          $ra
    ctx->pc = 0x233D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233D88u;
    // 0x233d88: 0x0  nop
    ctx->pc = 0x233d88u;
    // NOP
    // 0x233d8c: 0x0  nop
    ctx->pc = 0x233d8cu;
    // NOP
    ctx->pc = 0x233d90u;
}
