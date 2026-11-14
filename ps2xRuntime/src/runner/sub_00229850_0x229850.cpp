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

// Function: sub_00229850
// Address: 0x229850 - 0x229920
void sub_00229850_0x229850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229850_0x229850");
#endif

    switch (ctx->pc) {
        case 0x229878u: goto label_229878;
        case 0x229884u: goto label_229884;
        case 0x2298b8u: goto label_2298b8;
        case 0x2298ccu: goto label_2298cc;
        case 0x2298e8u: goto label_2298e8;
        case 0x229908u: goto label_229908;
        default: break;
    }

    ctx->pc = 0x229850u;

    // 0x229850: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x229850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x229854: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x229854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x229858: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x229858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22985c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22985cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x229860: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x229860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x229864: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x229864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x229868: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x229868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22986c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x22986cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x229870: 0xc08a1a0  jal         func_228680
    ctx->pc = 0x229870u;
    SET_GPR_U32(ctx, 31, 0x229878u);
    ctx->pc = 0x228680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228680u, 0x229870u, 0x229878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229878u;
label_229878:
    // 0x229878: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x229878u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22987c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x22987Cu;
    {
        const bool branch_taken_0x22987c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22987c) {
            ctx->pc = 0x2298D8u;
            goto label_2298d8;
        }
    }
    ctx->pc = 0x229884u;
label_229884:
    // 0x229884: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x229884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229888: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x229888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22988c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x22988cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x229890: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x229890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x229894: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x229894u;
    {
        const bool branch_taken_0x229894 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x229894) {
            ctx->pc = 0x2298D4u;
            goto label_2298d4;
        }
    }
    ctx->pc = 0x22989Cu;
    // 0x22989c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x22989cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2298a0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2298a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2298a4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2298A4u;
    {
        const bool branch_taken_0x2298a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2298a4) {
            ctx->pc = 0x2298CCu;
            goto label_2298cc;
        }
    }
    ctx->pc = 0x2298ACu;
    // 0x2298ac: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2298acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2298b0: 0xc0e20da  jal         func_388368
    ctx->pc = 0x2298B0u;
    SET_GPR_U32(ctx, 31, 0x2298B8u);
    ctx->pc = 0x388368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388368u, 0x2298B0u, 0x2298B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2298B8u;
label_2298b8:
    // 0x2298b8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2298b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2298bc: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2298bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2298c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2298c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2298c4: 0xc08a120  jal         func_228480
    ctx->pc = 0x2298C4u;
    SET_GPR_U32(ctx, 31, 0x2298CCu);
    ctx->pc = 0x228480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228480u, 0x2298C4u, 0x2298CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2298CCu;
label_2298cc:
    // 0x2298cc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2298CCu;
    {
        const bool branch_taken_0x2298cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2298cc) {
            ctx->pc = 0x229908u;
            goto label_229908;
        }
    }
    ctx->pc = 0x2298D4u;
label_2298d4:
    // 0x2298d4: 0x2631002c  addiu       $s1, $s1, 0x2C
    ctx->pc = 0x2298d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
label_2298d8:
    // 0x2298d8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2298d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2298dc: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2298dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2298e0: 0xc08a118  jal         func_228460
    ctx->pc = 0x2298E0u;
    SET_GPR_U32(ctx, 31, 0x2298E8u);
    ctx->pc = 0x228460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228460u, 0x2298E0u, 0x2298E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2298E8u;
label_2298e8:
    // 0x2298e8: 0x1622ffe6  bne         $s1, $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2298E8u;
    {
        const bool branch_taken_0x2298e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2298e8) {
            ctx->pc = 0x229884u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229884;
        }
    }
    ctx->pc = 0x2298F0u;
    // 0x2298f0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2298f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2298f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2298F4u;
    {
        const bool branch_taken_0x2298f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2298f4) {
            ctx->pc = 0x229908u;
            goto label_229908;
        }
    }
    ctx->pc = 0x2298FCu;
    // 0x2298fc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2298fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x229900: 0xc0e20da  jal         func_388368
    ctx->pc = 0x229900u;
    SET_GPR_U32(ctx, 31, 0x229908u);
    ctx->pc = 0x388368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388368u, 0x229900u, 0x229908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229908u;
label_229908:
    // 0x229908: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x229908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22990c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22990cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229910: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x229910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229914: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x229914u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x229918: 0x3e00008  jr          $ra
    ctx->pc = 0x229918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229920u;
}
