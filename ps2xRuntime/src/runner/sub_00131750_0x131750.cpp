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

// Function: sub_00131750
// Address: 0x131750 - 0x1317f0
void sub_00131750_0x131750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131750_0x131750");
#endif

    switch (ctx->pc) {
        case 0x1317b4u: goto label_1317b4;
        case 0x1317ccu: goto label_1317cc;
        case 0x1317d8u: goto label_1317d8;
        default: break;
    }

    ctx->pc = 0x131750u;

    // 0x131750: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x131750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x131754: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x131754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x131758: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x131758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13175c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x13175cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x131760: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x131760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x131764: 0xa3a60050  sb          $a2, 0x50($sp)
    ctx->pc = 0x131764u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 6));
    // 0x131768: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x131768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13176c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x13176cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x131770: 0x93a20050  lbu         $v0, 0x50($sp)
    ctx->pc = 0x131770u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x131774: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x131774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x131778: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x131778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x13177c: 0x93a20050  lbu         $v0, 0x50($sp)
    ctx->pc = 0x13177cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x131780: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x131780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x131784: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131788: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x131788u;
    {
        const bool branch_taken_0x131788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x131788) {
            ctx->pc = 0x13179Cu;
            goto label_13179c;
        }
    }
    ctx->pc = 0x131790u;
    // 0x131790: 0x241000ff  addiu       $s0, $zero, 0xFF
    ctx->pc = 0x131790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x131794: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x131794u;
    {
        const bool branch_taken_0x131794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131794) {
            ctx->pc = 0x1317A0u;
            goto label_1317a0;
        }
    }
    ctx->pc = 0x13179Cu;
label_13179c:
    // 0x13179c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13179cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1317a0:
    // 0x1317a0: 0xafb00028  sw          $s0, 0x28($sp)
    ctx->pc = 0x1317a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 16));
    // 0x1317a4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1317a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1317a8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1317a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1317ac: 0xc04c5a8  jal         func_1316A0
    ctx->pc = 0x1317ACu;
    SET_GPR_U32(ctx, 31, 0x1317B4u);
    ctx->pc = 0x1316A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1316A0u, 0x1317ACu, 0x1317B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1317B4u;
label_1317b4:
    // 0x1317b4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1317b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1317b8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1317b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1317bc: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x1317bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1317c0: 0x2464003c  addiu       $a0, $v1, 0x3C
    ctx->pc = 0x1317c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x1317c4: 0xc04c590  jal         func_131640
    ctx->pc = 0x1317C4u;
    SET_GPR_U32(ctx, 31, 0x1317CCu);
    ctx->pc = 0x131640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131640u, 0x1317C4u, 0x1317CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1317CCu;
label_1317cc:
    // 0x1317cc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1317ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1317d0: 0xc1169b4  jal         func_45A6D0
    ctx->pc = 0x1317D0u;
    SET_GPR_U32(ctx, 31, 0x1317D8u);
    ctx->pc = 0x45A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45A6D0u, 0x1317D0u, 0x1317D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1317D8u;
label_1317d8:
    // 0x1317d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1317d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1317dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1317dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1317e0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1317e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1317e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1317E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1317E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1317ECu;
    // 0x1317ec: 0x0  nop
    ctx->pc = 0x1317ecu;
    // NOP
    ctx->pc = 0x1317f0u;
}
