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

// Function: sub_00193800
// Address: 0x193800 - 0x193840
void sub_00193800_0x193800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193800_0x193800");
#endif

    switch (ctx->pc) {
        case 0x193828u: goto label_193828;
        default: break;
    }

    ctx->pc = 0x193800u;

    // 0x193800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x193800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x193804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193808: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x193808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19380c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19380cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193810: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x193810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193814: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x193814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x193818: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x193818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19381c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19381cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193820: 0xc125d14  jal         func_497450
    ctx->pc = 0x193820u;
    SET_GPR_U32(ctx, 31, 0x193828u);
    ctx->pc = 0x497450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x497450u, 0x193820u, 0x193828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193828u;
label_193828:
    // 0x193828: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19382c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x19382cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x193830: 0x3e00008  jr          $ra
    ctx->pc = 0x193830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193838u;
    // 0x193838: 0x0  nop
    ctx->pc = 0x193838u;
    // NOP
    // 0x19383c: 0x0  nop
    ctx->pc = 0x19383cu;
    // NOP
    ctx->pc = 0x193840u;
}
