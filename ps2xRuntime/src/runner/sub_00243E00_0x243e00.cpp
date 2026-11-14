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

// Function: sub_00243E00
// Address: 0x243e00 - 0x243e80
void sub_00243E00_0x243e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243E00_0x243e00");
#endif

    ctx->pc = 0x243e00u;

    // 0x243e00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x243e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x243e04: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x243e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x243e08: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x243e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x243e0c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x243e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243e10: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x243e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x243e14: 0x1003000d  beq         $zero, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x243E14u;
    {
        const bool branch_taken_0x243e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x243e14) {
            ctx->pc = 0x243E4Cu;
            goto label_243e4c;
        }
    }
    ctx->pc = 0x243E1Cu;
    // 0x243e1c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x243e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243e20: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x243e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x243e24: 0x24640040  addiu       $a0, $v1, 0x40
    ctx->pc = 0x243e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x243e28: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x243e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243e2c: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x243e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x243e30: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x243e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243e34: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x243e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243e38: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x243e38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x243e3c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x243e3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x243e40: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x243e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x243e44: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x243E44u;
    {
        const bool branch_taken_0x243e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243e44) {
            ctx->pc = 0x243E70u;
            goto label_243e70;
        }
    }
    ctx->pc = 0x243E4Cu;
label_243e4c:
    // 0x243e4c: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x243e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x243e50: 0x2484c148  addiu       $a0, $a0, -0x3EB8
    ctx->pc = 0x243e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951240));
    // 0x243e54: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x243e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243e58: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x243e58u;
    { uint32_t bits = FAST_READ32(0x60C148u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x243e5c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x243e5cu;
    { uint32_t bits = FAST_READ32(0x60C14Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243e60: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x243e60u;
    { uint32_t bits = FAST_READ32(0x60C150u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243e64: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x243e64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x243e68: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x243e68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x243e6c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x243e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_243e70:
    // 0x243e70: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x243e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x243e74: 0x3e00008  jr          $ra
    ctx->pc = 0x243E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243E7Cu;
    // 0x243e7c: 0x0  nop
    ctx->pc = 0x243e7cu;
    // NOP
    ctx->pc = 0x243e80u;
}
