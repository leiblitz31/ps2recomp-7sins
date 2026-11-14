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

// Function: sub_002D9C20
// Address: 0x2d9c20 - 0x2d9ff0
void sub_002D9C20_0x2d9c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9C20_0x2d9c20");
#endif

    switch (ctx->pc) {
        case 0x2d9c74u: goto label_2d9c74;
        case 0x2d9c8cu: goto label_2d9c8c;
        case 0x2d9ca8u: goto label_2d9ca8;
        case 0x2d9cb0u: goto label_2d9cb0;
        case 0x2d9cc8u: goto label_2d9cc8;
        case 0x2d9cdcu: goto label_2d9cdc;
        case 0x2d9cf4u: goto label_2d9cf4;
        case 0x2d9d0cu: goto label_2d9d0c;
        case 0x2d9d38u: goto label_2d9d38;
        case 0x2d9d44u: goto label_2d9d44;
        case 0x2d9d60u: goto label_2d9d60;
        case 0x2d9d74u: goto label_2d9d74;
        case 0x2d9d80u: goto label_2d9d80;
        case 0x2d9d90u: goto label_2d9d90;
        case 0x2d9da0u: goto label_2d9da0;
        case 0x2d9dacu: goto label_2d9dac;
        case 0x2d9dbcu: goto label_2d9dbc;
        case 0x2d9dd0u: goto label_2d9dd0;
        case 0x2d9de0u: goto label_2d9de0;
        case 0x2d9df0u: goto label_2d9df0;
        case 0x2d9e00u: goto label_2d9e00;
        case 0x2d9e0cu: goto label_2d9e0c;
        case 0x2d9e1cu: goto label_2d9e1c;
        case 0x2d9e2cu: goto label_2d9e2c;
        case 0x2d9e40u: goto label_2d9e40;
        case 0x2d9e54u: goto label_2d9e54;
        case 0x2d9e64u: goto label_2d9e64;
        case 0x2d9e70u: goto label_2d9e70;
        case 0x2d9e80u: goto label_2d9e80;
        case 0x2d9e90u: goto label_2d9e90;
        case 0x2d9e9cu: goto label_2d9e9c;
        case 0x2d9eacu: goto label_2d9eac;
        case 0x2d9ebcu: goto label_2d9ebc;
        case 0x2d9ed0u: goto label_2d9ed0;
        case 0x2d9ef0u: goto label_2d9ef0;
        case 0x2d9f04u: goto label_2d9f04;
        case 0x2d9f18u: goto label_2d9f18;
        case 0x2d9f24u: goto label_2d9f24;
        case 0x2d9f48u: goto label_2d9f48;
        case 0x2d9f68u: goto label_2d9f68;
        case 0x2d9f78u: goto label_2d9f78;
        case 0x2d9f84u: goto label_2d9f84;
        case 0x2d9fa8u: goto label_2d9fa8;
        default: break;
    }

    ctx->pc = 0x2d9c20u;

    // 0x2d9c20: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2d9c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2d9c24: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2d9c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2d9c28: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2d9c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2d9c2c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2d9c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2d9c30: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2d9c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2d9c34: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d9c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d9c38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d9c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d9c3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d9c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d9c40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d9c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d9c44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d9c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d9c48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d9c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d9c4c: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x2d9c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x2d9c50: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x2d9c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x2d9c54: 0xafa600d0  sw          $a2, 0xD0($sp)
    ctx->pc = 0x2d9c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 6));
    // 0x2d9c58: 0xa3a700e0  sb          $a3, 0xE0($sp)
    ctx->pc = 0x2d9c58u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 224), (uint8_t)GPR_U32(ctx, 7));
    // 0x2d9c5c: 0xe7ac00f0  swc1        $f12, 0xF0($sp)
    ctx->pc = 0x2d9c5cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2d9c60: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x2d9c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d9c64: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x2d9c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d9c68: 0xc7ac00f0  lwc1        $f12, 0xF0($sp)
    ctx->pc = 0x2d9c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d9c6c: 0xc0b6870  jal         func_2DA1C0
    ctx->pc = 0x2D9C6Cu;
    SET_GPR_U32(ctx, 31, 0x2D9C74u);
    ctx->pc = 0x2DA1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA1C0u, 0x2D9C6Cu, 0x2D9C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9C74u;
