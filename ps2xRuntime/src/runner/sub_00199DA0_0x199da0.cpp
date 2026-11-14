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

// Function: sub_00199DA0
// Address: 0x199da0 - 0x19a540
void sub_00199DA0_0x199da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199DA0_0x199da0");
#endif

    switch (ctx->pc) {
        case 0x199de8u: goto label_199de8;
        case 0x199df4u: goto label_199df4;
        case 0x199e1cu: goto label_199e1c;
        case 0x199e2cu: goto label_199e2c;
        case 0x199ec4u: goto label_199ec4;
        case 0x199eecu: goto label_199eec;
        case 0x199f14u: goto label_199f14;
        case 0x199f40u: goto label_199f40;
        case 0x199f50u: goto label_199f50;
        case 0x199f64u: goto label_199f64;
        case 0x199f78u: goto label_199f78;
        case 0x199f84u: goto label_199f84;
        case 0x199facu: goto label_199fac;
        case 0x199fb8u: goto label_199fb8;
        case 0x199fc4u: goto label_199fc4;
        case 0x199ff4u: goto label_199ff4;
        case 0x19a000u: goto label_19a000;
        case 0x19a00cu: goto label_19a00c;
        case 0x19a03cu: goto label_19a03c;
        case 0x19a048u: goto label_19a048;
        case 0x19a054u: goto label_19a054;
        case 0x19a070u: goto label_19a070;
        case 0x19a07cu: goto label_19a07c;
        case 0x19a140u: goto label_19a140;
        case 0x19a14cu: goto label_19a14c;
        case 0x19a18cu: goto label_19a18c;
        case 0x19a19cu: goto label_19a19c;
        case 0x19a1c0u: goto label_19a1c0;
        case 0x19a1e8u: goto label_19a1e8;
        case 0x19a1f8u: goto label_19a1f8;
        case 0x19a218u: goto label_19a218;
        case 0x19a240u: goto label_19a240;
        case 0x19a250u: goto label_19a250;
        case 0x19a270u: goto label_19a270;
        case 0x19a298u: goto label_19a298;
        case 0x19a2a8u: goto label_19a2a8;
        case 0x19a2ccu: goto label_19a2cc;
        case 0x19a2f4u: goto label_19a2f4;
        case 0x19a304u: goto label_19a304;
        case 0x19a324u: goto label_19a324;
        case 0x19a34cu: goto label_19a34c;
        case 0x19a35cu: goto label_19a35c;
        case 0x19a37cu: goto label_19a37c;
        case 0x19a398u: goto label_19a398;
        case 0x19a3a8u: goto label_19a3a8;
        case 0x19a490u: goto label_19a490;
        case 0x19a4c0u: goto label_19a4c0;
        case 0x19a4e0u: goto label_19a4e0;
        case 0x19a500u: goto label_19a500;
        default: break;
    }

    ctx->pc = 0x199da0u;

    // 0x199da0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x199da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x199da4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x199da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x199da8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x199da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x199dac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x199dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x199db0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x199db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x199db4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x199db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x199db8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x199db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x199dbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x199dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x199dc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x199dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x199dc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x199dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x199dc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x199dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x199dcc: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x199dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x199dd0: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x199dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x199dd4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x199dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x199dd8: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x199dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
    // 0x199ddc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x199ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199de0: 0xc0656f8  jal         func_195BE0
    ctx->pc = 0x199DE0u;
    SET_GPR_U32(ctx, 31, 0x199DE8u);
    ctx->pc = 0x195BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195BE0u, 0x199DE0u, 0x199DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199DE8u;
label_199de8:
    // 0x199de8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x199de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199dec: 0xc067074  jal         func_19C1D0
    ctx->pc = 0x199DECu;
    SET_GPR_U32(ctx, 31, 0x199DF4u);
    ctx->pc = 0x19C1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C1D0u, 0x199DECu, 0x199DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199DF4u;
label_199df4:
    // 0x199df4: 0x144001c2  bnez        $v0, . + 4 + (0x1C2 << 2)
    ctx->pc = 0x199DF4u;
    {
        const bool branch_taken_0x199df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x199df4) {
            ctx->pc = 0x19A500u;
            goto label_19a500;
        }
    }
    ctx->pc = 0x199DFCu;
    // 0x199dfc: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x199dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x199e00: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x199e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x199e04: 0xac4300b4  sw          $v1, 0xB4($v0)
    ctx->pc = 0x199e04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 3));
    // 0x199e08: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x199e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x199e0c: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x199e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
    // 0x199e10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x199e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199e14: 0xc0656f8  jal         func_195BE0
    ctx->pc = 0x199E14u;
    SET_GPR_U32(ctx, 31, 0x199E1Cu);
    ctx->pc = 0x195BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195BE0u, 0x199E14u, 0x199E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199E1Cu;
label_199e1c:
    // 0x199e1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x199e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199e20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x199e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199e24: 0xc067068  jal         func_19C1A0
    ctx->pc = 0x199E24u;
    SET_GPR_U32(ctx, 31, 0x199E2Cu);
    ctx->pc = 0x19C1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C1A0u, 0x199E24u, 0x199E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199E2Cu;
