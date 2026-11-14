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

// Function: sub_00243F80
// Address: 0x243f80 - 0x244020
void sub_00243F80_0x243f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243F80_0x243f80");
#endif

    switch (ctx->pc) {
        case 0x244004u: goto label_244004;
        default: break;
    }

    ctx->pc = 0x243f80u;

    // 0x243f80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x243f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x243f84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x243f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x243f88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x243f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x243f8c: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x243f8cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x243f90: 0xa3a50030  sb          $a1, 0x30($sp)
    ctx->pc = 0x243f90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x243f94: 0xe7ad0040  swc1        $f13, 0x40($sp)
    ctx->pc = 0x243f94u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x243f98: 0x93a20030  lbu         $v0, 0x30($sp)
    ctx->pc = 0x243f98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x243f9c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x243F9Cu;
    {
        const bool branch_taken_0x243f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243f9c) {
            ctx->pc = 0x243FD4u;
            goto label_243fd4;
        }
    }
    ctx->pc = 0x243FA4u;
    // 0x243fa4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x243fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243fa8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x243fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243fac: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x243facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x243fb0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x243fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243fb4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x243fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243fb8: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x243fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x243fbc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x243fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x243fc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x243fc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243fc4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x243fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243fc8: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x243fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x243fcc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x243FCCu;
    {
        const bool branch_taken_0x243fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243fcc) {
            ctx->pc = 0x243FF8u;
            goto label_243ff8;
        }
    }
    ctx->pc = 0x243FD4u;
label_243fd4:
    // 0x243fd4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x243fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243fd8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x243fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243fdc: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x243fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x243fe0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x243fe0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243fe4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x243fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243fe8: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x243fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x243fec: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x243fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243ff0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x243ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243ff4: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x243ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
label_243ff8:
    // 0x243ff8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x243ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243ffc: 0xc091050  jal         func_244140
    ctx->pc = 0x243FFCu;
    SET_GPR_U32(ctx, 31, 0x244004u);
    ctx->pc = 0x244140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244140u, 0x243FFCu, 0x244004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244004u;
label_244004:
    // 0x244004: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244008: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x244008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x24400c: 0x3e00008  jr          $ra
    ctx->pc = 0x24400Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24400Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244014u;
    // 0x244014: 0x0  nop
    ctx->pc = 0x244014u;
    // NOP
    // 0x244018: 0x0  nop
    ctx->pc = 0x244018u;
    // NOP
    // 0x24401c: 0x0  nop
    ctx->pc = 0x24401cu;
    // NOP
    ctx->pc = 0x244020u;
}