label_2d9c74:
    // 0x2d9c74: 0x104000ce  beqz        $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x2D9C74u;
    {
        const bool branch_taken_0x2d9c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9c74) {
            ctx->pc = 0x2D9FB0u;
            goto label_2d9fb0;
        }
    }
    ctx->pc = 0x2D9C7Cu;
    // 0x2d9c7c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x2d9c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d9c80: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2d9c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2d9c84: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D9C84u;
    SET_GPR_U32(ctx, 31, 0x2D9C8Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D9C84u, 0x2D9C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9C8Cu;
label_2d9c8c:
    // 0x2d9c8c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d9c8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9c90: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x2d9c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x2d9c94: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2d9c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2d9c98: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x2d9c98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x2d9c9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d9c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9ca0: 0xc096da0  jal         func_25B680
    ctx->pc = 0x2D9CA0u;
    SET_GPR_U32(ctx, 31, 0x2D9CA8u);
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x2D9CA0u, 0x2D9CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9CA8u;
label_2d9ca8:
    // 0x2d9ca8: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2D9CA8u;
    SET_GPR_U32(ctx, 31, 0x2D9CB0u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2D9CA8u, 0x2D9CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9CB0u;
label_2d9cb0:
    // 0x2d9cb0: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x2d9cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2d9cb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d9cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9cb8: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x2d9cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d9cbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d9cbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9cc0: 0xc0b352c  jal         func_2CD4B0
    ctx->pc = 0x2D9CC0u;
    SET_GPR_U32(ctx, 31, 0x2D9CC8u);
    ctx->pc = 0x2CD4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD4B0u, 0x2D9CC0u, 0x2D9CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9CC8u;
label_2d9cc8:
    // 0x2d9cc8: 0x104000b9  beqz        $v0, . + 4 + (0xB9 << 2)
    ctx->pc = 0x2D9CC8u;
    {
        const bool branch_taken_0x2d9cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9cc8) {
            ctx->pc = 0x2D9FB0u;
            goto label_2d9fb0;
        }
    }
    ctx->pc = 0x2D9CD0u;
    // 0x2d9cd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d9cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9cd4: 0xc096fbc  jal         func_25BEF0
    ctx->pc = 0x2D9CD4u;
    SET_GPR_U32(ctx, 31, 0x2D9CDCu);
    ctx->pc = 0x25BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEF0u, 0x2D9CD4u, 0x2D9CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9CDCu;
label_2d9cdc:
    // 0x2d9cdc: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2d9cdcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9ce0: 0x13c0000a  beqz        $fp, . + 4 + (0xA << 2)
    ctx->pc = 0x2D9CE0u;
    {
        const bool branch_taken_0x2d9ce0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9ce0) {
            ctx->pc = 0x2D9D0Cu;
            goto label_2d9d0c;
        }
    }
    ctx->pc = 0x2D9CE8u;
    // 0x2d9ce8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d9ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9cec: 0xc09702c  jal         func_25C0B0
    ctx->pc = 0x2D9CECu;
    SET_GPR_U32(ctx, 31, 0x2D9CF4u);
    ctx->pc = 0x25C0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C0B0u, 0x2D9CECu, 0x2D9CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9CF4u;
label_2d9cf4:
    // 0x2d9cf4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D9CF4u;
    {
        const bool branch_taken_0x2d9cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9cf4) {
            ctx->pc = 0x2D9D0Cu;
            goto label_2d9d0c;
        }
    }
    ctx->pc = 0x2D9CFCu;
    // 0x2d9cfc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2d9cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9d00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d9d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9d04: 0xc096f9c  jal         func_25BE70
    ctx->pc = 0x2D9D04u;
    SET_GPR_U32(ctx, 31, 0x2D9D0Cu);
    ctx->pc = 0x25BE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BE70u, 0x2D9D04u, 0x2D9D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9D0Cu;