label_199e2c:
    // 0x199e2c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x199e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x199e30: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x199e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x199e34: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x199E34u;
    {
        const bool branch_taken_0x199e34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x199e34) {
            ctx->pc = 0x199E50u;
            goto label_199e50;
        }
    }
    ctx->pc = 0x199E3Cu;
    // 0x199e3c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x199e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x199e40: 0xc44000e8  lwc1        $f0, 0xE8($v0)
    ctx->pc = 0x199e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199e44: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x199e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x199e48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x199E48u;
    {
        const bool branch_taken_0x199e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199e48) {
            ctx->pc = 0x199E5Cu;
            goto label_199e5c;
        }
    }
    ctx->pc = 0x199E50u;
label_199e50:
    // 0x199e50: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x199e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x199e54: 0xc44000e4  lwc1        $f0, 0xE4($v0)
    ctx->pc = 0x199e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199e58: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x199e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_199e5c:
    // 0x199e5c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x199e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199e60: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x199e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x199e64: 0xe44000c0  swc1        $f0, 0xC0($v0)
    ctx->pc = 0x199e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
    // 0x199e68: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x199e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x199e6c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x199e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x199e70: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x199E70u;
    {
        const bool branch_taken_0x199e70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x199e70) {
            ctx->pc = 0x199F1Cu;
            goto label_199f1c;
        }
    }
    ctx->pc = 0x199E78u;
    // 0x199e78: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x199e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x199e7c: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x199E7Cu;
    {
        const bool branch_taken_0x199e7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x199e7c) {
            ctx->pc = 0x199EF4u;
            goto label_199ef4;
        }
    }
    ctx->pc = 0x199E84u;
    // 0x199e84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x199e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199e88: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x199E88u;
    {
        const bool branch_taken_0x199e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x199e88) {
            ctx->pc = 0x199ECCu;
            goto label_199ecc;
        }
    }
    ctx->pc = 0x199E90u;
    // 0x199e90: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x199E90u;
    {
        const bool branch_taken_0x199e90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x199e90) {
            ctx->pc = 0x199EA0u;
            goto label_199ea0;
        }
    }
    ctx->pc = 0x199E98u;
    // 0x199e98: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x199E98u;
    {
        const bool branch_taken_0x199e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199e98) {
            ctx->pc = 0x199F40u;
            goto label_199f40;
        }
    }
    ctx->pc = 0x199EA0u;
label_199ea0:
    // 0x199ea0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x199ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x199ea4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x199ea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x199ea8: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x199ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x199eac: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x199eacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x199eb0: 0x24a560e0  addiu       $a1, $a1, 0x60E0
    ctx->pc = 0x199eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24800));
    // 0x199eb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x199eb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199eb8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x199eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x199ebc: 0xc08f558  jal         func_23D560
    ctx->pc = 0x199EBCu;
    SET_GPR_U32(ctx, 31, 0x199EC4u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x199EBCu, 0x199EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199EC4u;
label_199ec4:
    // 0x199ec4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x199EC4u;
    {
        const bool branch_taken_0x199ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199ec4) {
            ctx->pc = 0x199F40u;
            goto label_199f40;
        }
    }
    ctx->pc = 0x199ECCu;
label_199ecc:
    // 0x199ecc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x199eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x199ed0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x199ed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x199ed4: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x199ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x199ed8: 0x278592c0  addiu       $a1, $gp, -0x6D40
    ctx->pc = 0x199ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939328));
    // 0x199edc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x199edcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199ee0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x199ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x199ee4: 0xc08f558  jal         func_23D560
    ctx->pc = 0x199EE4u;
    SET_GPR_U32(ctx, 31, 0x199EECu);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x199EE4u, 0x199EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199EECu;
label_199eec:
    // 0x199eec: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x199EECu;
    {
        const bool branch_taken_0x199eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199eec) {
            ctx->pc = 0x199F40u;
            goto label_199f40;
        }
    }
    ctx->pc = 0x199EF4u;
label_199ef4:
    // 0x199ef4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x199ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x199ef8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x199ef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x199efc: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x199efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x199f00: 0x278592c8  addiu       $a1, $gp, -0x6D38
    ctx->pc = 0x199f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939336));
    // 0x199f04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x199f04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199f08: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x199f08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x199f0c: 0xc08f558  jal         func_23D560
    ctx->pc = 0x199F0Cu;
    SET_GPR_U32(ctx, 31, 0x199F14u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x199F0Cu, 0x199F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199F14u;
label_199f14:
    // 0x199f14: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x199F14u;
    {
        const bool branch_taken_0x199f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199f14) {
            ctx->pc = 0x199F40u;
            goto label_199f40;
        }
    }
    ctx->pc = 0x199F1Cu;
label_199f1c:
    // 0x199f1c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x199f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x199f20: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x199f20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x199f24: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x199f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x199f28: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x199f28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x199f2c: 0x24a560f0  addiu       $a1, $a1, 0x60F0
    ctx->pc = 0x199f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24816));
    // 0x199f30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x199f30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199f34: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x199f34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x199f38: 0xc08f558  jal         func_23D560
    ctx->pc = 0x199F38u;
    SET_GPR_U32(ctx, 31, 0x199F40u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x199F38u, 0x199F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199F40u;
label_199f40:
    // 0x199f40: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x199f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x199f44: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x199f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x199f48: 0xc06610c  jal         func_198430
    ctx->pc = 0x199F48u;
    SET_GPR_U32(ctx, 31, 0x199F50u);
    ctx->pc = 0x198430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198430u, 0x199F48u, 0x199F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199F50u;
label_199f50:
    // 0x199f50: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x199f50u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199f54: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x199f54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199f58: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x199f58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199f5c: 0x10000116  b           . + 4 + (0x116 << 2)
    ctx->pc = 0x199F5Cu;
    {
        const bool branch_taken_0x199f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199f5c) {
            ctx->pc = 0x19A3B8u;
            goto label_19a3b8;
        }
    }
    ctx->pc = 0x199F64u;
