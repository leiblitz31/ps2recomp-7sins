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

// Function: sub_002D1E10
// Address: 0x2d1e10 - 0x2d2150
void sub_002D1E10_0x2d1e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1E10_0x2d1e10");
#endif

    switch (ctx->pc) {
        case 0x2d1e60u: goto label_2d1e60;
        case 0x2d1e70u: goto label_2d1e70;
        case 0x2d1e88u: goto label_2d1e88;
        case 0x2d1eccu: goto label_2d1ecc;
        case 0x2d1edcu: goto label_2d1edc;
        case 0x2d1ef4u: goto label_2d1ef4;
        case 0x2d1f14u: goto label_2d1f14;
        case 0x2d1f24u: goto label_2d1f24;
        case 0x2d1f38u: goto label_2d1f38;
        case 0x2d1f64u: goto label_2d1f64;
        case 0x2d1f74u: goto label_2d1f74;
        case 0x2d1f8cu: goto label_2d1f8c;
        case 0x2d1facu: goto label_2d1fac;
        case 0x2d1fbcu: goto label_2d1fbc;
        case 0x2d1fd0u: goto label_2d1fd0;
        case 0x2d1fe4u: goto label_2d1fe4;
        case 0x2d2004u: goto label_2d2004;
        case 0x2d2014u: goto label_2d2014;
        case 0x2d202cu: goto label_2d202c;
        case 0x2d203cu: goto label_2d203c;
        case 0x2d2048u: goto label_2d2048;
        case 0x2d2074u: goto label_2d2074;
        case 0x2d208cu: goto label_2d208c;
        case 0x2d2098u: goto label_2d2098;
        case 0x2d20b0u: goto label_2d20b0;
        case 0x2d20ccu: goto label_2d20cc;
        case 0x2d20e4u: goto label_2d20e4;
        case 0x2d20f4u: goto label_2d20f4;
        case 0x2d210cu: goto label_2d210c;
        case 0x2d211cu: goto label_2d211c;
        default: break;
    }

    ctx->pc = 0x2d1e10u;

    // 0x2d1e10: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2d1e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2d1e14: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2d1e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2d1e18: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2d1e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2d1e1c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2d1e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2d1e20: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d1e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d1e24: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d1e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d1e28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d1e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d1e2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d1e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d1e30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d1e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d1e34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d1e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d1e38: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x2d1e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x2d1e3c: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x2d1e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
    // 0x2d1e40: 0xafa600f0  sw          $a2, 0xF0($sp)
    ctx->pc = 0x2d1e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 6));
    // 0x2d1e44: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x2d1e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d1e48: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x2d1e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d1e4c: 0x108300b4  beq         $a0, $v1, . + 4 + (0xB4 << 2)
    ctx->pc = 0x2D1E4Cu;
    {
        const bool branch_taken_0x2d1e4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d1e4c) {
            ctx->pc = 0x2D2120u;
            goto label_2d2120;
        }
    }
    ctx->pc = 0x2D1E54u;
    // 0x2d1e54: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x2d1e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2d1e58: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2D1E58u;
    SET_GPR_U32(ctx, 31, 0x2D1E60u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2D1E58u, 0x2D1E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1E60u;
label_2d1e60:
    // 0x2d1e60: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x2d1e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2d1e64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d1e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1e68: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2D1E68u;
    SET_GPR_U32(ctx, 31, 0x2D1E70u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2D1E68u, 0x2D1E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1E70u;
label_2d1e70:
    // 0x2d1e70: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2d1e70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1e74: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1E74u;
    {
        const bool branch_taken_0x2d1e74 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1e74) {
            ctx->pc = 0x2D1E8Cu;
            goto label_2d1e8c;
        }
    }
    ctx->pc = 0x2D1E7Cu;
    // 0x2d1e7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d1e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1e80: 0xc0b62d8  jal         func_2D8B60
    ctx->pc = 0x2D1E80u;
    SET_GPR_U32(ctx, 31, 0x2D1E88u);
    ctx->pc = 0x2D8B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8B60u, 0x2D1E80u, 0x2D1E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1E88u;
label_2d1e88:
    // 0x2d1e88: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2d1e88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d1e8c:
    // 0x2d1e8c: 0xafb300cc  sw          $s3, 0xCC($sp)
    ctx->pc = 0x2d1e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 19));
    // 0x2d1e90: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x2d1e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d1e94: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x2d1e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2d1e98: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x2d1e98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x2d1e9c: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x2d1e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d1ea0: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x2d1ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2d1ea4: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x2d1ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x2d1ea8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d1ea8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d1eac: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x2d1eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2d1eb0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2d1eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d1eb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d1eb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d1eb8: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x2d1eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2d1ebc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2d1ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d1ec0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2d1ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d1ec4: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2D1EC4u;
    SET_GPR_U32(ctx, 31, 0x2D1ECCu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2D1EC4u, 0x2D1ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1ECCu;
label_2d1ecc:
    // 0x2d1ecc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2d1eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d1ed0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d1ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1ed4: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2D1ED4u;
    SET_GPR_U32(ctx, 31, 0x2D1EDCu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2D1ED4u, 0x2D1EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1EDCu;
label_2d1edc:
    // 0x2d1edc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d1edcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1ee0: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1EE0u;
    {
        const bool branch_taken_0x2d1ee0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1ee0) {
            ctx->pc = 0x2D1EF8u;
            goto label_2d1ef8;
        }
    }
    ctx->pc = 0x2D1EE8u;
    // 0x2d1ee8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d1ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1eec: 0xc0b4694  jal         func_2D1A50
    ctx->pc = 0x2D1EECu;
    SET_GPR_U32(ctx, 31, 0x2D1EF4u);
    ctx->pc = 0x2D1A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1A50u, 0x2D1EECu, 0x2D1EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1EF4u;
label_2d1ef4:
    // 0x2d1ef4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d1ef4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d1ef8:
    // 0x2d1ef8: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x2d1ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2d1efc: 0xac52001c  sw          $s2, 0x1C($v0)
    ctx->pc = 0x2d1efcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 18));
    // 0x2d1f00: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2d1f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d1f04: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2d1f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2d1f08: 0x27a500cc  addiu       $a1, $sp, 0xCC
    ctx->pc = 0x2d1f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x2d1f0c: 0xc0b4984  jal         func_2D2610
    ctx->pc = 0x2D1F0Cu;
    SET_GPR_U32(ctx, 31, 0x2D1F14u);
    ctx->pc = 0x2D2610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2610u, 0x2D1F0Cu, 0x2D1F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1F14u;
