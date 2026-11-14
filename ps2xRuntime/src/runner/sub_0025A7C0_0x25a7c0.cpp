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

// Function: sub_0025A7C0
// Address: 0x25a7c0 - 0x25a820
void sub_0025A7C0_0x25a7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A7C0_0x25a7c0");
#endif

    switch (ctx->pc) {
        case 0x25a804u: goto label_25a804;
        default: break;
    }

    ctx->pc = 0x25a7c0u;

    // 0x25a7c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25a7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25a7c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25a7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25a7c8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x25a7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x25a7cc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x25a7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x25a7d0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x25a7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25a7d4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x25a7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25a7d8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x25a7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25a7dc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x25a7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25a7e0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x25a7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a7e4: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x25a7e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25a7e8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x25a7e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x25a7ec: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x25a7ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x25a7f0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25a7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a7f4: 0x244400fc  addiu       $a0, $v0, 0xFC
    ctx->pc = 0x25a7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 252));
    // 0x25a7f8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x25a7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25a7fc: 0xc041d58  jal         func_107560
    ctx->pc = 0x25A7FCu;
    SET_GPR_U32(ctx, 31, 0x25A804u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x25A7FCu, 0x25A804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A804u;
label_25a804:
    // 0x25a804: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25a804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a808: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x25a808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25a80c: 0x3e00008  jr          $ra
    ctx->pc = 0x25A80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A814u;
    // 0x25a814: 0x0  nop
    ctx->pc = 0x25a814u;
    // NOP
    // 0x25a818: 0x0  nop
    ctx->pc = 0x25a818u;
    // NOP
    // 0x25a81c: 0x0  nop
    ctx->pc = 0x25a81cu;
    // NOP
    ctx->pc = 0x25a820u;
}