label_199f64:
    // 0x199f64: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x199f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x199f68: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x199f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x199f6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x199f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199f70: 0xc066004  jal         func_198010
    ctx->pc = 0x199F70u;
    SET_GPR_U32(ctx, 31, 0x199F78u);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x199F70u, 0x199F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199F78u;
label_199f78:
    // 0x199f78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x199f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199f7c: 0xc067148  jal         func_19C520
    ctx->pc = 0x199F7Cu;
    SET_GPR_U32(ctx, 31, 0x199F84u);
    ctx->pc = 0x19C520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C520u, 0x199F7Cu, 0x199F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199F84u;
label_199f84:
    // 0x199f84: 0x1040010b  beqz        $v0, . + 4 + (0x10B << 2)
    ctx->pc = 0x199F84u;
    {
        const bool branch_taken_0x199f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x199f84) {
            ctx->pc = 0x19A3B4u;
            goto label_19a3b4;
        }
    }
    ctx->pc = 0x199F8Cu;
    // 0x199f8c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x199f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x199f90: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x199F90u;
    {
        const bool branch_taken_0x199f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x199f90) {
            ctx->pc = 0x199FD0u;
            goto label_199fd0;
        }
    }
    ctx->pc = 0x199F98u;
    // 0x199f98: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x199f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x199f9c: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x199f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x199fa0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x199fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199fa4: 0xc066004  jal         func_198010
    ctx->pc = 0x199FA4u;
    SET_GPR_U32(ctx, 31, 0x199FACu);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x199FA4u, 0x199FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199FACu;
label_199fac:
    // 0x199fac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x199facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199fb0: 0xc067124  jal         func_19C490
    ctx->pc = 0x199FB0u;
    SET_GPR_U32(ctx, 31, 0x199FB8u);
    ctx->pc = 0x19C490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C490u, 0x199FB0u, 0x199FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199FB8u;
label_199fb8:
    // 0x199fb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x199fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199fbc: 0xc067304  jal         func_19CC10
    ctx->pc = 0x199FBCu;
    SET_GPR_U32(ctx, 31, 0x199FC4u);
    ctx->pc = 0x19CC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CC10u, 0x199FBCu, 0x199FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199FC4u;
label_199fc4:
    // 0x199fc4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x199fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x199fc8: 0x144300fa  bne         $v0, $v1, . + 4 + (0xFA << 2)
    ctx->pc = 0x199FC8u;
    {
        const bool branch_taken_0x199fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x199fc8) {
            ctx->pc = 0x19A3B4u;
            goto label_19a3b4;
        }
    }
    ctx->pc = 0x199FD0u;
label_199fd0:
    // 0x199fd0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x199fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x199fd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x199fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199fd8: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x199FD8u;
    {
        const bool branch_taken_0x199fd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x199fd8) {
            ctx->pc = 0x19A018u;
            goto label_19a018;
        }
    }
    ctx->pc = 0x199FE0u;
    // 0x199fe0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x199fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x199fe4: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x199fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x199fe8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x199fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199fec: 0xc066004  jal         func_198010
    ctx->pc = 0x199FECu;
    SET_GPR_U32(ctx, 31, 0x199FF4u);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x199FECu, 0x199FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199FF4u;
label_199ff4:
    // 0x199ff4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x199ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199ff8: 0xc067124  jal         func_19C490
    ctx->pc = 0x199FF8u;
    SET_GPR_U32(ctx, 31, 0x19A000u);
    ctx->pc = 0x19C490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C490u, 0x199FF8u, 0x19A000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A000u;
label_19a000:
    // 0x19a000: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19a000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a004: 0xc067304  jal         func_19CC10
    ctx->pc = 0x19A004u;
    SET_GPR_U32(ctx, 31, 0x19A00Cu);
    ctx->pc = 0x19CC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CC10u, 0x19A004u, 0x19A00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A00Cu;
label_19a00c:
    // 0x19a00c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19a00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a010: 0x144300e8  bne         $v0, $v1, . + 4 + (0xE8 << 2)
    ctx->pc = 0x19A010u;
    {
        const bool branch_taken_0x19a010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19a010) {
            ctx->pc = 0x19A3B4u;
            goto label_19a3b4;
        }
    }
    ctx->pc = 0x19A018u;
label_19a018:
    // 0x19a018: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x19a018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x19a01c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19a01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19a020: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x19A020u;
    {
        const bool branch_taken_0x19a020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19a020) {
            ctx->pc = 0x19A05Cu;
            goto label_19a05c;
        }
    }
    ctx->pc = 0x19A028u;
    // 0x19a028: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x19a028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19a02c: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x19a02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x19a030: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19a030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a034: 0xc066004  jal         func_198010
    ctx->pc = 0x19A034u;
    SET_GPR_U32(ctx, 31, 0x19A03Cu);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x19A034u, 0x19A03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A03Cu;
