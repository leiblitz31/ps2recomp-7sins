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

// Function: sub_001A75B0
// Address: 0x1a75b0 - 0x1a7620
void sub_001A75B0_0x1a75b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A75B0_0x1a75b0");
#endif

    switch (ctx->pc) {
        case 0x1a75d8u: goto label_1a75d8;
        case 0x1a75f8u: goto label_1a75f8;
        default: break;
    }

    ctx->pc = 0x1a75b0u;

    // 0x1a75b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a75b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a75b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a75b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a75b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a75b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a75bc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1a75bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1a75c0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1a75c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1a75c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a75c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a75c8: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x1a75c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x1a75cc: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1a75ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a75d0: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1A75D0u;
    SET_GPR_U32(ctx, 31, 0x1A75D8u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1A75D0u, 0x1A75D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A75D8u;
label_1a75d8:
    // 0x1a75d8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1a75d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a75dc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1a75dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a75e0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1a75e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1a75e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a75e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a75e8: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x1a75e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x1a75ec: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1a75ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a75f0: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1A75F0u;
    SET_GPR_U32(ctx, 31, 0x1A75F8u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1A75F0u, 0x1A75F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A75F8u;
label_1a75f8:
    // 0x1a75f8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1a75f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a75fc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1a75fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a7600: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1a7600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1a7604: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a7604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7608: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1a7608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a760c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A760Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A760Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7614u;
    // 0x1a7614: 0x0  nop
    ctx->pc = 0x1a7614u;
    // NOP
    // 0x1a7618: 0x0  nop
    ctx->pc = 0x1a7618u;
    // NOP
    // 0x1a761c: 0x0  nop
    ctx->pc = 0x1a761cu;
    // NOP
    ctx->pc = 0x1a7620u;
}
