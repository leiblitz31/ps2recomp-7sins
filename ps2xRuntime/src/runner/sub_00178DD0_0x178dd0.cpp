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

// Function: sub_00178DD0
// Address: 0x178dd0 - 0x179260
void sub_00178DD0_0x178dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178DD0_0x178dd0");
#endif

    switch (ctx->pc) {
        case 0x178e00u: goto label_178e00;
        case 0x178e3cu: goto label_178e3c;
        case 0x178e6cu: goto label_178e6c;
        case 0x178e9cu: goto label_178e9c;
        case 0x178ec8u: goto label_178ec8;
        case 0x178ee4u: goto label_178ee4;
        case 0x178f08u: goto label_178f08;
        case 0x178f18u: goto label_178f18;
        case 0x178f34u: goto label_178f34;
        case 0x178f44u: goto label_178f44;
        case 0x178f68u: goto label_178f68;
        case 0x178f78u: goto label_178f78;
        case 0x178fc8u: goto label_178fc8;
        case 0x178ff8u: goto label_178ff8;
        case 0x179030u: goto label_179030;
        case 0x179078u: goto label_179078;
        case 0x1790a4u: goto label_1790a4;
        case 0x1790d8u: goto label_1790d8;
        case 0x1790f4u: goto label_1790f4;
        case 0x179130u: goto label_179130;
        case 0x179160u: goto label_179160;
        case 0x179190u: goto label_179190;
        case 0x1791bcu: goto label_1791bc;
        case 0x1791e0u: goto label_1791e0;
        case 0x1791f0u: goto label_1791f0;
        case 0x179204u: goto label_179204;
        case 0x179220u: goto label_179220;
        case 0x179238u: goto label_179238;
        default: break;
    }

    ctx->pc = 0x178dd0u;

    // 0x178dd0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x178dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x178dd4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x178dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x178dd8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x178dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x178ddc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x178ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x178de0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x178de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x178de4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x178de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x178de8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x178de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x178dec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x178decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x178df0: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x178df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x178df4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x178df4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178df8: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x178DF8u;
    {
        const bool branch_taken_0x178df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178df8) {
            ctx->pc = 0x178ECCu;
            goto label_178ecc;
        }
    }
    ctx->pc = 0x178E00u;
label_178e00:
    // 0x178e00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x178e00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x178e04: 0x0  nop
    ctx->pc = 0x178e04u;
    // NOP
    // 0x178e08: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x178e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x178e0c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x178e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178e10: 0x90420098  lbu         $v0, 0x98($v0)
    ctx->pc = 0x178e10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x178e14: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x178E14u;
    {
        const bool branch_taken_0x178e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x178e14) {
            ctx->pc = 0x178E84u;
            goto label_178e84;
        }
    }
    ctx->pc = 0x178E1Cu;
    // 0x178e1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x178e1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x178e20: 0x0  nop
    ctx->pc = 0x178e20u;
    // NOP
    // 0x178e24: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x178e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x178e28: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x178e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178e2c: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x178e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x178e30: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x178e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178e34: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x178E34u;
    SET_GPR_U32(ctx, 31, 0x178E3Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x178E34u, 0x178E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178E3Cu;
label_178e3c:
    // 0x178e3c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x178e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178e40: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x178e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178e44: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x178e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x178e48: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x178e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x178e4c: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x178e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x178e50: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x178e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x178e54: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x178e54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x178e58: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x178e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x178e5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x178e5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178e60: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x178e60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178e64: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x178E64u;
    SET_GPR_U32(ctx, 31, 0x178E6Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x178E64u, 0x178E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178E6Cu;
label_178e6c:
    // 0x178e6c: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x178e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x178e70: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x178e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x178e74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x178e74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x178e78: 0x0  nop
    ctx->pc = 0x178e78u;
    // NOP
    // 0x178e7c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x178e7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x178e80: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x178e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_178e84:
    // 0x178e84: 0xa3a000af  sb          $zero, 0xAF($sp)
    ctx->pc = 0x178e84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 175), (uint8_t)GPR_U32(ctx, 0));
    // 0x178e88: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x178e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178e8c: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x178e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x178e90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x178e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178e94: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x178E94u;
    SET_GPR_U32(ctx, 31, 0x178E9Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x178E94u, 0x178E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178E9Cu;
label_178e9c:
    // 0x178e9c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x178e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178ea0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x178ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178ea4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x178ea4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x178ea8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x178ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x178eac: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x178eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x178eb0: 0x27a700af  addiu       $a3, $sp, 0xAF
    ctx->pc = 0x178eb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 175));
    // 0x178eb4: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x178eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x178eb8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x178eb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178ebc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x178ebcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178ec0: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x178EC0u;
    SET_GPR_U32(ctx, 31, 0x178EC8u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x178EC0u, 0x178EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178EC8u;
label_178ec8:
    // 0x178ec8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x178ec8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_178ecc:
    // 0x178ecc: 0x2e410019  sltiu       $at, $s2, 0x19
    ctx->pc = 0x178eccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x178ed0: 0x1420ffcb  bnez        $at, . + 4 + (-0x35 << 2)
    ctx->pc = 0x178ED0u;
    {
        const bool branch_taken_0x178ed0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x178ed0) {
            ctx->pc = 0x178E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178e00;
        }
    }
    ctx->pc = 0x178ED8u;
    // 0x178ed8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x178ed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178edc: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x178EDCu;
    {
        const bool branch_taken_0x178edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178edc) {
            ctx->pc = 0x1790DCu;
            goto label_1790dc;
        }
    }
    ctx->pc = 0x178EE4u;