label_19a03c:
    // 0x19a03c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19a03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a040: 0xc067124  jal         func_19C490
    ctx->pc = 0x19A040u;
    SET_GPR_U32(ctx, 31, 0x19A048u);
    ctx->pc = 0x19C490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C490u, 0x19A040u, 0x19A048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A048u;
label_19a048:
    // 0x19a048: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19a048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a04c: 0xc067304  jal         func_19CC10
    ctx->pc = 0x19A04Cu;
    SET_GPR_U32(ctx, 31, 0x19A054u);
    ctx->pc = 0x19CC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CC10u, 0x19A04Cu, 0x19A054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A054u;
label_19a054:
    // 0x19a054: 0x144000d7  bnez        $v0, . + 4 + (0xD7 << 2)
    ctx->pc = 0x19A054u;
    {
        const bool branch_taken_0x19a054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a054) {
            ctx->pc = 0x19A3B4u;
            goto label_19a3b4;
        }
    }
    ctx->pc = 0x19A05Cu;
label_19a05c:
    // 0x19a05c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x19a05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19a060: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x19a060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x19a064: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19a064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a068: 0xc066004  jal         func_198010
    ctx->pc = 0x19A068u;
    SET_GPR_U32(ctx, 31, 0x19A070u);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x19A068u, 0x19A070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A070u;
label_19a070:
    // 0x19a070: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19a070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a074: 0xc067238  jal         func_19C8E0
    ctx->pc = 0x19A074u;
    SET_GPR_U32(ctx, 31, 0x19A07Cu);
    ctx->pc = 0x19C8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8E0u, 0x19A074u, 0x19A07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A07Cu;
label_19a07c:
    // 0x19a07c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19a07cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a080: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x19a080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x19a084: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19a084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19a088: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x19A088u;
    {
        const bool branch_taken_0x19a088 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19a088) {
            ctx->pc = 0x19A0C8u;
            goto label_19a0c8;
        }
    }
    ctx->pc = 0x19A090u;
    // 0x19a090: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x19a090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19a094: 0xc46100dc  lwc1        $f1, 0xDC($v1)
    ctx->pc = 0x19a094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a098: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x19a098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a09c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19a09cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19a0a0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x19A0A0u;
    {
        const bool branch_taken_0x19a0a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19a0a0) {
            ctx->pc = 0x19A0B8u;
            goto label_19a0b8;
        }
    }
    ctx->pc = 0x19A0A8u;
    // 0x19a0a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19a0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a0ac: 0x307500ff  andi        $s5, $v1, 0xFF
    ctx->pc = 0x19a0acu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19a0b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19A0B0u;
    {
        const bool branch_taken_0x19a0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a0b0) {
            ctx->pc = 0x19A0BCu;
            goto label_19a0bc;
        }
    }
    ctx->pc = 0x19A0B8u;
label_19a0b8:
    // 0x19a0b8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x19a0b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19a0bc:
    // 0x19a0bc: 0x32b700ff  andi        $s7, $s5, 0xFF
    ctx->pc = 0x19a0bcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x19a0c0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x19A0C0u;
    {
        const bool branch_taken_0x19a0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a0c0) {
            ctx->pc = 0x19A124u;
            goto label_19a124;
        }
    }
    ctx->pc = 0x19A0C8u;
label_19a0c8:
    // 0x19a0c8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x19a0c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a0cc: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x19a0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19a0d0: 0xc46100dc  lwc1        $f1, 0xDC($v1)
    ctx->pc = 0x19a0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a0d4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x19a0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a0d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19a0d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19a0dc: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x19A0DCu;
    {
        const bool branch_taken_0x19a0dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19a0dc) {
            ctx->pc = 0x19A104u;
            goto label_19a104;
        }
    }
    ctx->pc = 0x19A0E4u;
    // 0x19a0e4: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x19a0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a0e8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x19a0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19a0ec: 0xc46000e0  lwc1        $f0, 0xE0($v1)
    ctx->pc = 0x19a0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a0f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19a0f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19a0f4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x19A0F4u;
    {
        const bool branch_taken_0x19a0f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19a0f4) {
            ctx->pc = 0x19A104u;
            goto label_19a104;
        }
    }
    ctx->pc = 0x19A0FCu;
    // 0x19a0fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19a0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a100: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x19a100u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_19a104:
    // 0x19a104: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x19A104u;
    {
        const bool branch_taken_0x19a104 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a104) {
            ctx->pc = 0x19A11Cu;
            goto label_19a11c;
        }
    }
    ctx->pc = 0x19A10Cu;
    // 0x19a10c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19a10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a110: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x19a110u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19a114: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19A114u;
    {
        const bool branch_taken_0x19a114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a114) {
            ctx->pc = 0x19A120u;
            goto label_19a120;
        }
    }
    ctx->pc = 0x19A11Cu;
