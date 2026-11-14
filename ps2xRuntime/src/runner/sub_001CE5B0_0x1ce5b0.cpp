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

// Function: sub_001CE5B0
// Address: 0x1ce5b0 - 0x1ce620
void sub_001CE5B0_0x1ce5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE5B0_0x1ce5b0");
#endif

    switch (ctx->pc) {
        case 0x1ce5dcu: goto label_1ce5dc;
        case 0x1ce5ecu: goto label_1ce5ec;
        case 0x1ce600u: goto label_1ce600;
        default: break;
    }

    ctx->pc = 0x1ce5b0u;

    // 0x1ce5b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ce5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ce5b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ce5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ce5b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1ce5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1ce5bc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1ce5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1ce5c0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1ce5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1ce5c4: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x1ce5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x1ce5c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ce5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce5cc: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x1ce5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x1ce5d0: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1ce5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce5d4: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1CE5D4u;
    SET_GPR_U32(ctx, 31, 0x1CE5DCu);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1CE5D4u, 0x1CE5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE5DCu;
label_1ce5dc:
    // 0x1ce5dc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1ce5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ce5e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ce5e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce5e4: 0xc05db24  jal         func_176C90
    ctx->pc = 0x1CE5E4u;
    SET_GPR_U32(ctx, 31, 0x1CE5ECu);
    ctx->pc = 0x176C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C90u, 0x1CE5E4u, 0x1CE5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE5ECu;
label_1ce5ec:
    // 0x1ce5ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ce5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce5f0: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x1ce5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1ce5f4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1ce5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce5f8: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x1CE5F8u;
    SET_GPR_U32(ctx, 31, 0x1CE600u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x1CE5F8u, 0x1CE600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE600u;
label_1ce600:
    // 0x1ce600: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1ce600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce604: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1ce604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ce608: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1ce608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1ce60c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ce60cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce610: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1ce610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ce614: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE61Cu;
    // 0x1ce61c: 0x0  nop
    ctx->pc = 0x1ce61cu;
    // NOP
    ctx->pc = 0x1ce620u;
}