label_2d1f14:
    // 0x2d1f14: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x2d1f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d1f18: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2d1f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2d1f1c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D1F1Cu;
    SET_GPR_U32(ctx, 31, 0x2D1F24u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D1F1Cu, 0x2D1F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1F24u;
label_2d1f24:
    // 0x2d1f24: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2d1f24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1f28: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x2d1f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x2d1f2c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d1f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1f30: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2D1F30u;
    SET_GPR_U32(ctx, 31, 0x2D1F38u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2D1F30u, 0x2D1F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1F38u;
label_2d1f38:
    // 0x2d1f38: 0x27a300a8  addiu       $v1, $sp, 0xA8
    ctx->pc = 0x2d1f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x2d1f3c: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x2d1f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2d1f40: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2d1f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d1f44: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2d1f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1f48: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2d1f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1f4c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2d1f4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d1f50: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2d1f50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d1f54: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2d1f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d1f58: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2d1f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d1f5c: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2D1F5Cu;
    SET_GPR_U32(ctx, 31, 0x2D1F64u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2D1F5Cu, 0x2D1F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1F64u;
label_2d1f64:
    // 0x2d1f64: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2d1f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d1f68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d1f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1f6c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2D1F6Cu;
    SET_GPR_U32(ctx, 31, 0x2D1F74u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2D1F6Cu, 0x2D1F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1F74u;
label_2d1f74:
    // 0x2d1f74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d1f74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1f78: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1F78u;
    {
        const bool branch_taken_0x2d1f78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1f78) {
            ctx->pc = 0x2D1F90u;
            goto label_2d1f90;
        }
    }
    ctx->pc = 0x2D1F80u;
    // 0x2d1f80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1f84: 0xc0b9f78  jal         func_2E7DE0
    ctx->pc = 0x2D1F84u;
    SET_GPR_U32(ctx, 31, 0x2D1F8Cu);
    ctx->pc = 0x2E7DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7DE0u, 0x2D1F84u, 0x2D1F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1F8Cu;
label_2d1f8c:
    // 0x2d1f8c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d1f8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d1f90:
    // 0x2d1f90: 0xafb100c8  sw          $s1, 0xC8($sp)
    ctx->pc = 0x2d1f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 17));
    // 0x2d1f94: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x2d1f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2d1f98: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2d1f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2d1f9c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d1f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d1fa0: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x2d1fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x2d1fa4: 0xc0b48a4  jal         func_2D2290
    ctx->pc = 0x2D1FA4u;
    SET_GPR_U32(ctx, 31, 0x2D1FACu);
    ctx->pc = 0x2D2290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2290u, 0x2D1FA4u, 0x2D1FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1FACu;
label_2d1fac:
    // 0x2d1fac: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x2d1facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d1fb0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2d1fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2d1fb4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D1FB4u;
    SET_GPR_U32(ctx, 31, 0x2D1FBCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D1FB4u, 0x2D1FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1FBCu;
label_2d1fbc:
    // 0x2d1fbc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2d1fbcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1fc0: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x2d1fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x2d1fc4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d1fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1fc8: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2D1FC8u;
    SET_GPR_U32(ctx, 31, 0x2D1FD0u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2D1FC8u, 0x2D1FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1FD0u;
label_2d1fd0:
    // 0x2d1fd0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2d1fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2d1fd4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d1fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d1fd8: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x2d1fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x2d1fdc: 0xc0b4880  jal         func_2D2200
    ctx->pc = 0x2D1FDCu;
    SET_GPR_U32(ctx, 31, 0x2D1FE4u);
    ctx->pc = 0x2D2200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2200u, 0x2D1FDCu, 0x2D1FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1FE4u;
label_2d1fe4:
    // 0x2d1fe4: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2d1fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2d1fe8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d1fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d1fec: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2d1fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d1ff0: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2D1FF0u;
    {
        const bool branch_taken_0x2d1ff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d1ff0) {
            ctx->pc = 0x2D202Cu;
            goto label_2d202c;
        }
    }
    ctx->pc = 0x2D1FF8u;
    // 0x2d1ff8: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x2d1ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x2d1ffc: 0xc050ed8  jal         func_143B60
    ctx->pc = 0x2D1FFCu;
    SET_GPR_U32(ctx, 31, 0x2D2004u);
    ctx->pc = 0x143B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B60u, 0x2D1FFCu, 0x2D2004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2004u;
label_2d2004:
    // 0x2d2004: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2d2004u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2008: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x2d2008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d200c: 0xc09138c  jal         func_244E30
    ctx->pc = 0x2D200Cu;
    SET_GPR_U32(ctx, 31, 0x2D2014u);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x2D200Cu, 0x2D2014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2014u;
label_2d2014:
    // 0x2d2014: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d2014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2018: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2d2018u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2d201c: 0x24a5e380  addiu       $a1, $a1, -0x1C80
    ctx->pc = 0x2d201cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960000));
    // 0x2d2020: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2d2020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2024: 0xc041b24  jal         func_106C90
    ctx->pc = 0x2D2024u;
    SET_GPR_U32(ctx, 31, 0x2D202Cu);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x2D2024u, 0x2D202Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D202Cu;