label_19a11c:
    // 0x19a11c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x19a11cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19a120:
    // 0x19a120: 0x327700ff  andi        $s7, $s3, 0xFF
    ctx->pc = 0x19a120u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_19a124:
    // 0x19a124: 0x12e000a3  beqz        $s7, . + 4 + (0xA3 << 2)
    ctx->pc = 0x19A124u;
    {
        const bool branch_taken_0x19a124 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a124) {
            ctx->pc = 0x19A3B4u;
            goto label_19a3b4;
        }
    }
    ctx->pc = 0x19A12Cu;
    // 0x19a12c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x19a12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19a130: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x19a130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x19a134: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19a134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a138: 0xc066004  jal         func_198010
    ctx->pc = 0x19A138u;
    SET_GPR_U32(ctx, 31, 0x19A140u);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x19A138u, 0x19A140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A140u;
label_19a140:
    // 0x19a140: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19a140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a144: 0xc06715c  jal         func_19C570
    ctx->pc = 0x19A144u;
    SET_GPR_U32(ctx, 31, 0x19A14Cu);
    ctx->pc = 0x19C570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C570u, 0x19A144u, 0x19A14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A14Cu;
label_19a14c:
    // 0x19a14c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19a14cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x19a150: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x19a150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x19a154: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19a154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19a158: 0x1083008a  beq         $a0, $v1, . + 4 + (0x8A << 2)
    ctx->pc = 0x19A158u;
    {
        const bool branch_taken_0x19a158 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19a158) {
            ctx->pc = 0x19A384u;
            goto label_19a384;
        }
    }
    ctx->pc = 0x19A160u;
    // 0x19a160: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x19a160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19a164: 0x8c8300b8  lw          $v1, 0xB8($a0)
    ctx->pc = 0x19a164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x19a168: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a16c: 0xac8300b8  sw          $v1, 0xB8($a0)
    ctx->pc = 0x19a16cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 3));
    // 0x19a170: 0x16000015  bnez        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x19A170u;
    {
        const bool branch_taken_0x19a170 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a170) {
            ctx->pc = 0x19A1C8u;
            goto label_19a1c8;
        }
    }
    ctx->pc = 0x19A178u;
    // 0x19a178: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x19a178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19a17c: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x19a17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
    // 0x19a180: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x19a180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19a184: 0xc0656f8  jal         func_195BE0
    ctx->pc = 0x19A184u;
    SET_GPR_U32(ctx, 31, 0x19A18Cu);
    ctx->pc = 0x195BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195BE0u, 0x19A184u, 0x19A18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A18Cu;
label_19a18c:
    // 0x19a18c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19a18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a190: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19a190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a194: 0xc067068  jal         func_19C1A0
    ctx->pc = 0x19A194u;
    SET_GPR_U32(ctx, 31, 0x19A19Cu);
    ctx->pc = 0x19C1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C1A0u, 0x19A194u, 0x19A19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A19Cu;
label_19a19c:
    // 0x19a19c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19a19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19a1a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19a1a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19a1a4: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x19a1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x19a1a8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x19a1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x19a1ac: 0x24a56100  addiu       $a1, $a1, 0x6100
    ctx->pc = 0x19a1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24832));
    // 0x19a1b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19a1b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a1b4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x19a1b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19a1b8: 0xc08f558  jal         func_23D560
    ctx->pc = 0x19A1B8u;
    SET_GPR_U32(ctx, 31, 0x19A1C0u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x19A1B8u, 0x19A1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A1C0u;
label_19a1c0:
    // 0x19a1c0: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x19A1C0u;
    {
        const bool branch_taken_0x19a1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a1c0) {
            ctx->pc = 0x19A3A8u;
            goto label_19a3a8;
        }
    }
    ctx->pc = 0x19A1C8u;
label_19a1c8:
    // 0x19a1c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19a1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a1cc: 0x16030014  bne         $s0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x19A1CCu;
    {
        const bool branch_taken_0x19a1cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x19a1cc) {
            ctx->pc = 0x19A220u;
            goto label_19a220;
        }
    }
    ctx->pc = 0x19A1D4u;
    // 0x19a1d4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x19a1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19a1d8: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x19a1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
    // 0x19a1dc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x19a1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19a1e0: 0xc0656f8  jal         func_195BE0
    ctx->pc = 0x19A1E0u;
    SET_GPR_U32(ctx, 31, 0x19A1E8u);
    ctx->pc = 0x195BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195BE0u, 0x19A1E0u, 0x19A1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A1E8u;
label_19a1e8:
    // 0x19a1e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19a1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a1ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19a1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a1f0: 0xc067068  jal         func_19C1A0
    ctx->pc = 0x19A1F0u;
    SET_GPR_U32(ctx, 31, 0x19A1F8u);
    ctx->pc = 0x19C1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C1A0u, 0x19A1F0u, 0x19A1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A1F8u;
label_19a1f8:
    // 0x19a1f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19a1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19a1fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19a1fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19a200: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x19a200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x19a204: 0x278592d0  addiu       $a1, $gp, -0x6D30
    ctx->pc = 0x19a204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939344));
    // 0x19a208: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19a208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a20c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x19a20cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19a210: 0xc08f558  jal         func_23D560
    ctx->pc = 0x19A210u;
    SET_GPR_U32(ctx, 31, 0x19A218u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x19A210u, 0x19A218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A218u;
label_19a218:
    // 0x19a218: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x19A218u;
    {
        const bool branch_taken_0x19a218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a218) {
            ctx->pc = 0x19A3A8u;
            goto label_19a3a8;
        }
    }
    ctx->pc = 0x19A220u;
