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

// Function: sub_00296F60
// Address: 0x296f60 - 0x297240
void sub_00296F60_0x296f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296F60_0x296f60");
#endif

    switch (ctx->pc) {
        case 0x296f7cu: goto label_296f7c;
        case 0x296fecu: goto label_296fec;
        case 0x29700cu: goto label_29700c;
        case 0x297044u: goto label_297044;
        case 0x297080u: goto label_297080;
        case 0x29708cu: goto label_29708c;
        case 0x2970fcu: goto label_2970fc;
        case 0x297118u: goto label_297118;
        case 0x29712cu: goto label_29712c;
        case 0x297178u: goto label_297178;
        case 0x2971bcu: goto label_2971bc;
        case 0x2971e4u: goto label_2971e4;
        case 0x297218u: goto label_297218;
        default: break;
    }

    ctx->pc = 0x296f60u;

    // 0x296f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x296f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x296f64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x296f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x296f68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x296f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x296f6c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x296f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296f70: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x296f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x296f74: 0xc0a51e4  jal         func_294790
    ctx->pc = 0x296F74u;
    SET_GPR_U32(ctx, 31, 0x296F7Cu);
    ctx->pc = 0x294790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294790u, 0x296F74u, 0x296F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296F7Cu;
label_296f7c:
    // 0x296f7c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x296f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x296f80: 0x24636080  addiu       $v1, $v1, 0x6080
    ctx->pc = 0x296f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24704));
    // 0x296f84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x296f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296f88: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x296f88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x296f8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x296f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296f90: 0xac4000c4  sw          $zero, 0xC4($v0)
    ctx->pc = 0x296f90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 0));
    // 0x296f94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x296f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296f98: 0xa04000c8  sb          $zero, 0xC8($v0)
    ctx->pc = 0x296f98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 200), (uint8_t)GPR_U32(ctx, 0));
    // 0x296f9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x296f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296fa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x296fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296fa4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x296fa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x296fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x296FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296FB0u;
    // 0x296fb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x296fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x296fb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x296fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x296fb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x296fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x296fbc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x296fbcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x296fc0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x296fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296fc4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x296FC4u;
    {
        const bool branch_taken_0x296fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x296fc4) {
            ctx->pc = 0x29700Cu;
            goto label_29700c;
        }
    }
    ctx->pc = 0x296FCCu;
    // 0x296fcc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x296fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x296fd0: 0x24636080  addiu       $v1, $v1, 0x6080
    ctx->pc = 0x296fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24704));
    // 0x296fd4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x296fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296fd8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x296fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x296fdc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x296fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296fe0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x296fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296fe4: 0xc0a52d0  jal         func_294B40
    ctx->pc = 0x296FE4u;
    SET_GPR_U32(ctx, 31, 0x296FECu);
    ctx->pc = 0x294B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294B40u, 0x296FE4u, 0x296FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296FECu;
