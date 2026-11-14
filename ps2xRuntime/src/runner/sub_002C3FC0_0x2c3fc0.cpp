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

// Function: sub_002C3FC0
// Address: 0x2c3fc0 - 0x2c41a0
void sub_002C3FC0_0x2c3fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3FC0_0x2c3fc0");
#endif

    switch (ctx->pc) {
        case 0x2c400cu: goto label_2c400c;
        case 0x2c4020u: goto label_2c4020;
        case 0x2c4030u: goto label_2c4030;
        case 0x2c404cu: goto label_2c404c;
        case 0x2c405cu: goto label_2c405c;
        case 0x2c406cu: goto label_2c406c;
        case 0x2c4088u: goto label_2c4088;
        case 0x2c4098u: goto label_2c4098;
        case 0x2c40acu: goto label_2c40ac;
        case 0x2c40b8u: goto label_2c40b8;
        case 0x2c40d0u: goto label_2c40d0;
        case 0x2c40ecu: goto label_2c40ec;
        case 0x2c40fcu: goto label_2c40fc;
        case 0x2c410cu: goto label_2c410c;
        case 0x2c4124u: goto label_2c4124;
        case 0x2c4134u: goto label_2c4134;
        case 0x2c4158u: goto label_2c4158;
        case 0x2c4168u: goto label_2c4168;
        default: break;
    }

    ctx->pc = 0x2c3fc0u;

    // 0x2c3fc0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2c3fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2c3fc4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2c3fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2c3fc8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2c3fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2c3fcc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2c3fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2c3fd0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2c3fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2c3fd4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c3fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2c3fd8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c3fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c3fdc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c3fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c3fe0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c3fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c3fe4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c3fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c3fe8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c3fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c3fec: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x2c3fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x2c3ff0: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x2c3ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x2c3ff4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2c3ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2c3ff8: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x2c3ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c3ffc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4000: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2c4000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c4004: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C4004u;
    SET_GPR_U32(ctx, 31, 0x2C400Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C4004u, 0x2C400Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C400Cu;
label_2c400c:
    // 0x2c400c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2c400cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c4010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4014: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2c4014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2c4018: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C4018u;
    SET_GPR_U32(ctx, 31, 0x2C4020u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C4018u, 0x2C4020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4020u;
label_2c4020:
    // 0x2c4020: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2c4020u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4024: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c4024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4028: 0xc0968a8  jal         func_25A2A0
    ctx->pc = 0x2C4028u;
    SET_GPR_U32(ctx, 31, 0x2C4030u);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x2C4028u, 0x2C4030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4030u;
label_2c4030:
    // 0x2c4030: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c4030u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4034: 0x1240004c  beqz        $s2, . + 4 + (0x4C << 2)
    ctx->pc = 0x2C4034u;
    {
        const bool branch_taken_0x2c4034 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4034) {
            ctx->pc = 0x2C4168u;
            goto label_2c4168;
        }
    }
    ctx->pc = 0x2C403Cu;
    // 0x2c403c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c403cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4040: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2c4040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2c4044: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C4044u;
    SET_GPR_U32(ctx, 31, 0x2C404Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C4044u, 0x2C404Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C404Cu;
label_2c404c:
    // 0x2c404c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2c404cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4050: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c4050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4054: 0xc0b1068  jal         func_2C41A0
    ctx->pc = 0x2C4054u;
    SET_GPR_U32(ctx, 31, 0x2C405Cu);
    ctx->pc = 0x2C41A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C41A0u, 0x2C4054u, 0x2C405Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C405Cu;
label_2c405c:
    // 0x2c405c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2c405cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4060: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2c4060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4064: 0xc0984a4  jal         func_261290
    ctx->pc = 0x2C4064u;
    SET_GPR_U32(ctx, 31, 0x2C406Cu);
    ctx->pc = 0x261290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261290u, 0x2C4064u, 0x2C406Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C406Cu;
label_2c406c:
    // 0x2c406c: 0x5e082b  sltu        $at, $v0, $fp
    ctx->pc = 0x2c406cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x2c4070: 0x14200019  bnez        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x2C4070u;
    {
        const bool branch_taken_0x2c4070 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4070) {
            ctx->pc = 0x2C40D8u;
            goto label_2c40d8;
        }
    }
    ctx->pc = 0x2C4078u;
    // 0x2c4078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c4078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c407c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2c407cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2c4080: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C4080u;
    SET_GPR_U32(ctx, 31, 0x2C4088u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C4080u, 0x2C4088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4088u;
label_2c4088:
    // 0x2c4088: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c4088u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c408c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c408cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4090: 0xc063dd0  jal         func_18F740
    ctx->pc = 0x2C4090u;
    SET_GPR_U32(ctx, 31, 0x2C4098u);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x2C4090u, 0x2C4098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4098u;
label_2c4098:
    // 0x2c4098: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C4098u;
    {
        const bool branch_taken_0x2c4098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4098) {
            ctx->pc = 0x2C40D0u;
            goto label_2c40d0;
        }
    }
    ctx->pc = 0x2C40A0u;
    // 0x2c40a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c40a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c40a4: 0xc063dd0  jal         func_18F740
    ctx->pc = 0x2C40A4u;
    SET_GPR_U32(ctx, 31, 0x2C40ACu);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x2C40A4u, 0x2C40ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C40ACu;
label_2c40ac:
    // 0x2c40ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c40acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c40b0: 0xc05140c  jal         func_145030
    ctx->pc = 0x2C40B0u;
    SET_GPR_U32(ctx, 31, 0x2C40B8u);
    ctx->pc = 0x145030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145030u, 0x2C40B0u, 0x2C40B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C40B8u;
label_2c40b8:
    // 0x2c40b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C40B8u;
    {
        const bool branch_taken_0x2c40b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c40b8) {
            ctx->pc = 0x2C40D0u;
            goto label_2c40d0;
        }
    }
    ctx->pc = 0x2C40C0u;
    // 0x2c40c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c40c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c40c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c40c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c40c8: 0xc0ae044  jal         func_2B8110
    ctx->pc = 0x2C40C8u;
    SET_GPR_U32(ctx, 31, 0x2C40D0u);
    ctx->pc = 0x2B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8110u, 0x2C40C8u, 0x2C40D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C40D0u;