label_19a220:
    // 0x19a220: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19a220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19a224: 0x16030014  bne         $s0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x19A224u;
    {
        const bool branch_taken_0x19a224 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x19a224) {
            ctx->pc = 0x19A278u;
            goto label_19a278;
        }
    }
    ctx->pc = 0x19A22Cu;
    // 0x19a22c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x19a22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19a230: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x19a230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
    // 0x19a234: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x19a234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19a238: 0xc0656f8  jal         func_195BE0
    ctx->pc = 0x19A238u;
    SET_GPR_U32(ctx, 31, 0x19A240u);
    ctx->pc = 0x195BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195BE0u, 0x19A238u, 0x19A240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A240u;
label_19a240:
    // 0x19a240: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19a240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a244: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19a244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a248: 0xc067068  jal         func_19C1A0
    ctx->pc = 0x19A248u;
    SET_GPR_U32(ctx, 31, 0x19A250u);
    ctx->pc = 0x19C1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C1A0u, 0x19A248u, 0x19A250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A250u;
label_19a250:
    // 0x19a250: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19a250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19a254: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19a254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19a258: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x19a258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x19a25c: 0x278592d8  addiu       $a1, $gp, -0x6D28
    ctx->pc = 0x19a25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939352));
    // 0x19a260: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19a260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a264: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x19a264u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19a268: 0xc08f558  jal         func_23D560
    ctx->pc = 0x19A268u;
    SET_GPR_U32(ctx, 31, 0x19A270u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x19A268u, 0x19A270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A270u;
label_19a270:
    // 0x19a270: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x19A270u;
    {
        const bool branch_taken_0x19a270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a270) {
            ctx->pc = 0x19A3A8u;
            goto label_19a3a8;
        }
    }
    ctx->pc = 0x19A278u;
label_19a278:
    // 0x19a278: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19a278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19a27c: 0x16030015  bne         $s0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x19A27Cu;
    {
        const bool branch_taken_0x19a27c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x19a27c) {
            ctx->pc = 0x19A2D4u;
            goto label_19a2d4;
        }
    }
    ctx->pc = 0x19A284u;
    // 0x19a284: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x19a284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19a288: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x19a288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
    // 0x19a28c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19a28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19a290: 0xc0656f8  jal         func_195BE0
    ctx->pc = 0x19A290u;
    SET_GPR_U32(ctx, 31, 0x19A298u);
    ctx->pc = 0x195BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195BE0u, 0x19A290u, 0x19A298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A298u;
label_19a298:
    // 0x19a298: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19a298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a29c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19a29cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a2a0: 0xc067068  jal         func_19C1A0
    ctx->pc = 0x19A2A0u;
    SET_GPR_U32(ctx, 31, 0x19A2A8u);
    ctx->pc = 0x19C1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C1A0u, 0x19A2A0u, 0x19A2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A2A8u;
label_19a2a8:
    // 0x19a2a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19a2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19a2ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19a2acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19a2b0: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x19a2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x19a2b4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x19a2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x19a2b8: 0x24a56100  addiu       $a1, $a1, 0x6100
    ctx->pc = 0x19a2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24832));
    // 0x19a2bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19a2bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a2c0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x19a2c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19a2c4: 0xc08f558  jal         func_23D560
    ctx->pc = 0x19A2C4u;
    SET_GPR_U32(ctx, 31, 0x19A2CCu);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x19A2C4u, 0x19A2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A2CCu;
label_19a2cc:
    // 0x19a2cc: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x19A2CCu;
    {
        const bool branch_taken_0x19a2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a2cc) {
            ctx->pc = 0x19A3A8u;
            goto label_19a3a8;
        }
    }
    ctx->pc = 0x19A2D4u;
label_19a2d4:
    // 0x19a2d4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x19a2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19a2d8: 0x16030014  bne         $s0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x19A2D8u;
    {
        const bool branch_taken_0x19a2d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x19a2d8) {
            ctx->pc = 0x19A32Cu;
            goto label_19a32c;
        }
    }
    ctx->pc = 0x19A2E0u;
    // 0x19a2e0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x19a2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19a2e4: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x19a2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
    // 0x19a2e8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x19a2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19a2ec: 0xc0656f8  jal         func_195BE0
    ctx->pc = 0x19A2ECu;
    SET_GPR_U32(ctx, 31, 0x19A2F4u);
    ctx->pc = 0x195BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195BE0u, 0x19A2ECu, 0x19A2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A2F4u;
label_19a2f4:
    // 0x19a2f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19a2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a2f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19a2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a2fc: 0xc067068  jal         func_19C1A0
    ctx->pc = 0x19A2FCu;
    SET_GPR_U32(ctx, 31, 0x19A304u);
    ctx->pc = 0x19C1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C1A0u, 0x19A2FCu, 0x19A304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A304u;
