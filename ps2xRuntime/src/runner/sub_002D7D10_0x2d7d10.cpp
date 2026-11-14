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

// Function: sub_002D7D10
// Address: 0x2d7d10 - 0x2d7f80
void sub_002D7D10_0x2d7d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7D10_0x2d7d10");
#endif

    switch (ctx->pc) {
        case 0x2d7d48u: goto label_2d7d48;
        case 0x2d7d78u: goto label_2d7d78;
        case 0x2d7d88u: goto label_2d7d88;
        case 0x2d7dbcu: goto label_2d7dbc;
        case 0x2d7dd4u: goto label_2d7dd4;
        case 0x2d7de8u: goto label_2d7de8;
        case 0x2d7e18u: goto label_2d7e18;
        case 0x2d7e38u: goto label_2d7e38;
        case 0x2d7e58u: goto label_2d7e58;
        case 0x2d7e74u: goto label_2d7e74;
        case 0x2d7e84u: goto label_2d7e84;
        case 0x2d7e94u: goto label_2d7e94;
        case 0x2d7ea8u: goto label_2d7ea8;
        case 0x2d7ec4u: goto label_2d7ec4;
        case 0x2d7ed8u: goto label_2d7ed8;
        case 0x2d7ef4u: goto label_2d7ef4;
        case 0x2d7f08u: goto label_2d7f08;
        case 0x2d7f20u: goto label_2d7f20;
        case 0x2d7f3cu: goto label_2d7f3c;
        default: break;
    }

    ctx->pc = 0x2d7d10u;

    // 0x2d7d10: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2d7d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2d7d14: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2d7d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2d7d18: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2d7d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2d7d1c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2d7d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2d7d20: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2d7d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2d7d24: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d7d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2d7d28: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d7d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d7d2c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2d7d2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d7d30: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x2d7d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x2d7d34: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x2d7d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x2d7d38: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x2d7d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d7d3c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2d7d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d7d40: 0xc0b59c0  jal         func_2D6700
    ctx->pc = 0x2D7D40u;
    SET_GPR_U32(ctx, 31, 0x2D7D48u);
    ctx->pc = 0x2D6700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6700u, 0x2D7D40u, 0x2D7D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7D48u;
label_2d7d48:
    // 0x2d7d48: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d7d48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7d4c: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D7D4Cu;
    {
        const bool branch_taken_0x2d7d4c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7d4c) {
            ctx->pc = 0x2D7D64u;
            goto label_2d7d64;
        }
    }
    ctx->pc = 0x2D7D54u;
    // 0x2d7d54: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2d7d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2d7d58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d7d58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7d5c: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x2D7D5Cu;
    {
        const bool branch_taken_0x2d7d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7d5c) {
            ctx->pc = 0x2D7F50u;
            goto label_2d7f50;
        }
    }
    ctx->pc = 0x2D7D64u;
label_2d7d64:
    // 0x2d7d64: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x2d7d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2d7d68: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d7d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d7d6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d7d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7d70: 0xc0b4c2c  jal         func_2D30B0
    ctx->pc = 0x2D7D70u;
    SET_GPR_U32(ctx, 31, 0x2D7D78u);
    ctx->pc = 0x2D30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30B0u, 0x2D7D70u, 0x2D7D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7D78u;
label_2d7d78:
    // 0x2d7d78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d7d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d7d7c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d7d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d7d80: 0xc082b70  jal         func_20ADC0
    ctx->pc = 0x2D7D80u;
    SET_GPR_U32(ctx, 31, 0x2D7D88u);
    ctx->pc = 0x20ADC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ADC0u, 0x2D7D80u, 0x2D7D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7D88u;
label_2d7d88:
    // 0x2d7d88: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2d7d88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7d8c: 0x2e810003  sltiu       $at, $s4, 0x3
    ctx->pc = 0x2d7d8cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2d7d90: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D7D90u;
    {
        const bool branch_taken_0x2d7d90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7d90) {
            ctx->pc = 0x2D7DA8u;
            goto label_2d7da8;
        }
    }
    ctx->pc = 0x2D7D98u;
    // 0x2d7d98: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2d7d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2d7d9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d7d9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7da0: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x2D7DA0u;
    {
        const bool branch_taken_0x2d7da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7da0) {
            ctx->pc = 0x2D7F50u;
            goto label_2d7f50;
        }
    }
    ctx->pc = 0x2D7DA8u;