label_2d9d0c:
    // 0x2d9d0c: 0x93a300e0  lbu         $v1, 0xE0($sp)
    ctx->pc = 0x2d9d0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d9d10: 0x106000a7  beqz        $v1, . + 4 + (0xA7 << 2)
    ctx->pc = 0x2D9D10u;
    {
        const bool branch_taken_0x2d9d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9d10) {
            ctx->pc = 0x2D9FB0u;
            goto label_2d9fb0;
        }
    }
    ctx->pc = 0x2D9D18u;
    // 0x2d9d18: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x2d9d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d9d1c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2d9d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d9d20: 0x8c63003c  lw          $v1, 0x3C($v1)
    ctx->pc = 0x2d9d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x2d9d24: 0x1083006a  beq         $a0, $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x2D9D24u;
    {
        const bool branch_taken_0x2d9d24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d9d24) {
            ctx->pc = 0x2D9ED0u;
            goto label_2d9ed0;
        }
    }
    ctx->pc = 0x2D9D2Cu;
    // 0x2d9d2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d9d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9d30: 0xc096a18  jal         func_25A860
    ctx->pc = 0x2D9D30u;
    SET_GPR_U32(ctx, 31, 0x2D9D38u);
    ctx->pc = 0x25A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A860u, 0x2D9D30u, 0x2D9D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9D38u;
label_2d9d38:
    // 0x2d9d38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d9d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9d3c: 0xc0970c0  jal         func_25C300
    ctx->pc = 0x2D9D3Cu;
    SET_GPR_U32(ctx, 31, 0x2D9D44u);
    ctx->pc = 0x25C300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C300u, 0x2D9D3Cu, 0x2D9D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9D44u;
label_2d9d44:
    // 0x2d9d44: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2d9d44u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9d48: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2d9d48u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9d4c: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D9D4Cu;
    {
        const bool branch_taken_0x2d9d4c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9d4c) {
            ctx->pc = 0x2D9D64u;
            goto label_2d9d64;
        }
    }
    ctx->pc = 0x2D9D54u;
    // 0x2d9d54: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d9d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9d58: 0xc096e08  jal         func_25B820
    ctx->pc = 0x2D9D58u;
    SET_GPR_U32(ctx, 31, 0x2D9D60u);
    ctx->pc = 0x25B820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B820u, 0x2D9D58u, 0x2D9D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9D60u;
label_2d9d60:
    // 0x2d9d60: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x2d9d60u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2d9d64:
    // 0x2d9d64: 0x12c00038  beqz        $s6, . + 4 + (0x38 << 2)
    ctx->pc = 0x2D9D64u;
    {
        const bool branch_taken_0x2d9d64 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9d64) {
            ctx->pc = 0x2D9E48u;
            goto label_2d9e48;
        }
    }
    ctx->pc = 0x2D9D6Cu;
    // 0x2d9d6c: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2D9D6Cu;
    SET_GPR_U32(ctx, 31, 0x2D9D74u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2D9D6Cu, 0x2D9D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9D74u;
label_2d9d74:
    // 0x2d9d74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d9d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9d78: 0xc0b06c4  jal         func_2C1B10
    ctx->pc = 0x2D9D78u;
    SET_GPR_U32(ctx, 31, 0x2D9D80u);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x2D9D78u, 0x2D9D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9D80u;
label_2d9d80:
    // 0x2d9d80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d9d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9d84: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x2d9d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d9d88: 0xc0b4aac  jal         func_2D2AB0
    ctx->pc = 0x2D9D88u;
    SET_GPR_U32(ctx, 31, 0x2D9D90u);
    ctx->pc = 0x2D2AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2AB0u, 0x2D9D88u, 0x2D9D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9D90u;
label_2d9d90:
    // 0x2d9d90: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D9D90u;
    {
        const bool branch_taken_0x2d9d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9d90) {
            ctx->pc = 0x2D9DC4u;
            goto label_2d9dc4;
        }
    }
    ctx->pc = 0x2D9D98u;
    // 0x2d9d98: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2D9D98u;
    SET_GPR_U32(ctx, 31, 0x2D9DA0u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2D9D98u, 0x2D9DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9DA0u;
label_2d9da0:
    // 0x2d9da0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d9da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9da4: 0xc0b06c4  jal         func_2C1B10
    ctx->pc = 0x2D9DA4u;
    SET_GPR_U32(ctx, 31, 0x2D9DACu);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x2D9DA4u, 0x2D9DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9DACu;
label_2d9dac:
    // 0x2d9dac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d9dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9db0: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x2d9db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d9db4: 0xc0b4a64  jal         func_2D2990
    ctx->pc = 0x2D9DB4u;
    SET_GPR_U32(ctx, 31, 0x2D9DBCu);
    ctx->pc = 0x2D2990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2990u, 0x2D9DB4u, 0x2D9DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9DBCu;
label_2d9dbc:
    // 0x2d9dbc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2D9DBCu;
    {
        const bool branch_taken_0x2d9dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9dbc) {
            ctx->pc = 0x2D9E1Cu;
            goto label_2d9e1c;
        }
    }
    ctx->pc = 0x2D9DC4u;