label_2d202c:
    // 0x2d202c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2d202cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d2030: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2d2030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2d2034: 0xc0b42ec  jal         func_2D0BB0
    ctx->pc = 0x2D2034u;
    SET_GPR_U32(ctx, 31, 0x2D203Cu);
    ctx->pc = 0x2D0BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0BB0u, 0x2D2034u, 0x2D203Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D203Cu;
label_2d203c:
    // 0x2d203c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d203cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2040: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2D2040u;
    {
        const bool branch_taken_0x2d2040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2040) {
            ctx->pc = 0x2D20BCu;
            goto label_2d20bc;
        }
    }
    ctx->pc = 0x2D2048u;
label_2d2048:
    // 0x2d2048: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d2048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d204c: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2d204cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d2050: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2d2050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d2054: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D2054u;
    {
        const bool branch_taken_0x2d2054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d2054) {
            ctx->pc = 0x2D20B8u;
            goto label_2d20b8;
        }
    }
    ctx->pc = 0x2D205Cu;
    // 0x2d205c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d205cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d2060: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x2d2060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d2064: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x2d2064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2d2068: 0x24460014  addiu       $a2, $v0, 0x14
    ctx->pc = 0x2d2068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x2d206c: 0xc0ad4f8  jal         func_2B53E0
    ctx->pc = 0x2D206Cu;
    SET_GPR_U32(ctx, 31, 0x2D2074u);
    ctx->pc = 0x2B53E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B53E0u, 0x2D206Cu, 0x2D2074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2074u;