label_2d7da8:
    // 0x2d7da8: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x2d7da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2d7dac: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d7dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d7db0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d7db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7db4: 0xc0b4c2c  jal         func_2D30B0
    ctx->pc = 0x2D7DB4u;
    SET_GPR_U32(ctx, 31, 0x2D7DBCu);
    ctx->pc = 0x2D30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30B0u, 0x2D7DB4u, 0x2D7DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7DBCu;
label_2d7dbc:
    // 0x2d7dbc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d7dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d7dc0: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x2d7dc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d7dc4: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x2d7dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d7dc8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2d7dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2d7dcc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D7DCCu;
    SET_GPR_U32(ctx, 31, 0x2D7DD4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D7DCCu, 0x2D7DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7DD4u;
label_2d7dd4:
    // 0x2d7dd4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2d7dd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7dd8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2d7dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2d7ddc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d7ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7de0: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2D7DE0u;
    SET_GPR_U32(ctx, 31, 0x2D7DE8u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2D7DE0u, 0x2D7DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7DE8u;
label_2d7de8:
    // 0x2d7de8: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x2d7de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2d7dec: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x2d7decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d7df0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2d7df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d7df4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2d7df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7df8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2d7df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7dfc: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2d7dfcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d7e00: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2d7e00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d7e04: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2d7e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d7e08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d7e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7e0c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2d7e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d7e10: 0xc0b5fe0  jal         func_2D7F80
    ctx->pc = 0x2D7E10u;
    SET_GPR_U32(ctx, 31, 0x2D7E18u);
    ctx->pc = 0x2D7F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7F80u, 0x2D7E10u, 0x2D7E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7E18u;
label_2d7e18:
    // 0x2d7e18: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2d7e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7e1c: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2d7e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7e20: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d7e20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d7e24: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2d7e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2d7e28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d7e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7e2c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2d7e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d7e30: 0xc0b5fe0  jal         func_2D7F80
    ctx->pc = 0x2D7E30u;
    SET_GPR_U32(ctx, 31, 0x2D7E38u);
    ctx->pc = 0x2D7F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7F80u, 0x2D7E30u, 0x2D7E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7E38u;
label_2d7e38:
    // 0x2d7e38: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d7e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7e3c: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x2d7e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7e40: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d7e40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d7e44: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2d7e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2d7e48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d7e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7e4c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2d7e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d7e50: 0xc0b5fe0  jal         func_2D7F80
    ctx->pc = 0x2D7E50u;
    SET_GPR_U32(ctx, 31, 0x2D7E58u);
    ctx->pc = 0x2D7F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7F80u, 0x2D7E50u, 0x2D7E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7E58u;
label_2d7e58:
    // 0x2d7e58: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2d7e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7e5c: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2d7e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7e60: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d7e60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d7e64: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2d7e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2d7e68: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2d7e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2d7e6c: 0xc104d24  jal         func_413490
    ctx->pc = 0x2D7E6Cu;
    SET_GPR_U32(ctx, 31, 0x2D7E74u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2D7E6Cu, 0x2D7E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7E74u;
label_2d7e74:
    // 0x2d7e74: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x2d7e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2d7e78: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x2d7e78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d7e7c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2D7E7Cu;
    {
        const bool branch_taken_0x2d7e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7e7c) {
            ctx->pc = 0x2D7F30u;
            goto label_2d7f30;
        }
    }
    ctx->pc = 0x2D7E84u;
label_2d7e84:
    // 0x2d7e84: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x2d7e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2d7e88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d7e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7e8c: 0xc0b5fe0  jal         func_2D7F80
    ctx->pc = 0x2D7E8Cu;
    SET_GPR_U32(ctx, 31, 0x2D7E94u);
    ctx->pc = 0x2D7F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7F80u, 0x2D7E8Cu, 0x2D7E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7E94u;
label_2d7e94:
    // 0x2d7e94: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x2d7e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d7e98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d7e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7e9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d7e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7ea0: 0xc0b5fe0  jal         func_2D7F80
    ctx->pc = 0x2D7EA0u;
    SET_GPR_U32(ctx, 31, 0x2D7EA8u);
    ctx->pc = 0x2D7F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7F80u, 0x2D7EA0u, 0x2D7EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7EA8u;
label_2d7ea8:
    // 0x2d7ea8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d7ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7eac: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x2d7eacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2d7eb0: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2d7eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2d7eb4: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x2d7eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2d7eb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d7eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7ebc: 0xc0b5fe0  jal         func_2D7F80
    ctx->pc = 0x2D7EBCu;
    SET_GPR_U32(ctx, 31, 0x2D7EC4u);
    ctx->pc = 0x2D7F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7F80u, 0x2D7EBCu, 0x2D7EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7EC4u;
label_2d7ec4:
    // 0x2d7ec4: 0xc4540004  lwc1        $f20, 0x4($v0)
    ctx->pc = 0x2d7ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d7ec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d7ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7ecc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d7eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7ed0: 0xc0b5fe0  jal         func_2D7F80
    ctx->pc = 0x2D7ED0u;
    SET_GPR_U32(ctx, 31, 0x2D7ED8u);
    ctx->pc = 0x2D7F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7F80u, 0x2D7ED0u, 0x2D7ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7ED8u;
label_2d7ed8:
    // 0x2d7ed8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2d7ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7edc: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x2d7edcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2d7ee0: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2d7ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2d7ee4: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x2d7ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2d7ee8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d7ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7eec: 0xc0b5fe0  jal         func_2D7F80
    ctx->pc = 0x2D7EECu;
    SET_GPR_U32(ctx, 31, 0x2D7EF4u);
    ctx->pc = 0x2D7F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7F80u, 0x2D7EECu, 0x2D7EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7EF4u;
label_2d7ef4:
    // 0x2d7ef4: 0xc4540008  lwc1        $f20, 0x8($v0)
    ctx->pc = 0x2d7ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d7ef8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d7ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7efc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d7efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7f00: 0xc0b5fe0  jal         func_2D7F80
    ctx->pc = 0x2D7F00u;
    SET_GPR_U32(ctx, 31, 0x2D7F08u);
    ctx->pc = 0x2D7F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7F80u, 0x2D7F00u, 0x2D7F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7F08u;
label_2d7f08:
    // 0x2d7f08: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d7f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7f0c: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x2d7f0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2d7f10: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2d7f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2d7f14: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2d7f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2d7f18: 0xc104d24  jal         func_413490
    ctx->pc = 0x2D7F18u;
    SET_GPR_U32(ctx, 31, 0x2D7F20u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2D7F18u, 0x2D7F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7F20u;
label_2d7f20:
    // 0x2d7f20: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x2d7f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7f24: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2d7f24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d7f28: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x2d7f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2d7f2c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d7f2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2d7f30:
    // 0x2d7f30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d7f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7f34: 0xc082b70  jal         func_20ADC0
    ctx->pc = 0x2D7F34u;
    SET_GPR_U32(ctx, 31, 0x2D7F3Cu);
    ctx->pc = 0x20ADC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ADC0u, 0x2D7F34u, 0x2D7F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7F3Cu;
label_2d7f3c:
    // 0x2d7f3c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d7f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d7f40: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2d7f40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d7f44: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x2D7F44u;
    {
        const bool branch_taken_0x2d7f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7f44) {
            ctx->pc = 0x2D7E84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7e84;
        }
    }
    ctx->pc = 0x2D7F4Cu;
    // 0x2d7f4c: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x2d7f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d7f50:
    // 0x2d7f50: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2d7f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d7f54: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2d7f54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d7f58: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2d7f58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d7f5c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2d7f5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d7f60: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d7f60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d7f64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d7f64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d7f68: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2d7f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d7f6c: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x2d7f6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2d7f70: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7F78u;
    // 0x2d7f78: 0x0  nop
    ctx->pc = 0x2d7f78u;
    // NOP
    // 0x2d7f7c: 0x0  nop
    ctx->pc = 0x2d7f7cu;
    // NOP
    ctx->pc = 0x2d7f80u;
}