label_2d9dc4:
    // 0x2d9dc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d9dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9dc8: 0xc096880  jal         func_25A200
    ctx->pc = 0x2D9DC8u;
    SET_GPR_U32(ctx, 31, 0x2D9DD0u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2D9DC8u, 0x2D9DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9DD0u;
label_2d9dd0:
    // 0x2d9dd0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D9DD0u;
    {
        const bool branch_taken_0x2d9dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9dd0) {
            ctx->pc = 0x2D9DF8u;
            goto label_2d9df8;
        }
    }
    ctx->pc = 0x2D9DD8u;
    // 0x2d9dd8: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2D9DD8u;
    SET_GPR_U32(ctx, 31, 0x2D9DE0u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2D9DD8u, 0x2D9DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9DE0u;
label_2d9de0:
    // 0x2d9de0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d9de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9de4: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x2d9de4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d9de8: 0xc0b1704  jal         func_2C5C10
    ctx->pc = 0x2D9DE8u;
    SET_GPR_U32(ctx, 31, 0x2D9DF0u);
    ctx->pc = 0x2C5C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5C10u, 0x2D9DE8u, 0x2D9DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9DF0u;
label_2d9df0:
    // 0x2d9df0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D9DF0u;
    {
        const bool branch_taken_0x2d9df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9df0) {
            ctx->pc = 0x2D9E1Cu;
            goto label_2d9e1c;
        }
    }
    ctx->pc = 0x2D9DF8u;
