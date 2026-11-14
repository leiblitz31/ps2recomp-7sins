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

// Function: sub_002346F0
// Address: 0x2346f0 - 0x2347b0
void sub_002346F0_0x2346f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002346F0_0x2346f0");
#endif

    switch (ctx->pc) {
        case 0x234738u: goto label_234738;
        case 0x234744u: goto label_234744;
        case 0x234760u: goto label_234760;
        case 0x23476cu: goto label_23476c;
        case 0x234790u: goto label_234790;
        default: break;
    }

    ctx->pc = 0x2346f0u;

    // 0x2346f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2346f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2346f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2346f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2346f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2346f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2346fc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2346fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x234700: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x234700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234704: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x234704u;
    {
        const bool branch_taken_0x234704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234704) {
            ctx->pc = 0x234790u;
            goto label_234790;
        }
    }
    ctx->pc = 0x23470Cu;
    // 0x23470c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x23470cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x234710: 0x24635400  addiu       $v1, $v1, 0x5400
    ctx->pc = 0x234710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21504));
    // 0x234714: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x234714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234718: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x234718u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x23471c: 0xaf80bb98  sw          $zero, -0x4468($gp)
    ctx->pc = 0x23471cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949784), GPR_U32(ctx, 0));
    // 0x234720: 0x8f82bba4  lw          $v0, -0x445C($gp)
    ctx->pc = 0x234720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949796)));
    // 0x234724: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x234724u;
    {
        const bool branch_taken_0x234724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234724) {
            ctx->pc = 0x234748u;
            goto label_234748;
        }
    }
    ctx->pc = 0x23472Cu;
    // 0x23472c: 0x8f84bba4  lw          $a0, -0x445C($gp)
    ctx->pc = 0x23472cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949796)));
    // 0x234730: 0xc08d1ec  jal         func_2347B0
    ctx->pc = 0x234730u;
    SET_GPR_U32(ctx, 31, 0x234738u);
    ctx->pc = 0x2347B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2347B0u, 0x234730u, 0x234738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234738u;
label_234738:
    // 0x234738: 0x8f84bba4  lw          $a0, -0x445C($gp)
    ctx->pc = 0x234738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949796)));
    // 0x23473c: 0xc119c5c  jal         func_467170
    ctx->pc = 0x23473Cu;
    SET_GPR_U32(ctx, 31, 0x234744u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x23473Cu, 0x234744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234744u;
label_234744:
    // 0x234744: 0xaf80bba4  sw          $zero, -0x445C($gp)
    ctx->pc = 0x234744u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949796), GPR_U32(ctx, 0));
label_234748:
    // 0x234748: 0x8f82bba8  lw          $v0, -0x4458($gp)
    ctx->pc = 0x234748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949800)));
    // 0x23474c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23474Cu;
    {
        const bool branch_taken_0x23474c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23474c) {
            ctx->pc = 0x234770u;
            goto label_234770;
        }
    }
    ctx->pc = 0x234754u;
    // 0x234754: 0x8f84bba8  lw          $a0, -0x4458($gp)
    ctx->pc = 0x234754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949800)));
    // 0x234758: 0xc08d1ec  jal         func_2347B0
    ctx->pc = 0x234758u;
    SET_GPR_U32(ctx, 31, 0x234760u);
    ctx->pc = 0x2347B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2347B0u, 0x234758u, 0x234760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234760u;
label_234760:
    // 0x234760: 0x8f84bba8  lw          $a0, -0x4458($gp)
    ctx->pc = 0x234760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949800)));
    // 0x234764: 0xc119c5c  jal         func_467170
    ctx->pc = 0x234764u;
    SET_GPR_U32(ctx, 31, 0x23476Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x234764u, 0x23476Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23476Cu;
label_23476c:
    // 0x23476c: 0xaf80bba8  sw          $zero, -0x4458($gp)
    ctx->pc = 0x23476cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949800), GPR_U32(ctx, 0));
label_234770:
    // 0x234770: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x234770u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234774: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x234774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x234778: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x234778u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x23477c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23477Cu;
    {
        const bool branch_taken_0x23477c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23477c) {
            ctx->pc = 0x234790u;
            goto label_234790;
        }
    }
    ctx->pc = 0x234784u;
    // 0x234784: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x234784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234788: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x234788u;
    SET_GPR_U32(ctx, 31, 0x234790u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x234788u, 0x234790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234790u;
label_234790:
    // 0x234790: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x234790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234794: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x234794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234798: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x234798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23479c: 0x3e00008  jr          $ra
    ctx->pc = 0x23479Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23479Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2347A4u;
    // 0x2347a4: 0x0  nop
    ctx->pc = 0x2347a4u;
    // NOP
    // 0x2347a8: 0x0  nop
    ctx->pc = 0x2347a8u;
    // NOP
    // 0x2347ac: 0x0  nop
    ctx->pc = 0x2347acu;
    // NOP
    ctx->pc = 0x2347b0u;
}