label_2d2074:
    // 0x2d2074: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d2074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d2078: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D2078u;
    {
        const bool branch_taken_0x2d2078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2078) {
            ctx->pc = 0x2D209Cu;
            goto label_2d209c;
        }
    }
    ctx->pc = 0x2D2080u;
    // 0x2d2080: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d2080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d2084: 0xc0b42dc  jal         func_2D0B70
    ctx->pc = 0x2D2084u;
    SET_GPR_U32(ctx, 31, 0x2D208Cu);
    ctx->pc = 0x2D0B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0B70u, 0x2D2084u, 0x2D208Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D208Cu;
label_2d208c:
    // 0x2d208c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d208cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d2090: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2D2090u;
    SET_GPR_U32(ctx, 31, 0x2D2098u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2D2090u, 0x2D2098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2098u;
label_2d2098:
    // 0x2d2098: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2d2098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2d209c:
    // 0x2d209c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2d209cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d20a0: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2d20a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2d20a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d20a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d20a8: 0xc0b4854  jal         func_2D2150
    ctx->pc = 0x2D20A8u;
    SET_GPR_U32(ctx, 31, 0x2D20B0u);
    ctx->pc = 0x2D2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2150u, 0x2D20A8u, 0x2D20B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D20B0u;
label_2d20b0:
    // 0x2d20b0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2D20B0u;
    {
        const bool branch_taken_0x2d20b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d20b0) {
            ctx->pc = 0x2D2120u;
            goto label_2d2120;
        }
    }
    ctx->pc = 0x2D20B8u;
label_2d20b8:
    // 0x2d20b8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2d20b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2d20bc:
    // 0x2d20bc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2d20bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d20c0: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2d20c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2d20c4: 0xc0b42d4  jal         func_2D0B50
    ctx->pc = 0x2D20C4u;
    SET_GPR_U32(ctx, 31, 0x2D20CCu);
    ctx->pc = 0x2D0B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0B50u, 0x2D20C4u, 0x2D20CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D20CCu;
label_2d20cc:
    // 0x2d20cc: 0x1602ffde  bne         $s0, $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2D20CCu;
    {
        const bool branch_taken_0x2d20cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d20cc) {
            ctx->pc = 0x2D2048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d2048;
        }
    }
    ctx->pc = 0x2D20D4u;
    // 0x2d20d4: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x2d20d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d20d8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2d20d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2d20dc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D20DCu;
    SET_GPR_U32(ctx, 31, 0x2D20E4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D20DCu, 0x2D20E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D20E4u;
label_2d20e4:
    // 0x2d20e4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2d20e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d20e8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2d20e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d20ec: 0xc096fbc  jal         func_25BEF0
    ctx->pc = 0x2D20ECu;
    SET_GPR_U32(ctx, 31, 0x2D20F4u);
    ctx->pc = 0x25BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEF0u, 0x2D20ECu, 0x2D20F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D20F4u;
label_2d20f4:
    // 0x2d20f4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2d20f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d20f8: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D20F8u;
    {
        const bool branch_taken_0x2d20f8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d20f8) {
            ctx->pc = 0x2D211Cu;
            goto label_2d211c;
        }
    }
    ctx->pc = 0x2D2100u;
    // 0x2d2100: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d2100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2104: 0xc096da0  jal         func_25B680
    ctx->pc = 0x2D2104u;
    SET_GPR_U32(ctx, 31, 0x2D210Cu);
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x2D2104u, 0x2D210Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D210Cu;
label_2d210c:
    // 0x2d210c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d210cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2110: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d2110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2114: 0xc096f9c  jal         func_25BE70
    ctx->pc = 0x2D2114u;
    SET_GPR_U32(ctx, 31, 0x2D211Cu);
    ctx->pc = 0x25BE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BE70u, 0x2D2114u, 0x2D211Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D211Cu;
label_2d211c:
    // 0x2d211c: 0xaec00034  sw          $zero, 0x34($s6)
    ctx->pc = 0x2d211cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 52), GPR_U32(ctx, 0));
label_2d2120:
    // 0x2d2120: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2d2120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d2124: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2d2124u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d2128: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2d2128u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d212c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d212cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d2130: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d2130u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d2134: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d2134u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2138: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d2138u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d213c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d213cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2140: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d2140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2144: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x2d2144u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2d2148: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2150u;
}