label_2d9df8:
    // 0x2d9df8: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2D9DF8u;
    SET_GPR_U32(ctx, 31, 0x2D9E00u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2D9DF8u, 0x2D9E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9E00u;
label_2d9e00:
    // 0x2d9e00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d9e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9e04: 0xc0b06c4  jal         func_2C1B10
    ctx->pc = 0x2D9E04u;
    SET_GPR_U32(ctx, 31, 0x2D9E0Cu);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x2D9E04u, 0x2D9E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9E0Cu;
label_2d9e0c:
    // 0x2d9e0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d9e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9e10: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x2d9e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d9e14: 0xc0b5ad0  jal         func_2D6B40
    ctx->pc = 0x2D9E14u;
    SET_GPR_U32(ctx, 31, 0x2D9E1Cu);
    ctx->pc = 0x2D6B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6B40u, 0x2D9E14u, 0x2D9E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9E1Cu;
label_2d9e1c:
    // 0x2d9e1c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x2d9e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d9e20: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2d9e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2d9e24: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D9E24u;
    SET_GPR_U32(ctx, 31, 0x2D9E2Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D9E24u, 0x2D9E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9E2Cu;
label_2d9e2c:
    // 0x2d9e2c: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x2d9e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x2d9e30: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x2d9e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2d9e34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d9e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d9e38: 0xc0ae044  jal         func_2B8110
    ctx->pc = 0x2D9E38u;
    SET_GPR_U32(ctx, 31, 0x2D9E40u);
    ctx->pc = 0x2B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8110u, 0x2D9E38u, 0x2D9E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9E40u;
label_2d9e40:
    // 0x2d9e40: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2D9E40u;
    {
        const bool branch_taken_0x2d9e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9e40) {
            ctx->pc = 0x2D9ED0u;
            goto label_2d9ed0;
        }
    }
    ctx->pc = 0x2D9E48u;
label_2d9e48:
    // 0x2d9e48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d9e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9e4c: 0xc096880  jal         func_25A200
    ctx->pc = 0x2D9E4Cu;
    SET_GPR_U32(ctx, 31, 0x2D9E54u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2D9E4Cu, 0x2D9E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9E54u;
label_2d9e54:
    // 0x2d9e54: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D9E54u;
    {
        const bool branch_taken_0x2d9e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d9e54) {
            ctx->pc = 0x2D9ED0u;
            goto label_2d9ed0;
        }
    }
    ctx->pc = 0x2D9E5Cu;
    // 0x2d9e5c: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2D9E5Cu;
    SET_GPR_U32(ctx, 31, 0x2D9E64u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2D9E5Cu, 0x2D9E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9E64u;
label_2d9e64:
    // 0x2d9e64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d9e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9e68: 0xc0b06c4  jal         func_2C1B10
    ctx->pc = 0x2D9E68u;
    SET_GPR_U32(ctx, 31, 0x2D9E70u);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x2D9E68u, 0x2D9E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9E70u;
label_2d9e70:
    // 0x2d9e70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d9e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9e74: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x2d9e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d9e78: 0xc0b4aac  jal         func_2D2AB0
    ctx->pc = 0x2D9E78u;
    SET_GPR_U32(ctx, 31, 0x2D9E80u);
    ctx->pc = 0x2D2AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2AB0u, 0x2D9E78u, 0x2D9E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9E80u;
label_2d9e80:
    // 0x2d9e80: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D9E80u;
    {
        const bool branch_taken_0x2d9e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d9e80) {
            ctx->pc = 0x2D9ED0u;
            goto label_2d9ed0;
        }
    }
    ctx->pc = 0x2D9E88u;
    // 0x2d9e88: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2D9E88u;
    SET_GPR_U32(ctx, 31, 0x2D9E90u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2D9E88u, 0x2D9E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9E90u;
label_2d9e90:
    // 0x2d9e90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d9e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9e94: 0xc0b06c4  jal         func_2C1B10
    ctx->pc = 0x2D9E94u;
    SET_GPR_U32(ctx, 31, 0x2D9E9Cu);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x2D9E94u, 0x2D9E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9E9Cu;
label_2d9e9c:
    // 0x2d9e9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d9e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9ea0: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x2d9ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d9ea4: 0xc0b5ad0  jal         func_2D6B40
    ctx->pc = 0x2D9EA4u;
    SET_GPR_U32(ctx, 31, 0x2D9EACu);
    ctx->pc = 0x2D6B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6B40u, 0x2D9EA4u, 0x2D9EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9EACu;
label_2d9eac:
    // 0x2d9eac: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x2d9eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d9eb0: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2d9eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2d9eb4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D9EB4u;
    SET_GPR_U32(ctx, 31, 0x2D9EBCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D9EB4u, 0x2D9EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9EBCu;
label_2d9ebc:
    // 0x2d9ebc: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x2d9ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x2d9ec0: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2d9ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2d9ec4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d9ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d9ec8: 0xc0ae044  jal         func_2B8110
    ctx->pc = 0x2D9EC8u;
    SET_GPR_U32(ctx, 31, 0x2D9ED0u);
    ctx->pc = 0x2B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8110u, 0x2D9EC8u, 0x2D9ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9ED0u;
label_2d9ed0:
    // 0x2d9ed0: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x2d9ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d9ed4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2d9ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d9ed8: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x2d9ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2d9edc: 0x14830034  bne         $a0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x2D9EDCu;
    {
        const bool branch_taken_0x2d9edc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d9edc) {
            ctx->pc = 0x2D9FB0u;
            goto label_2d9fb0;
        }
    }
    ctx->pc = 0x2D9EE4u;
    // 0x2d9ee4: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x2d9ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d9ee8: 0xc09d274  jal         func_2749D0
    ctx->pc = 0x2D9EE8u;
    SET_GPR_U32(ctx, 31, 0x2D9EF0u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x2D9EE8u, 0x2D9EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9EF0u;
label_2d9ef0:
    // 0x2d9ef0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2d9ef0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9ef4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2d9ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d9ef8: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2d9ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2d9efc: 0xc041a70  jal         func_1069C0
    ctx->pc = 0x2D9EFCu;
    SET_GPR_U32(ctx, 31, 0x2D9F04u);
    ctx->pc = 0x1069C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069C0u, 0x2D9EFCu, 0x2D9F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9F04u;
label_2d9f04:
    // 0x2d9f04: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2d9f04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9f08: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d9f08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9f0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d9f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9f10: 0xc041a60  jal         func_106980
    ctx->pc = 0x2D9F10u;
    SET_GPR_U32(ctx, 31, 0x2D9F18u);
    ctx->pc = 0x106980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106980u, 0x2D9F10u, 0x2D9F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9F18u;
label_2d9f18:
    // 0x2d9f18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d9f18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9f1c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D9F1Cu;
    {
        const bool branch_taken_0x2d9f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9f1c) {
            ctx->pc = 0x2D9F3Cu;
            goto label_2d9f3c;
        }
    }
    ctx->pc = 0x2D9F24u;
label_2d9f24:
    // 0x2d9f24: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d9f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d9f28: 0x16a20003  bne         $s5, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D9F28u;
    {
        const bool branch_taken_0x2d9f28 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d9f28) {
            ctx->pc = 0x2D9F38u;
            goto label_2d9f38;
        }
    }
    ctx->pc = 0x2D9F30u;
    // 0x2d9f30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d9f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d9f34: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x2d9f34u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2d9f38:
    // 0x2d9f38: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2d9f38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2d9f3c:
    // 0x2d9f3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d9f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9f40: 0xc041a14  jal         func_106850
    ctx->pc = 0x2D9F40u;
    SET_GPR_U32(ctx, 31, 0x2D9F48u);
    ctx->pc = 0x106850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106850u, 0x2D9F40u, 0x2D9F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9F48u;
label_2d9f48:
    // 0x2d9f48: 0x1602fff6  bne         $s0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2D9F48u;
    {
        const bool branch_taken_0x2d9f48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d9f48) {
            ctx->pc = 0x2D9F24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d9f24;
        }
    }
    ctx->pc = 0x2D9F50u;
    // 0x2d9f50: 0x16400017  bnez        $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x2D9F50u;
    {
        const bool branch_taken_0x2d9f50 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d9f50) {
            ctx->pc = 0x2D9FB0u;
            goto label_2d9fb0;
        }
    }
    ctx->pc = 0x2D9F58u;
    // 0x2d9f58: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2d9f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d9f5c: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2d9f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2d9f60: 0xc041a68  jal         func_1069A0
    ctx->pc = 0x2D9F60u;
    SET_GPR_U32(ctx, 31, 0x2D9F68u);
    ctx->pc = 0x1069A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069A0u, 0x2D9F60u, 0x2D9F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9F68u;