label_178ee4:
    // 0x178ee4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x178ee4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x178ee8: 0x0  nop
    ctx->pc = 0x178ee8u;
    // NOP
    // 0x178eec: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x178eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x178ef0: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x178ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x178ef4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x178ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x178ef8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x178ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x178efc: 0x24a548f0  addiu       $a1, $a1, 0x48F0
    ctx->pc = 0x178efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18672));
    // 0x178f00: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x178F00u;
    SET_GPR_U32(ctx, 31, 0x178F08u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x178F00u, 0x178F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178F08u;
label_178f08:
    // 0x178f08: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x178f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178f0c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x178f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x178f10: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x178F10u;
    SET_GPR_U32(ctx, 31, 0x178F18u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x178F10u, 0x178F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178F18u;
label_178f18:
    // 0x178f18: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x178f18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178f1c: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x178f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x178f20: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x178f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x178f24: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x178f24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x178f28: 0x24a54900  addiu       $a1, $a1, 0x4900
    ctx->pc = 0x178f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18688));
    // 0x178f2c: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x178F2Cu;
    SET_GPR_U32(ctx, 31, 0x178F34u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x178F2Cu, 0x178F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178F34u;
label_178f34:
    // 0x178f34: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x178f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178f38: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x178f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x178f3c: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x178F3Cu;
    SET_GPR_U32(ctx, 31, 0x178F44u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x178F3Cu, 0x178F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178F44u;
label_178f44:
    // 0x178f44: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x178f44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178f48: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x178F48u;
    {
        const bool branch_taken_0x178f48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x178f48) {
            ctx->pc = 0x178F7Cu;
            goto label_178f7c;
        }
    }
    ctx->pc = 0x178F50u;
    // 0x178f50: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x178f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x178f54: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x178f54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x178f58: 0x24a54920  addiu       $a1, $a1, 0x4920
    ctx->pc = 0x178f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18720));
    // 0x178f5c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x178f5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178f60: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x178F60u;
    SET_GPR_U32(ctx, 31, 0x178F68u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x178F60u, 0x178F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178F68u;
label_178f68:
    // 0x178f68: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x178f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178f6c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x178f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x178f70: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x178F70u;
    SET_GPR_U32(ctx, 31, 0x178F78u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x178F70u, 0x178F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178F78u;
label_178f78:
    // 0x178f78: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x178f78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_178f7c:
    // 0x178f7c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x178f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178f80: 0x90420098  lbu         $v0, 0x98($v0)
    ctx->pc = 0x178f80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x178f84: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x178F84u;
    {
        const bool branch_taken_0x178f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x178f84) {
            ctx->pc = 0x179048u;
            goto label_179048;
        }
    }
    ctx->pc = 0x178F8Cu;
    // 0x178f8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x178f8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x178f90: 0x0  nop
    ctx->pc = 0x178f90u;
    // NOP
    // 0x178f94: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x178f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x178f98: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x178f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178f9c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x178f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x178fa0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x178fa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x178fa4: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x178fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x178fa8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x178fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178fac: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x178facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x178fb0: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x178fb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x178fb4: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x178fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x178fb8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x178fb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178fbc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x178fbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178fc0: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x178FC0u;
    SET_GPR_U32(ctx, 31, 0x178FC8u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x178FC0u, 0x178FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178FC8u;
label_178fc8:
    // 0x178fc8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x178fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178fcc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x178fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x178fd0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x178fd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x178fd4: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x178fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x178fd8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x178fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178fdc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x178fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x178fe0: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x178fe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x178fe4: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x178fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x178fe8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x178fe8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178fec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x178fecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178ff0: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x178FF0u;
    SET_GPR_U32(ctx, 31, 0x178FF8u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x178FF0u, 0x178FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178FF8u;
label_178ff8:
    // 0x178ff8: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x178FF8u;
    {
        const bool branch_taken_0x178ff8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x178ff8) {
            ctx->pc = 0x179030u;
            goto label_179030;
        }
    }
    ctx->pc = 0x179000u;
    // 0x179000: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x179000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x179004: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x179004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x179008: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x179008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17900c: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x17900cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x179010: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x179010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179014: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x179014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x179018: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x179018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x17901c: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x17901cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x179020: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x179020u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179024: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x179024u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179028: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x179028u;
    SET_GPR_U32(ctx, 31, 0x179030u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x179028u, 0x179030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179030u;
label_179030:
    // 0x179030: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x179030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179034: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x179034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x179038: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x179038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17903c: 0x0  nop
    ctx->pc = 0x17903cu;
    // NOP
    // 0x179040: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x179040u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x179044: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x179044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_179048:
    // 0x179048: 0xa3a000af  sb          $zero, 0xAF($sp)
    ctx->pc = 0x179048u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 175), (uint8_t)GPR_U32(ctx, 0));
    // 0x17904c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x17904cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x179050: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x179050u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x179054: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x179054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x179058: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x179058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17905c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x17905cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x179060: 0x27a700af  addiu       $a3, $sp, 0xAF
    ctx->pc = 0x179060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 175));
    // 0x179064: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x179064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x179068: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x179068u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17906c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17906cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179070: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x179070u;
    SET_GPR_U32(ctx, 31, 0x179078u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x179070u, 0x179078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179078u;
label_179078:
    // 0x179078: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x179078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17907c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x17907cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x179080: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x179080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x179084: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x179084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179088: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x179088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17908c: 0x27a700af  addiu       $a3, $sp, 0xAF
    ctx->pc = 0x17908cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 175));
    // 0x179090: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x179090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x179094: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x179094u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179098: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x179098u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17909c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x17909Cu;
    SET_GPR_U32(ctx, 31, 0x1790A4u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17909Cu, 0x1790A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1790A4u;
label_1790a4:
    // 0x1790a4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1790A4u;
    {
        const bool branch_taken_0x1790a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1790a4) {
            ctx->pc = 0x1790D8u;
            goto label_1790d8;
        }
    }
    ctx->pc = 0x1790ACu;
    // 0x1790ac: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1790acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1790b0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1790b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1790b4: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1790b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1790b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1790b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1790bc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1790bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1790c0: 0x27a700af  addiu       $a3, $sp, 0xAF
    ctx->pc = 0x1790c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 175));
    // 0x1790c4: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x1790c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1790c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1790c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1790cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1790ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1790d0: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1790D0u;
    SET_GPR_U32(ctx, 31, 0x1790D8u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1790D0u, 0x1790D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1790D8u;
label_1790d8:
    // 0x1790d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1790d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1790dc:
    // 0x1790dc: 0x2e020006  sltiu       $v0, $s0, 0x6
    ctx->pc = 0x1790dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1790e0: 0x1440ff80  bnez        $v0, . + 4 + (-0x80 << 2)
    ctx->pc = 0x1790E0u;
    {
        const bool branch_taken_0x1790e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1790e0) {
            ctx->pc = 0x178EE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178ee4;
        }
    }
    ctx->pc = 0x1790E8u;
    // 0x1790e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1790e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1790ec: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1790ECu;
    {
        const bool branch_taken_0x1790ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1790ec) {
            ctx->pc = 0x1791C0u;
            goto label_1791c0;
        }
    }
    ctx->pc = 0x1790F4u;
