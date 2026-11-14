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

// Function: sub_00108B00
// Address: 0x108b00 - 0x108b80
void sub_00108B00_0x108b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108B00_0x108b00");
#endif

    ctx->pc = 0x108b00u;

    // 0x108b00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x108b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x108b04: 0xa3a50010  sb          $a1, 0x10($sp)
    ctx->pc = 0x108b04u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x108b08: 0x8383b9a8  lb          $v1, -0x4658($gp)
    ctx->pc = 0x108b08u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949288)));
    // 0x108b0c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x108B0Cu;
    {
        const bool branch_taken_0x108b0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x108b0c) {
            ctx->pc = 0x108B28u;
            goto label_108b28;
        }
    }
    ctx->pc = 0x108B14u;
    // 0x108b14: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x108b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x108b18: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x108b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x108b1c: 0xe780b9a4  swc1        $f0, -0x465C($gp)
    ctx->pc = 0x108b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949284), bits); }
    // 0x108b20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x108b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108b24: 0xa383b9a8  sb          $v1, -0x4658($gp)
    ctx->pc = 0x108b24u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949288), (uint8_t)GPR_U32(ctx, 3));
label_108b28:
    // 0x108b28: 0x93a30010  lbu         $v1, 0x10($sp)
    ctx->pc = 0x108b28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108b2c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x108b2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x108b30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x108b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108b34: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x108B34u;
    {
        const bool branch_taken_0x108b34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x108b34) {
            ctx->pc = 0x108B5Cu;
            goto label_108b5c;
        }
    }
    ctx->pc = 0x108B3Cu;
    // 0x108b3c: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x108b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x108b40: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x108b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x108b44: 0xe780b9a4  swc1        $f0, -0x465C($gp)
    ctx->pc = 0x108b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949284), bits); }
    // 0x108b48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x108b48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x108b4c: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x108b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x108b50: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x108b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x108b54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x108B54u;
    {
        const bool branch_taken_0x108b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x108b54) {
            ctx->pc = 0x108B68u;
            goto label_108b68;
        }
    }
    ctx->pc = 0x108B5Cu;
label_108b5c:
    // 0x108b5c: 0xc780b9a4  lwc1        $f0, -0x465C($gp)
    ctx->pc = 0x108b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x108b60: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x108b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x108b64: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x108b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_108b68:
    // 0x108b68: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x108b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x108b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x108B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108B74u;
    // 0x108b74: 0x0  nop
    ctx->pc = 0x108b74u;
    // NOP
    // 0x108b78: 0x0  nop
    ctx->pc = 0x108b78u;
    // NOP
    // 0x108b7c: 0x0  nop
    ctx->pc = 0x108b7cu;
    // NOP
    ctx->pc = 0x108b80u;
}