label_296fec:
    // 0x296fec: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x296fecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296ff0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x296ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x296ff4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x296ff4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x296ff8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x296FF8u;
    {
        const bool branch_taken_0x296ff8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x296ff8) {
            ctx->pc = 0x29700Cu;
            goto label_29700c;
        }
    }
    ctx->pc = 0x297000u;
    // 0x297000: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x297000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297004: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x297004u;
    SET_GPR_U32(ctx, 31, 0x29700Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x297004u, 0x29700Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29700Cu;
label_29700c:
    // 0x29700c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29700cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x297010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297014: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x297014u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x297018: 0x3e00008  jr          $ra
    ctx->pc = 0x297018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297020u;
    // 0x297020: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x297020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x297024: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x297024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x297028: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x297028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29702c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x29702cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x297030: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x297030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x297034: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x297034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297038: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x297038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29703c: 0xc0911dc  jal         func_244770
    ctx->pc = 0x29703Cu;
    SET_GPR_U32(ctx, 31, 0x297044u);
    ctx->pc = 0x244770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244770u, 0x29703Cu, 0x297044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297044u;
label_297044:
    // 0x297044: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x297044u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x297048: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x297048u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29704c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29704cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297050: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x297050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297054: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x297054u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x297058: 0x3e00008  jr          $ra
    ctx->pc = 0x297058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297060u;
    // 0x297060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x297060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x297064: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x297064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x297068: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x297068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x29706c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x29706cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297070: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x297070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297074: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x297074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297078: 0xc0a5c90  jal         func_297240
    ctx->pc = 0x297078u;
    SET_GPR_U32(ctx, 31, 0x297080u);
    ctx->pc = 0x297240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297240u, 0x297078u, 0x297080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297080u;
label_297080:
    // 0x297080: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x297080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297084: 0xc084ef0  jal         func_213BC0
    ctx->pc = 0x297084u;
    SET_GPR_U32(ctx, 31, 0x29708Cu);
    ctx->pc = 0x213BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213BC0u, 0x297084u, 0x29708Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29708Cu;
label_29708c:
    // 0x29708c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29708cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297090: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x297090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x297094: 0x3e00008  jr          $ra
    ctx->pc = 0x297094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29709Cu;
    // 0x29709c: 0x0  nop
    ctx->pc = 0x29709cu;
    // NOP
    // 0x2970a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2970a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2970a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2970a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2970a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2970a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2970ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2970acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2970b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2970b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2970b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2970b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2970b8: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2970b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2970bc: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2970bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x2970c0: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x2970c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x2970c4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2970c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2970c8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2970c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2970cc: 0x1062003d  beq         $v1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2970CCu;
    {
        const bool branch_taken_0x2970cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2970cc) {
            ctx->pc = 0x2971C4u;
            goto label_2971c4;
        }
    }
    ctx->pc = 0x2970D4u;
    // 0x2970d4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2970d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2970d8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2970D8u;
    {
        const bool branch_taken_0x2970d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2970d8) {
            ctx->pc = 0x2970E8u;
            goto label_2970e8;
        }
    }
    ctx->pc = 0x2970E0u;
    // 0x2970e0: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x2970E0u;
    {
        const bool branch_taken_0x2970e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2970e0) {
            ctx->pc = 0x297218u;
            goto label_297218;
        }
    }
    ctx->pc = 0x2970E8u;
label_2970e8:
    // 0x2970e8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2970e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2970ec: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2970ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2970f0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2970f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2970f4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2970F4u;
    SET_GPR_U32(ctx, 31, 0x2970FCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2970F4u, 0x2970FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2970FCu;
label_2970fc:
    // 0x2970fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2970fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297100: 0x10110045  beq         $zero, $s1, . + 4 + (0x45 << 2)
    ctx->pc = 0x297100u;
    {
        const bool branch_taken_0x297100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 17));
        if (branch_taken_0x297100) {
            ctx->pc = 0x297218u;
            goto label_297218;
        }
    }
    ctx->pc = 0x297108u;
    // 0x297108: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x297108u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29710c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29710cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297110: 0xc09bab0  jal         func_26EAC0
    ctx->pc = 0x297110u;
    SET_GPR_U32(ctx, 31, 0x297118u);
    ctx->pc = 0x26EAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EAC0u, 0x297110u, 0x297118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297118u;
label_297118:
    // 0x297118: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x297118u;
    {
        const bool branch_taken_0x297118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x297118) {
            ctx->pc = 0x29713Cu;
            goto label_29713c;
        }
    }
    ctx->pc = 0x297120u;
    // 0x297120: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x297120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297124: 0xc09bad0  jal         func_26EB40
    ctx->pc = 0x297124u;
    SET_GPR_U32(ctx, 31, 0x29712Cu);
    ctx->pc = 0x26EB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EB40u, 0x297124u, 0x29712Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29712Cu;
label_29712c:
    // 0x29712c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29712Cu;
    {
        const bool branch_taken_0x29712c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29712c) {
            ctx->pc = 0x29713Cu;
            goto label_29713c;
        }
    }
    ctx->pc = 0x297134u;
    // 0x297134: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x297134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297138: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x297138u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29713c:
    // 0x29713c: 0x325300ff  andi        $s3, $s2, 0xFF
    ctx->pc = 0x29713cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x297140: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x297140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x297144: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x297144u;
    {
        const bool branch_taken_0x297144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x297144) {
            ctx->pc = 0x297180u;
            goto label_297180;
        }
    }
    ctx->pc = 0x29714Cu;
    // 0x29714c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x29714cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x297150: 0x904200c8  lbu         $v0, 0xC8($v0)
    ctx->pc = 0x297150u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x297154: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x297154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x297158: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x297158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29715c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29715Cu;
    {
        const bool branch_taken_0x29715c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29715c) {
            ctx->pc = 0x297180u;
            goto label_297180;
        }
    }
    ctx->pc = 0x297164u;
    // 0x297164: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x297164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x297168: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x297168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29716c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29716cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297170: 0xc0a5c90  jal         func_297240
    ctx->pc = 0x297170u;
    SET_GPR_U32(ctx, 31, 0x297178u);
    ctx->pc = 0x297240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297240u, 0x297170u, 0x297178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297178u;
