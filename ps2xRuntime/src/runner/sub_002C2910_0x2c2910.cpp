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

// Function: sub_002C2910
// Address: 0x2c2910 - 0x2c2a40
void sub_002C2910_0x2c2910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2910_0x2c2910");
#endif

    switch (ctx->pc) {
        case 0x2c293cu: goto label_2c293c;
        case 0x2c2954u: goto label_2c2954;
        case 0x2c2968u: goto label_2c2968;
        case 0x2c298cu: goto label_2c298c;
        case 0x2c29a0u: goto label_2c29a0;
        case 0x2c29acu: goto label_2c29ac;
        case 0x2c29c0u: goto label_2c29c0;
        case 0x2c29e4u: goto label_2c29e4;
        case 0x2c2a14u: goto label_2c2a14;
        case 0x2c2a24u: goto label_2c2a24;
        default: break;
    }

    ctx->pc = 0x2c2910u;

    // 0x2c2910: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2c2910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2c2914: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c2914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c2918: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c2918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c291c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c291cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c2920: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c2920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c2924: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x2c2924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x2c2928: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2c2928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c292c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2c292cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2c2930: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2c2930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c2934: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C2934u;
    SET_GPR_U32(ctx, 31, 0x2C293Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C2934u, 0x2C293Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C293Cu;
label_2c293c:
    // 0x2c293c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c293cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2940: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C2940u;
    {
        const bool branch_taken_0x2c2940 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2940) {
            ctx->pc = 0x2C298Cu;
            goto label_2c298c;
        }
    }
    ctx->pc = 0x2C2948u;
    // 0x2c2948: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2c2948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c294c: 0xc09ac08  jal         func_26B020
    ctx->pc = 0x2C294Cu;
    SET_GPR_U32(ctx, 31, 0x2C2954u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x2C294Cu, 0x2C2954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2954u;
label_2c2954:
    // 0x2c2954: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2c2954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2c2958: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2c2958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c295c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c295cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2960: 0xc09b078  jal         func_26C1E0
    ctx->pc = 0x2C2960u;
    SET_GPR_U32(ctx, 31, 0x2C2968u);
    ctx->pc = 0x26C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C1E0u, 0x2C2960u, 0x2C2968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2968u;
label_2c2968:
    // 0x2c2968: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x2c2968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x2c296c: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x2c296cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x2c2970: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2c2970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c2974: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2c2974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2c2978: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2c2978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c297c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c297cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2980: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c2980u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2984: 0xc0af064  jal         func_2BC190
    ctx->pc = 0x2C2984u;
    SET_GPR_U32(ctx, 31, 0x2C298Cu);
    ctx->pc = 0x2BC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC190u, 0x2C2984u, 0x2C298Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C298Cu;
label_2c298c:
    // 0x2c298c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2c298cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c2990: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2c2990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2c2994: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2c2994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2c2998: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C2998u;
    SET_GPR_U32(ctx, 31, 0x2C29A0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C2998u, 0x2C29A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C29A0u;
label_2c29a0:
    // 0x2c29a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c29a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c29a4: 0xc090864  jal         func_242190
    ctx->pc = 0x2C29A4u;
    SET_GPR_U32(ctx, 31, 0x2C29ACu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x2C29A4u, 0x2C29ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C29ACu;
label_2c29ac:
    // 0x2c29ac: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2c29acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c29b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c29b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c29b4: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x2c29b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2c29b8: 0xc090870  jal         func_2421C0
    ctx->pc = 0x2C29B8u;
    SET_GPR_U32(ctx, 31, 0x2C29C0u);
    ctx->pc = 0x2421C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2421C0u, 0x2C29B8u, 0x2C29C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C29C0u;
label_2c29c0:
    // 0x2c29c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c29c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c29c4: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C29C4u;
    {
        const bool branch_taken_0x2c29c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c29c4) {
            ctx->pc = 0x2C2A24u;
            goto label_2c2a24;
        }
    }
    ctx->pc = 0x2C29CCu;
    // 0x2c29cc: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C29CCu;
    {
        const bool branch_taken_0x2c29cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c29cc) {
            ctx->pc = 0x2C2A24u;
            goto label_2c2a24;
        }
    }
    ctx->pc = 0x2C29D4u;
    // 0x2c29d4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2c29d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c29d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c29d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c29dc: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2C29DCu;
    SET_GPR_U32(ctx, 31, 0x2C29E4u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2C29DCu, 0x2C29E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C29E4u;
label_2c29e4:
    // 0x2c29e4: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x2c29e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c29e8: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x2c29e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c29ec: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2c29ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c29f0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2c29f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c29f4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2c29f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c29f8: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2c29f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2c29fc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2c29fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2c2a00: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2c2a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2c2a04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c2a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2a08: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2c2a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c2a0c: 0xc09381c  jal         func_24E070
    ctx->pc = 0x2C2A0Cu;
    SET_GPR_U32(ctx, 31, 0x2C2A14u);
    ctx->pc = 0x24E070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E070u, 0x2C2A0Cu, 0x2C2A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2A14u;
label_2c2a14:
    // 0x2c2a14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c2a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2a18: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2c2a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c2a1c: 0xc090f14  jal         func_243C50
    ctx->pc = 0x2C2A1Cu;
    SET_GPR_U32(ctx, 31, 0x2C2A24u);
    ctx->pc = 0x243C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243C50u, 0x2C2A1Cu, 0x2C2A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2A24u;
label_2c2a24:
    // 0x2c2a24: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c2a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c2a28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c2a28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c2a2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c2a2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2a30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c2a30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2a34: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2c2a34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2c2a38: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2A40u;
}