label_19a304:
    // 0x19a304: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19a304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19a308: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19a308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19a30c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x19a30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x19a310: 0x278592e0  addiu       $a1, $gp, -0x6D20
    ctx->pc = 0x19a310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939360));
    // 0x19a314: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19a314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a318: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x19a318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19a31c: 0xc08f558  jal         func_23D560
    ctx->pc = 0x19A31Cu;
    SET_GPR_U32(ctx, 31, 0x19A324u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x19A31Cu, 0x19A324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A324u;
label_19a324:
    // 0x19a324: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x19A324u;
    {
        const bool branch_taken_0x19a324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a324) {
            ctx->pc = 0x19A3A8u;
            goto label_19a3a8;
        }
    }
    ctx->pc = 0x19A32Cu;
label_19a32c:
    // 0x19a32c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x19a32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19a330: 0x1603001d  bne         $s0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x19A330u;
    {
        const bool branch_taken_0x19a330 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x19a330) {
            ctx->pc = 0x19A3A8u;
            goto label_19a3a8;
        }
    }
    ctx->pc = 0x19A338u;
    // 0x19a338: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x19a338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19a33c: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x19a33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
    // 0x19a340: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x19a340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19a344: 0xc0656f8  jal         func_195BE0
    ctx->pc = 0x19A344u;
    SET_GPR_U32(ctx, 31, 0x19A34Cu);
    ctx->pc = 0x195BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195BE0u, 0x19A344u, 0x19A34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A34Cu;
label_19a34c:
    // 0x19a34c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19a34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a350: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19a350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a354: 0xc067068  jal         func_19C1A0
    ctx->pc = 0x19A354u;
    SET_GPR_U32(ctx, 31, 0x19A35Cu);
    ctx->pc = 0x19C1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C1A0u, 0x19A354u, 0x19A35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A35Cu;
label_19a35c:
    // 0x19a35c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19a35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19a360: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19a360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19a364: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x19a364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x19a368: 0x278592d8  addiu       $a1, $gp, -0x6D28
    ctx->pc = 0x19a368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939352));
    // 0x19a36c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19a36cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a370: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x19a370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19a374: 0xc08f558  jal         func_23D560
    ctx->pc = 0x19A374u;
    SET_GPR_U32(ctx, 31, 0x19A37Cu);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x19A374u, 0x19A37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A37Cu;
label_19a37c:
    // 0x19a37c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19A37Cu;
    {
        const bool branch_taken_0x19a37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a37c) {
            ctx->pc = 0x19A3A8u;
            goto label_19a3a8;
        }
    }
    ctx->pc = 0x19A384u;
label_19a384:
    // 0x19a384: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x19a384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19a388: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x19a388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x19a38c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19a38cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a390: 0xc066004  jal         func_198010
    ctx->pc = 0x19A390u;
    SET_GPR_U32(ctx, 31, 0x19A398u);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x19A390u, 0x19A398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A398u;
label_19a398:
    // 0x19a398: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19a398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a39c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19a39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a3a0: 0xc066950  jal         func_19A540
    ctx->pc = 0x19A3A0u;
    SET_GPR_U32(ctx, 31, 0x19A3A8u);
    ctx->pc = 0x19A540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A540u, 0x19A3A0u, 0x19A3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A3A8u;
label_19a3a8:
    // 0x19a3a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19a3a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a3ac: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x19a3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19a3b0: 0xe46000bc  swc1        $f0, 0xBC($v1)
    ctx->pc = 0x19a3b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 188), bits); }
label_19a3b4:
    // 0x19a3b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19a3b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_19a3b8:
    // 0x19a3b8: 0x21e182b  sltu        $v1, $s0, $fp
    ctx->pc = 0x19a3b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x19a3bc: 0x1460fee9  bnez        $v1, . + 4 + (-0x117 << 2)
    ctx->pc = 0x19A3BCu;
    {
        const bool branch_taken_0x19a3bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a3bc) {
            ctx->pc = 0x199F64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199f64;
        }
    }
    ctx->pc = 0x19A3C4u;
    // 0x19a3c4: 0x1240004e  beqz        $s2, . + 4 + (0x4E << 2)
    ctx->pc = 0x19A3C4u;
    {
        const bool branch_taken_0x19a3c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a3c4) {
            ctx->pc = 0x19A500u;
            goto label_19a500;
        }
    }
    ctx->pc = 0x19A3CCu;
    // 0x19a3cc: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x19A3CCu;
    {
        const bool branch_taken_0x19a3cc = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x19a3cc) {
            ctx->pc = 0x19A3E8u;
            goto label_19a3e8;
        }
    }
    ctx->pc = 0x19A3D4u;
    // 0x19a3d4: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x19a3d4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a3d8: 0x0  nop
    ctx->pc = 0x19a3d8u;
    // NOP
    // 0x19a3dc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x19a3dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19a3e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19A3E0u;
    {
        const bool branch_taken_0x19a3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a3e0) {
            ctx->pc = 0x19A404u;
            goto label_19a404;
        }
    }
    ctx->pc = 0x19A3E8u;
