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

// Function: sub_00212C70
// Address: 0x212c70 - 0x212d80
void sub_00212C70_0x212c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212C70_0x212c70");
#endif

    switch (ctx->pc) {
        case 0x212c94u: goto label_212c94;
        case 0x212cdcu: goto label_212cdc;
        case 0x212cf4u: goto label_212cf4;
        case 0x212d0cu: goto label_212d0c;
        case 0x212d24u: goto label_212d24;
        case 0x212d3cu: goto label_212d3c;
        case 0x212d54u: goto label_212d54;
        default: break;
    }

    ctx->pc = 0x212c70u;

    // 0x212c70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x212c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x212c74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x212c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x212c78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x212c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x212c7c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x212c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x212c80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x212c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212c84: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x212c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x212c88: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x212c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212c8c: 0xc084b60  jal         func_212D80
    ctx->pc = 0x212C8Cu;
    SET_GPR_U32(ctx, 31, 0x212C94u);
    ctx->pc = 0x212D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212D80u, 0x212C8Cu, 0x212C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212C94u;
label_212c94:
    // 0x212c94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x212c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212c98: 0xa0400048  sb          $zero, 0x48($v0)
    ctx->pc = 0x212c98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x212c9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x212c9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212ca0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x212ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212ca4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x212ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x212ca8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x212ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212cac: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x212cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x212cb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x212cb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212cb4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x212cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212cb8: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x212cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x212cbc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x212cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212cc0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x212cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x212cc4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x212cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212cc8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x212cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212ccc: 0x24640064  addiu       $a0, $v1, 0x64
    ctx->pc = 0x212cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x212cd0: 0x24450064  addiu       $a1, $v0, 0x64
    ctx->pc = 0x212cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x212cd4: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x212CD4u;
    SET_GPR_U32(ctx, 31, 0x212CDCu);
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x212CD4u, 0x212CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212CDCu;
label_212cdc:
    // 0x212cdc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x212cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212ce0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x212ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212ce4: 0x24640094  addiu       $a0, $v1, 0x94
    ctx->pc = 0x212ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 148));
    // 0x212ce8: 0x24450094  addiu       $a1, $v0, 0x94
    ctx->pc = 0x212ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x212cec: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x212CECu;
    SET_GPR_U32(ctx, 31, 0x212CF4u);
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x212CECu, 0x212CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212CF4u;
label_212cf4:
    // 0x212cf4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x212cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212cf8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x212cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212cfc: 0x24640088  addiu       $a0, $v1, 0x88
    ctx->pc = 0x212cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 136));
    // 0x212d00: 0x24450088  addiu       $a1, $v0, 0x88
    ctx->pc = 0x212d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    // 0x212d04: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x212D04u;
    SET_GPR_U32(ctx, 31, 0x212D0Cu);
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x212D04u, 0x212D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212D0Cu;
label_212d0c:
    // 0x212d0c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x212d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212d10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x212d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212d14: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x212d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x212d18: 0x24450088  addiu       $a1, $v0, 0x88
    ctx->pc = 0x212d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    // 0x212d1c: 0xc041d58  jal         func_107560
    ctx->pc = 0x212D1Cu;
    SET_GPR_U32(ctx, 31, 0x212D24u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x212D1Cu, 0x212D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212D24u;
label_212d24:
    // 0x212d24: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x212d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212d28: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x212d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212d2c: 0x2464002c  addiu       $a0, $v1, 0x2C
    ctx->pc = 0x212d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
    // 0x212d30: 0x24450094  addiu       $a1, $v0, 0x94
    ctx->pc = 0x212d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x212d34: 0xc041d58  jal         func_107560
    ctx->pc = 0x212D34u;
    SET_GPR_U32(ctx, 31, 0x212D3Cu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x212D34u, 0x212D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212D3Cu;
label_212d3c:
    // 0x212d3c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x212d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212d40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x212d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212d44: 0x24640038  addiu       $a0, $v1, 0x38
    ctx->pc = 0x212d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x212d48: 0x244500a0  addiu       $a1, $v0, 0xA0
    ctx->pc = 0x212d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x212d4c: 0xc041d58  jal         func_107560
    ctx->pc = 0x212D4Cu;
    SET_GPR_U32(ctx, 31, 0x212D54u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x212D4Cu, 0x212D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212D54u;
label_212d54:
    // 0x212d54: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x212d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212d58: 0xc46000ac  lwc1        $f0, 0xAC($v1)
    ctx->pc = 0x212d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212d5c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x212d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212d60: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x212d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x212d64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x212d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212d68: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x212d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x212d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x212D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212D74u;
    // 0x212d74: 0x0  nop
    ctx->pc = 0x212d74u;
    // NOP
    // 0x212d78: 0x0  nop
    ctx->pc = 0x212d78u;
    // NOP
    // 0x212d7c: 0x0  nop
    ctx->pc = 0x212d7cu;
    // NOP
    ctx->pc = 0x212d80u;
}