label_2c40d0:
    // 0x2c40d0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2C40D0u;
    {
        const bool branch_taken_0x2c40d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c40d0) {
            ctx->pc = 0x2C4168u;
            goto label_2c4168;
        }
    }
    ctx->pc = 0x2C40D8u;
label_2c40d8:
    // 0x2c40d8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2c40d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c40dc: 0x8c440094  lw          $a0, 0x94($v0)
    ctx->pc = 0x2c40dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2c40e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c40e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c40e4: 0xc0b4a64  jal         func_2D2990
    ctx->pc = 0x2C40E4u;
    SET_GPR_U32(ctx, 31, 0x2C40ECu);
    ctx->pc = 0x2D2990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2990u, 0x2C40E4u, 0x2C40ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C40ECu;
label_2c40ec:
    // 0x2c40ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c40ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c40f0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2c40f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c40f4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C40F4u;
    SET_GPR_U32(ctx, 31, 0x2C40FCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C40F4u, 0x2C40FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C40FCu;
label_2c40fc:
    // 0x2c40fc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2c40fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4100: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2c4100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2c4104: 0xc0965f8  jal         func_2597E0
    ctx->pc = 0x2C4104u;
    SET_GPR_U32(ctx, 31, 0x2C410Cu);
    ctx->pc = 0x2597E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2597E0u, 0x2C4104u, 0x2C410Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C410Cu;
label_2c410c:
    // 0x2c410c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c410cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4110: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2c4110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2c4114: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2c4114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c4118: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2c4118u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c411c: 0xc09ad30  jal         func_26B4C0
    ctx->pc = 0x2C411Cu;
    SET_GPR_U32(ctx, 31, 0x2C4124u);
    ctx->pc = 0x26B4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B4C0u, 0x2C411Cu, 0x2C4124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4124u;
label_2c4124:
    // 0x2c4124: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2c4124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2c4128: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c4128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c412c: 0xc09ac18  jal         func_26B060
    ctx->pc = 0x2C412Cu;
    SET_GPR_U32(ctx, 31, 0x2C4134u);
    ctx->pc = 0x26B060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B060u, 0x2C412Cu, 0x2C4134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4134u;
label_2c4134:
    // 0x2c4134: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c4134u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4138: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C4138u;
    {
        const bool branch_taken_0x2c4138 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4138) {
            ctx->pc = 0x2C4158u;
            goto label_2c4158;
        }
    }
    ctx->pc = 0x2C4140u;
    // 0x2c4140: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c4140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4144: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c4144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4148: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c4148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c414c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c414cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4150: 0xc0af03c  jal         func_2BC0F0
    ctx->pc = 0x2C4150u;
    SET_GPR_U32(ctx, 31, 0x2C4158u);
    ctx->pc = 0x2BC0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0F0u, 0x2C4150u, 0x2C4158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4158u;
label_2c4158:
    // 0x2c4158: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2c4158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2c415c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c415cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c4160: 0xc096218  jal         func_258860
    ctx->pc = 0x2C4160u;
    SET_GPR_U32(ctx, 31, 0x2C4168u);
    ctx->pc = 0x258860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258860u, 0x2C4160u, 0x2C4168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4168u;
label_2c4168:
    // 0x2c4168: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2c4168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c416c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2c416cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c4170: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2c4170u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c4174: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2c4174u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c4178: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c4178u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c417c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c417cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c4180: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c4180u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c4184: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c4184u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c4188: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c4188u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c418c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c418cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4190: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x2c4190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2c4194: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C419Cu;
    // 0x2c419c: 0x0  nop
    ctx->pc = 0x2c419cu;
    // NOP
    ctx->pc = 0x2c41a0u;
}