label_2d9f68:
    // 0x2d9f68: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2d9f68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9f6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d9f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9f70: 0xc041a60  jal         func_106980
    ctx->pc = 0x2D9F70u;
    SET_GPR_U32(ctx, 31, 0x2D9F78u);
    ctx->pc = 0x106980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106980u, 0x2D9F70u, 0x2D9F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9F78u;
label_2d9f78:
    // 0x2d9f78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d9f78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9f7c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D9F7Cu;
    {
        const bool branch_taken_0x2d9f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9f7c) {
            ctx->pc = 0x2D9F9Cu;
            goto label_2d9f9c;
        }
    }
    ctx->pc = 0x2D9F84u;
label_2d9f84:
    // 0x2d9f84: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d9f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d9f88: 0x16a20003  bne         $s5, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D9F88u;
    {
        const bool branch_taken_0x2d9f88 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d9f88) {
            ctx->pc = 0x2D9F98u;
            goto label_2d9f98;
        }
    }
    ctx->pc = 0x2D9F90u;
    // 0x2d9f90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d9f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d9f94: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x2d9f94u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2d9f98:
    // 0x2d9f98: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2d9f98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2d9f9c:
    // 0x2d9f9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d9f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9fa0: 0xc041a14  jal         func_106850
    ctx->pc = 0x2D9FA0u;
    SET_GPR_U32(ctx, 31, 0x2D9FA8u);
    ctx->pc = 0x106850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106850u, 0x2D9FA0u, 0x2D9FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9FA8u;
label_2d9fa8:
    // 0x2d9fa8: 0x1602fff6  bne         $s0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2D9FA8u;
    {
        const bool branch_taken_0x2d9fa8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d9fa8) {
            ctx->pc = 0x2D9F84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d9f84;
        }
    }
    ctx->pc = 0x2D9FB0u;
label_2d9fb0:
    // 0x2d9fb0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2d9fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d9fb4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2d9fb4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d9fb8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2d9fb8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d9fbc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2d9fbcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d9fc0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d9fc0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d9fc4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d9fc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d9fc8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d9fc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d9fcc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d9fccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d9fd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d9fd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9fd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d9fd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9fd8: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x2d9fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2d9fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9FE4u;
    // 0x2d9fe4: 0x0  nop
    ctx->pc = 0x2d9fe4u;
    // NOP
    // 0x2d9fe8: 0x0  nop
    ctx->pc = 0x2d9fe8u;
    // NOP
    // 0x2d9fec: 0x0  nop
    ctx->pc = 0x2d9fecu;
    // NOP
    ctx->pc = 0x2d9ff0u;
}
