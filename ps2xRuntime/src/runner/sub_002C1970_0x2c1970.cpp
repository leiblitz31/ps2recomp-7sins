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

// Function: sub_002C1970
// Address: 0x2c1970 - 0x2c1ac0
void sub_002C1970_0x2c1970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1970_0x2c1970");
#endif

    switch (ctx->pc) {
        case 0x2c19a4u: goto label_2c19a4;
        case 0x2c19bcu: goto label_2c19bc;
        case 0x2c19ccu: goto label_2c19cc;
        case 0x2c19dcu: goto label_2c19dc;
        case 0x2c19f0u: goto label_2c19f0;
        case 0x2c1a08u: goto label_2c1a08;
        case 0x2c1a20u: goto label_2c1a20;
        case 0x2c1a3cu: goto label_2c1a3c;
        case 0x2c1a60u: goto label_2c1a60;
        case 0x2c1a7cu: goto label_2c1a7c;
        default: break;
    }

    ctx->pc = 0x2c1970u;

    // 0x2c1970: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2c1970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2c1974: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c1974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c1978: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c1978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c197c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c197cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c1980: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c1980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c1984: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c1984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c1988: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x2c1988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x2c198c: 0xafa60080  sw          $a2, 0x80($sp)
    ctx->pc = 0x2c198cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
    // 0x2c1990: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2c1990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c1994: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2c1994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2c1998: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2c1998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2c199c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C199Cu;
    SET_GPR_U32(ctx, 31, 0x2C19A4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C199Cu, 0x2C19A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C19A4u;
label_2c19a4:
    // 0x2c19a4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c19a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c19a8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2c19a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c19ac: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2c19acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2c19b0: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2c19b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2c19b4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C19B4u;
    SET_GPR_U32(ctx, 31, 0x2C19BCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C19B4u, 0x2C19BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C19BCu;
label_2c19bc:
    // 0x2c19bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c19bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c19c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c19c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c19c4: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2C19C4u;
    SET_GPR_U32(ctx, 31, 0x2C19CCu);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2C19C4u, 0x2C19CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C19CCu;
label_2c19cc:
    // 0x2c19cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c19ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c19d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c19d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c19d4: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2C19D4u;
    SET_GPR_U32(ctx, 31, 0x2C19DCu);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2C19D4u, 0x2C19DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C19DCu;
label_2c19dc:
    // 0x2c19dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c19dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c19e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c19e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c19e4: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2c19e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2c19e8: 0xc0967fc  jal         func_259FF0
    ctx->pc = 0x2C19E8u;
    SET_GPR_U32(ctx, 31, 0x2C19F0u);
    ctx->pc = 0x259FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259FF0u, 0x2C19E8u, 0x2C19F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C19F0u;
label_2c19f0:
    // 0x2c19f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c19f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c19f4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c19f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c19f8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2c19f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2c19fc: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2c19fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c1a00: 0xc096874  jal         func_25A1D0
    ctx->pc = 0x2C1A00u;
    SET_GPR_U32(ctx, 31, 0x2C1A08u);
    ctx->pc = 0x25A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A1D0u, 0x2C1A00u, 0x2C1A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1A08u;
label_2c1a08:
    // 0x2c1a08: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C1A08u;
    {
        const bool branch_taken_0x2c1a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1a08) {
            ctx->pc = 0x2C1A50u;
            goto label_2c1a50;
        }
    }
    ctx->pc = 0x2C1A10u;
    // 0x2c1a10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c1a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1a14: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2c1a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c1a18: 0xc0967fc  jal         func_259FF0
    ctx->pc = 0x2C1A18u;
    SET_GPR_U32(ctx, 31, 0x2C1A20u);
    ctx->pc = 0x259FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259FF0u, 0x2C1A18u, 0x2C1A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1A20u;
label_2c1a20:
    // 0x2c1a20: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c1a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c1a24: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c1a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1a28: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2c1a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2c1a2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c1a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1a30: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2c1a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c1a34: 0xc0967fc  jal         func_259FF0
    ctx->pc = 0x2C1A34u;
    SET_GPR_U32(ctx, 31, 0x2C1A3Cu);
    ctx->pc = 0x259FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259FF0u, 0x2C1A34u, 0x2C1A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1A3Cu;
label_2c1a3c:
    // 0x2c1a3c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c1a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c1a40: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2c1a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1a44: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2c1a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2c1a48: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2C1A48u;
    {
        const bool branch_taken_0x2c1a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1a48) {
            ctx->pc = 0x2C1A88u;
            goto label_2c1a88;
        }
    }
    ctx->pc = 0x2C1A50u;
label_2c1a50:
    // 0x2c1a50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c1a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1a54: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2c1a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c1a58: 0xc0967fc  jal         func_259FF0
    ctx->pc = 0x2C1A58u;
    SET_GPR_U32(ctx, 31, 0x2C1A60u);
    ctx->pc = 0x259FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259FF0u, 0x2C1A58u, 0x2C1A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1A60u;
label_2c1a60:
    // 0x2c1a60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c1a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c1a64: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c1a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1a68: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2c1a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2c1a6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c1a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1a70: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2c1a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c1a74: 0xc0967fc  jal         func_259FF0
    ctx->pc = 0x2C1A74u;
    SET_GPR_U32(ctx, 31, 0x2C1A7Cu);
    ctx->pc = 0x259FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259FF0u, 0x2C1A74u, 0x2C1A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1A7Cu;
label_2c1a7c:
    // 0x2c1a7c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c1a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c1a80: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2c1a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1a84: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2c1a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_2c1a88:
    // 0x2c1a88: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x2c1a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1a8c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x2c1a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1a90: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c1a90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c1a94: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2c1a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c1a98: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c1a98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c1a9c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c1a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c1aa0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c1aa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c1aa4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c1aa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1aa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c1aa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1aac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c1aacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1ab0: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2c1ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2c1ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1ABCu;
    // 0x2c1abc: 0x0  nop
    ctx->pc = 0x2c1abcu;
    // NOP
    ctx->pc = 0x2c1ac0u;
}