label_1790f4:
    // 0x1790f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1790f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1790f8: 0x0  nop
    ctx->pc = 0x1790f8u;
    // NOP
    // 0x1790fc: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1790fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x179100: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x179100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x179104: 0x90420098  lbu         $v0, 0x98($v0)
    ctx->pc = 0x179104u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x179108: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x179108u;
    {
        const bool branch_taken_0x179108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x179108) {
            ctx->pc = 0x179178u;
            goto label_179178;
        }
    }
    ctx->pc = 0x179110u;
    // 0x179110: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x179110u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x179114: 0x0  nop
    ctx->pc = 0x179114u;
    // NOP
    // 0x179118: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x179118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x17911c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x17911cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x179120: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x179120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x179124: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x179124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179128: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x179128u;
    SET_GPR_U32(ctx, 31, 0x179130u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x179128u, 0x179130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179130u;
label_179130:
    // 0x179130: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x179130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x179134: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x179134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x179138: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x179138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x17913c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x17913cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x179140: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x179140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x179144: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x179144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x179148: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x179148u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x17914c: 0xc7ac009c  lwc1        $f12, 0x9C($sp)
    ctx->pc = 0x17914cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x179150: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x179150u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179154: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x179154u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179158: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x179158u;
    SET_GPR_U32(ctx, 31, 0x179160u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x179158u, 0x179160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179160u;
label_179160:
    // 0x179160: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x179160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179164: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x179164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x179168: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x179168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17916c: 0x0  nop
    ctx->pc = 0x17916cu;
    // NOP
    // 0x179170: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x179170u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x179174: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x179174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_179178:
    // 0x179178: 0xa3a000af  sb          $zero, 0xAF($sp)
    ctx->pc = 0x179178u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 175), (uint8_t)GPR_U32(ctx, 0));
    // 0x17917c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x17917cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x179180: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x179180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x179184: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x179184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179188: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x179188u;
    SET_GPR_U32(ctx, 31, 0x179190u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x179188u, 0x179190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179190u;
label_179190:
    // 0x179190: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x179190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x179194: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x179194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x179198: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x179198u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17919c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17919cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1791a0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1791a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1791a4: 0x27a700af  addiu       $a3, $sp, 0xAF
    ctx->pc = 0x1791a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 175));
    // 0x1791a8: 0xc7ac009c  lwc1        $f12, 0x9C($sp)
    ctx->pc = 0x1791a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1791ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1791acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1791b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1791b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1791b4: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1791B4u;
    SET_GPR_U32(ctx, 31, 0x1791BCu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1791B4u, 0x1791BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1791BCu;
label_1791bc:
    // 0x1791bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1791bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1791c0:
    // 0x1791c0: 0x2e210014  sltiu       $at, $s1, 0x14
    ctx->pc = 0x1791c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x1791c4: 0x1420ffcb  bnez        $at, . + 4 + (-0x35 << 2)
    ctx->pc = 0x1791C4u;
    {
        const bool branch_taken_0x1791c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1791c4) {
            ctx->pc = 0x1790F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1790f4;
        }
    }
    ctx->pc = 0x1791CCu;
    // 0x1791cc: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1791ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x1791d0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1791d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1791d4: 0x24a54c00  addiu       $a1, $a1, 0x4C00
    ctx->pc = 0x1791d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19456));
    // 0x1791d8: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x1791D8u;
    SET_GPR_U32(ctx, 31, 0x1791E0u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x1791D8u, 0x1791E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1791E0u;
label_1791e0:
    // 0x1791e0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1791e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1791e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1791e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1791e8: 0xc0406d0  jal         func_101B40
    ctx->pc = 0x1791E8u;
    SET_GPR_U32(ctx, 31, 0x1791F0u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x1791E8u, 0x1791F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1791F0u;
label_1791f0:
    // 0x1791f0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1791f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1791f4: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x1791f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1791f8: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1791f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1791fc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1791FCu;
    SET_GPR_U32(ctx, 31, 0x179204u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1791FCu, 0x179204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179204u;
label_179204:
    // 0x179204: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x179204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x179208: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x179208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17920c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17920cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x179210: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x179210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x179214: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x179214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179218: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x179218u;
    SET_GPR_U32(ctx, 31, 0x179220u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x179218u, 0x179220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179220u;
label_179220:
    // 0x179220: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x179220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x179224: 0xa0400098  sb          $zero, 0x98($v0)
    ctx->pc = 0x179224u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 152), (uint8_t)GPR_U32(ctx, 0));
    // 0x179228: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x179228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17922c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x17922cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x179230: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x179230u;
    SET_GPR_U32(ctx, 31, 0x179238u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x179230u, 0x179238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179238u;
label_179238:
    // 0x179238: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x179238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17923c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17923cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x179240: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x179240u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x179244: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x179244u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x179248: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x179248u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17924c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17924cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179250: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x179250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179254: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x179254u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x179258: 0x3e00008  jr          $ra
    ctx->pc = 0x179258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179260u;
}