label_297178:
    // 0x297178: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x297178u;
    {
        const bool branch_taken_0x297178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297178) {
            ctx->pc = 0x297218u;
            goto label_297218;
        }
    }
    ctx->pc = 0x297180u;
label_297180:
    // 0x297180: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x297180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x297184: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x297184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297188: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x297188u;
    {
        const bool branch_taken_0x297188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x297188) {
            ctx->pc = 0x297218u;
            goto label_297218;
        }
    }
    ctx->pc = 0x297190u;
    // 0x297190: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x297190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x297194: 0x904200c8  lbu         $v0, 0xC8($v0)
    ctx->pc = 0x297194u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x297198: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x297198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29719c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x29719Cu;
    {
        const bool branch_taken_0x29719c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29719c) {
            ctx->pc = 0x297218u;
            goto label_297218;
        }
    }
    ctx->pc = 0x2971A4u;
    // 0x2971a4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2971a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2971a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2971a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2971ac: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x2971acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x2971b0: 0x24c6d5b8  addiu       $a2, $a2, -0x2A48
    ctx->pc = 0x2971b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956472));
    // 0x2971b4: 0xc0a5c90  jal         func_297240
    ctx->pc = 0x2971B4u;
    SET_GPR_U32(ctx, 31, 0x2971BCu);
    ctx->pc = 0x297240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297240u, 0x2971B4u, 0x2971BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2971BCu;
label_2971bc:
    // 0x2971bc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2971BCu;
    {
        const bool branch_taken_0x2971bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2971bc) {
            ctx->pc = 0x297218u;
            goto label_297218;
        }
    }
    ctx->pc = 0x2971C4u;
label_2971c4:
    // 0x2971c4: 0x8fb00070  lw          $s0, 0x70($sp)
    ctx->pc = 0x2971c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2971c8: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2971C8u;
    {
        const bool branch_taken_0x2971c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2971c8) {
            ctx->pc = 0x2971ECu;
            goto label_2971ec;
        }
    }
    ctx->pc = 0x2971D0u;
    // 0x2971d0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2971d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2971d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2971d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2971d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2971d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2971dc: 0xc0a5c90  jal         func_297240
    ctx->pc = 0x2971DCu;
    SET_GPR_U32(ctx, 31, 0x2971E4u);
    ctx->pc = 0x297240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297240u, 0x2971DCu, 0x2971E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2971E4u;
label_2971e4:
    // 0x2971e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2971E4u;
    {
        const bool branch_taken_0x2971e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2971e4) {
            ctx->pc = 0x297218u;
            goto label_297218;
        }
    }
    ctx->pc = 0x2971ECu;
label_2971ec:
    // 0x2971ec: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2971ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2971f0: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2971F0u;
    {
        const bool branch_taken_0x2971f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2971f0) {
            ctx->pc = 0x297218u;
            goto label_297218;
        }
    }
    ctx->pc = 0x2971F8u;
    // 0x2971f8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2971f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2971fc: 0x2782a2e0  addiu       $v0, $gp, -0x5D20
    ctx->pc = 0x2971fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943456));
    // 0x297200: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x297200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x297204: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x297204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x297208: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x297208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29720c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x29720cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x297210: 0xc0a5c90  jal         func_297240
    ctx->pc = 0x297210u;
    SET_GPR_U32(ctx, 31, 0x297218u);
    ctx->pc = 0x297240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297240u, 0x297210u, 0x297218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297218u;
label_297218:
    // 0x297218: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x297218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29721c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29721cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x297220: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x297220u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x297224: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x297224u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297228: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x297228u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29722c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29722cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297230: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x297230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x297234: 0x3e00008  jr          $ra
    ctx->pc = 0x297234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29723Cu;
    // 0x29723c: 0x0  nop
    ctx->pc = 0x29723cu;
    // NOP
    ctx->pc = 0x297240u;
}
