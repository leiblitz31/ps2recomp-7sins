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

// Function: sub_0023CE10
// Address: 0x23ce10 - 0x23ce60
void sub_0023CE10_0x23ce10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023CE10_0x23ce10");
#endif

    switch (ctx->pc) {
        case 0x23ce34u: goto label_23ce34;
        default: break;
    }

    ctx->pc = 0x23ce10u;

    // 0x23ce10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23ce10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23ce14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23ce14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23ce18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23ce18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23ce1c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23ce1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x23ce20: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x23ce20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x23ce24: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23ce24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ce28: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x23ce28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ce2c: 0xc042844  jal         func_10A110
    ctx->pc = 0x23CE2Cu;
    SET_GPR_U32(ctx, 31, 0x23CE34u);
    ctx->pc = 0x10A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A110u, 0x23CE2Cu, 0x23CE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CE34u;
label_23ce34:
    // 0x23ce34: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x23ce34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23ce38: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x23ce38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ce3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23ce3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ce40: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x23ce40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x23ce44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23ce44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ce48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23ce48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ce4c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x23ce4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23ce50: 0x3e00008  jr          $ra
    ctx->pc = 0x23CE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CE58u;
    // 0x23ce58: 0x0  nop
    ctx->pc = 0x23ce58u;
    // NOP
    // 0x23ce5c: 0x0  nop
    ctx->pc = 0x23ce5cu;
    // NOP
    ctx->pc = 0x23ce60u;
}
