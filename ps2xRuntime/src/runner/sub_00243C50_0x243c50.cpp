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

// Function: sub_00243C50
// Address: 0x243c50 - 0x243db0
void sub_00243C50_0x243c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243C50_0x243c50");
#endif

    switch (ctx->pc) {
        case 0x243c78u: goto label_243c78;
        case 0x243cfcu: goto label_243cfc;
        case 0x243d14u: goto label_243d14;
        case 0x243d80u: goto label_243d80;
        case 0x243d98u: goto label_243d98;
        default: break;
    }

    ctx->pc = 0x243c50u;

    // 0x243c50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x243c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x243c54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x243c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x243c58: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x243c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x243c5c: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x243c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x243c60: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x243c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x243c64: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x243c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x243c68: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x243c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x243c6c: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x243c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x243c70: 0xc094e0c  jal         func_253830
    ctx->pc = 0x243C70u;
    SET_GPR_U32(ctx, 31, 0x243C78u);
    ctx->pc = 0x253830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253830u, 0x243C70u, 0x243C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243C78u;
label_243c78:
    // 0x243c78: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x243c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x243c7c: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x243c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x243c80: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x243c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x243c84: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x243c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243c88: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x243c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243c8c: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x243c8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x243c90: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x243c90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x243c94: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x243c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x243c98: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x243c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x243c9c: 0x90630034  lbu         $v1, 0x34($v1)
    ctx->pc = 0x243c9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x243ca0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x243ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x243ca4: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x243CA4u;
    {
        const bool branch_taken_0x243ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x243ca4) {
            ctx->pc = 0x243D1Cu;
            goto label_243d1c;
        }
    }
    ctx->pc = 0x243CACu;
    // 0x243cac: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x243cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x243cb0: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x243cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x243cb4: 0x10030038  beq         $zero, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x243CB4u;
    {
        const bool branch_taken_0x243cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x243cb4) {
            ctx->pc = 0x243D98u;
            goto label_243d98;
        }
    }
    ctx->pc = 0x243CBCu;
    // 0x243cbc: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x243cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x243cc0: 0x2484be00  addiu       $a0, $a0, -0x4200
    ctx->pc = 0x243cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950400));
    // 0x243cc4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x243cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x243cc8: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x243cc8u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4EBE00u));
    // 0x243ccc: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x243cccu;
    { uint32_t bits = FAST_READ32(0x4EBE08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243cd0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x243cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x243cd4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x243cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x243cd8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x243cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x243cdc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x243cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x243ce0: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x243ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243ce4: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x243ce4u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x243ce8: 0x8c64004c  lw          $a0, 0x4C($v1)
    ctx->pc = 0x243ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x243cec: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x243cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x243cf0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x243cf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243cf4: 0xc1065b8  jal         func_4196E0
    ctx->pc = 0x243CF4u;
    SET_GPR_U32(ctx, 31, 0x243CFCu);
    ctx->pc = 0x4196E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4196E0u, 0x243CF4u, 0x243CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243CFCu;
label_243cfc:
    // 0x243cfc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x243cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x243d00: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x243d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x243d04: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x243d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x243d08: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x243d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x243d0c: 0xc106598  jal         func_419660
    ctx->pc = 0x243D0Cu;
    SET_GPR_U32(ctx, 31, 0x243D14u);
    ctx->pc = 0x419660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419660u, 0x243D0Cu, 0x243D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243D14u;
label_243d14:
    // 0x243d14: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x243D14u;
    {
        const bool branch_taken_0x243d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243d14) {
            ctx->pc = 0x243D98u;
            goto label_243d98;
        }
    }
    ctx->pc = 0x243D1Cu;
label_243d1c:
    // 0x243d1c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x243d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x243d20: 0x90630035  lbu         $v1, 0x35($v1)
    ctx->pc = 0x243d20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 53)));
    // 0x243d24: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x243d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x243d28: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x243D28u;
    {
        const bool branch_taken_0x243d28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x243d28) {
            ctx->pc = 0x243D98u;
            goto label_243d98;
        }
    }
    ctx->pc = 0x243D30u;
    // 0x243d30: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x243d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x243d34: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x243d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x243d38: 0x10030017  beq         $zero, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x243D38u;
    {
        const bool branch_taken_0x243d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x243d38) {
            ctx->pc = 0x243D98u;
            goto label_243d98;
        }
    }
    ctx->pc = 0x243D40u;
    // 0x243d40: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x243d40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x243d44: 0x2484be10  addiu       $a0, $a0, -0x41F0
    ctx->pc = 0x243d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950416));
    // 0x243d48: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x243d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x243d4c: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x243d4cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4EBE10u));
    // 0x243d50: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x243d50u;
    { uint32_t bits = FAST_READ32(0x4EBE18u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243d54: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x243d54u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x243d58: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x243d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x243d5c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x243d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x243d60: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x243d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x243d64: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x243d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243d68: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x243d68u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x243d6c: 0x8c64004c  lw          $a0, 0x4C($v1)
    ctx->pc = 0x243d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x243d70: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x243d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x243d74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x243d74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243d78: 0xc1065b8  jal         func_4196E0
    ctx->pc = 0x243D78u;
    SET_GPR_U32(ctx, 31, 0x243D80u);
    ctx->pc = 0x4196E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4196E0u, 0x243D78u, 0x243D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243D80u;
label_243d80:
    // 0x243d80: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x243d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x243d84: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x243d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x243d88: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x243d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x243d8c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x243d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x243d90: 0xc106598  jal         func_419660
    ctx->pc = 0x243D90u;
    SET_GPR_U32(ctx, 31, 0x243D98u);
    ctx->pc = 0x419660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419660u, 0x243D90u, 0x243D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243D98u;
label_243d98:
    // 0x243d98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x243d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243d9c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x243d9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x243da0: 0x3e00008  jr          $ra
    ctx->pc = 0x243DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243DA8u;
    // 0x243da8: 0x0  nop
    ctx->pc = 0x243da8u;
    // NOP
    // 0x243dac: 0x0  nop
    ctx->pc = 0x243dacu;
    // NOP
    ctx->pc = 0x243db0u;
}
