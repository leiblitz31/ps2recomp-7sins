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

// Function: sub_002D6820
// Address: 0x2d6820 - 0x2d6910
void sub_002D6820_0x2d6820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6820_0x2d6820");
#endif

    switch (ctx->pc) {
        case 0x2d6850u: goto label_2d6850;
        case 0x2d6888u: goto label_2d6888;
        case 0x2d6898u: goto label_2d6898;
        case 0x2d68a8u: goto label_2d68a8;
        case 0x2d68e8u: goto label_2d68e8;
        default: break;
    }

    ctx->pc = 0x2d6820u;

    // 0x2d6820: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2d6820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2d6824: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d6824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d6828: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d6828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d682c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d682cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d6830: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x2d6830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x2d6834: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x2d6834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x2d6838: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2d6838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d683c: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x2d683cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x2d6840: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2d6840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d6844: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x2d6844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d6848: 0xc041d58  jal         func_107560
    ctx->pc = 0x2D6848u;
    SET_GPR_U32(ctx, 31, 0x2D6850u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2D6848u, 0x2D6850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6850u;
label_2d6850:
    // 0x2d6850: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x2d6850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6854: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2d6854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2d6858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d6858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d685c: 0x0  nop
    ctx->pc = 0x2d685cu;
    // NOP
    // 0x2d6860: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2d6860u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d6864: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2d6864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2d6868: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2d6868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2d686c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d686cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6870: 0x0  nop
    ctx->pc = 0x2d6870u;
    // NOP
    // 0x2d6874: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x2d6874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2d6878: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x2d6878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d687c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2d687cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d6880: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D6880u;
    SET_GPR_U32(ctx, 31, 0x2D6888u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D6880u, 0x2D6888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6888u;
label_2d6888:
    // 0x2d6888: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d6888u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d688c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d688cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6890: 0xc0a80a0  jal         func_2A0280
    ctx->pc = 0x2D6890u;
    SET_GPR_U32(ctx, 31, 0x2D6898u);
    ctx->pc = 0x2A0280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0280u, 0x2D6890u, 0x2D6898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6898u;
label_2d6898:
    // 0x2d6898: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x2d6898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x2d689c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2d689cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d68a0: 0xc0e6f1a  jal         func_39BC68
    ctx->pc = 0x2D68A0u;
    SET_GPR_U32(ctx, 31, 0x2D68A8u);
    ctx->pc = 0x39BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC68u, 0x2D68A0u, 0x2D68A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D68A8u;
label_2d68a8:
    // 0x2d68a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d68a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d68ac: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x2d68acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x2d68b0: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x2d68b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x2d68b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d68b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d68b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d68b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d68bc: 0x0  nop
    ctx->pc = 0x2d68bcu;
    // NOP
    // 0x2d68c0: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2d68c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2d68c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d68c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d68c8: 0xa3a20088  sb          $v0, 0x88($sp)
    ctx->pc = 0x2d68c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 136), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d68cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d68ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d68d0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2d68d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d68d4: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x2d68d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x2d68d8: 0x24c6fef0  addiu       $a2, $a2, -0x110
    ctx->pc = 0x2d68d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967024));
    // 0x2d68dc: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2d68dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d68e0: 0xc0c6d0c  jal         func_31B430
    ctx->pc = 0x2D68E0u;
    SET_GPR_U32(ctx, 31, 0x2D68E8u);
    ctx->pc = 0x31B430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B430u, 0x2D68E0u, 0x2D68E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D68E8u;
label_2d68e8:
    // 0x2d68e8: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x2d68e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x2d68ec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2d68ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d68f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d68f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d68f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d68f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d68f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d68f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d68fc: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x2d68fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2d6900: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6908u;
    // 0x2d6908: 0x0  nop
    ctx->pc = 0x2d6908u;
    // NOP
    // 0x2d690c: 0x0  nop
    ctx->pc = 0x2d690cu;
    // NOP
    ctx->pc = 0x2d6910u;
}