label_19a3e8:
    // 0x19a3e8: 0x122042  srl         $a0, $s2, 1
    ctx->pc = 0x19a3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x19a3ec: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x19a3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x19a3f0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x19a3f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x19a3f4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x19a3f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a3f8: 0x0  nop
    ctx->pc = 0x19a3f8u;
    // NOP
    // 0x19a3fc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x19a3fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19a400: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x19a400u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_19a404:
    // 0x19a404: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x19a404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19a408: 0xc46000d0  lwc1        $f0, 0xD0($v1)
    ctx->pc = 0x19a408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a40c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19a40cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19a410: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x19a410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x19a414: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x19a414u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a418: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x19a418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19a41c: 0xc4610050  lwc1        $f1, 0x50($v1)
    ctx->pc = 0x19a41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a420: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x19a420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x19a424: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19a424u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a428: 0x0  nop
    ctx->pc = 0x19a428u;
    // NOP
    // 0x19a42c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19a42cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19a430: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x19A430u;
    {
        const bool branch_taken_0x19a430 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19a430) {
            ctx->pc = 0x19A468u;
            goto label_19a468;
        }
    }
    ctx->pc = 0x19A438u;
    // 0x19a438: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x19a438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19a43c: 0xc4610050  lwc1        $f1, 0x50($v1)
    ctx->pc = 0x19a43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a440: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x19a440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a444: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x19a444u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19a448: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x19a448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x19a44c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19a44cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a450: 0x0  nop
    ctx->pc = 0x19a450u;
    // NOP
    // 0x19a454: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19a454u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19a458: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x19A458u;
    {
        const bool branch_taken_0x19a458 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19a458) {
            ctx->pc = 0x19A468u;
            goto label_19a468;
        }
    }
    ctx->pc = 0x19A460u;
    // 0x19a460: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19a460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a464: 0x307600ff  andi        $s6, $v1, 0xFF
    ctx->pc = 0x19a464u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_19a468:
    // 0x19a468: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x19a468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a46c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19a46cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a470: 0x0  nop
    ctx->pc = 0x19a470u;
    // NOP
    // 0x19a474: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19a474u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19a478: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x19A478u;
    {
        const bool branch_taken_0x19a478 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19a478) {
            ctx->pc = 0x19A4C8u;
            goto label_19a4c8;
        }
    }
    ctx->pc = 0x19A480u;
    // 0x19a480: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x19a480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19a484: 0xc7ac00ac  lwc1        $f12, 0xAC($sp)
    ctx->pc = 0x19a484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19a488: 0xc064d10  jal         func_193440
    ctx->pc = 0x19A488u;
    SET_GPR_U32(ctx, 31, 0x19A490u);
    ctx->pc = 0x193440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193440u, 0x19A488u, 0x19A490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A490u;
label_19a490:
    // 0x19a490: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x19a490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19a494: 0x8c63005c  lw          $v1, 0x5C($v1)
    ctx->pc = 0x19a494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x19a498: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x19A498u;
    {
        const bool branch_taken_0x19a498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a498) {
            ctx->pc = 0x19A4C8u;
            goto label_19a4c8;
        }
    }
    ctx->pc = 0x19A4A0u;
    // 0x19a4a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19a4a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19a4a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19a4a8: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x19a4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x19a4ac: 0x278592e8  addiu       $a1, $gp, -0x6D18
    ctx->pc = 0x19a4acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939368));
    // 0x19a4b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19a4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a4b4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x19a4b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19a4b8: 0xc08f558  jal         func_23D560
    ctx->pc = 0x19A4B8u;
    SET_GPR_U32(ctx, 31, 0x19A4C0u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x19A4B8u, 0x19A4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A4C0u;
label_19a4c0:
    // 0x19a4c0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x19a4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19a4c4: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x19a4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
label_19a4c8:
    // 0x19a4c8: 0x12c0000d  beqz        $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x19A4C8u;
    {
        const bool branch_taken_0x19a4c8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a4c8) {
            ctx->pc = 0x19A500u;
            goto label_19a500;
        }
    }
    ctx->pc = 0x19A4D0u;
    // 0x19a4d0: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x19a4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19a4d4: 0x278592f0  addiu       $a1, $gp, -0x6D10
    ctx->pc = 0x19a4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939376));
    // 0x19a4d8: 0xc064d48  jal         func_193520
    ctx->pc = 0x19A4D8u;
    SET_GPR_U32(ctx, 31, 0x19A4E0u);
    ctx->pc = 0x193520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193520u, 0x19A4D8u, 0x19A4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A4E0u;
label_19a4e0:
    // 0x19a4e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19a4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19a4e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19a4e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19a4e8: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x19a4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x19a4ec: 0x278592f8  addiu       $a1, $gp, -0x6D08
    ctx->pc = 0x19a4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939384));
    // 0x19a4f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19a4f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a4f4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x19a4f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19a4f8: 0xc08f558  jal         func_23D560
    ctx->pc = 0x19A4F8u;
    SET_GPR_U32(ctx, 31, 0x19A500u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x19A4F8u, 0x19A500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A500u;
label_19a500:
    // 0x19a500: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x19a500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19a504: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x19a504u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19a508: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x19a508u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19a50c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x19a50cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19a510: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19a510u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19a514: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19a514u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19a518: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19a518u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19a51c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19a51cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a520: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19a520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a524: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19a524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a528: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x19a528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x19a52c: 0x3e00008  jr          $ra
    ctx->pc = 0x19A52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A534u;
    // 0x19a534: 0x0  nop
    ctx->pc = 0x19a534u;
    // NOP
    // 0x19a538: 0x0  nop
    ctx->pc = 0x19a538u;
    // NOP
    // 0x19a53c: 0x0  nop
    ctx->pc = 0x19a53cu;
    // NOP
    ctx->pc = 0x19a540u;
}
