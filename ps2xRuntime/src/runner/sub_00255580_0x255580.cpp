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

// Function: sub_00255580
// Address: 0x255580 - 0x255610
void sub_00255580_0x255580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255580_0x255580");
#endif

    switch (ctx->pc) {
        case 0x2555a8u: goto label_2555a8;
        case 0x2555d4u: goto label_2555d4;
        case 0x2555f4u: goto label_2555f4;
        default: break;
    }

    ctx->pc = 0x255580u;

    // 0x255580: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x255580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x255584: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x255584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x255588: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x255588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25558c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x25558cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x255590: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x255590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x255594: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x255594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x255598: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x255598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x25559c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x25559cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2555a0: 0xc095384  jal         func_254E10
    ctx->pc = 0x2555A0u;
    SET_GPR_U32(ctx, 31, 0x2555A8u);
    ctx->pc = 0x254E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254E10u, 0x2555A0u, 0x2555A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2555A8u;
label_2555a8:
    // 0x2555a8: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2555A8u;
    {
        const bool branch_taken_0x2555a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2555a8) {
            ctx->pc = 0x2555D4u;
            goto label_2555d4;
        }
    }
    ctx->pc = 0x2555B0u;
    // 0x2555b0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2555b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2555b4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2555b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2555b8: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x2555b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2555bc: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x2555bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2555c0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2555c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2555c4: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2555c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2555c8: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2555c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2555cc: 0xc095374  jal         func_254DD0
    ctx->pc = 0x2555CCu;
    SET_GPR_U32(ctx, 31, 0x2555D4u);
    ctx->pc = 0x254DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254DD0u, 0x2555CCu, 0x2555D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2555D4u;
label_2555d4:
    // 0x2555d4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2555d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2555d8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2555d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2555dc: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2555dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2555e0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2555e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2555e4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2555e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2555e8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2555e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2555ec: 0xc095584  jal         func_255610
    ctx->pc = 0x2555ECu;
    SET_GPR_U32(ctx, 31, 0x2555F4u);
    ctx->pc = 0x255610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255610u, 0x2555ECu, 0x2555F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2555F4u;
label_2555f4:
    // 0x2555f4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2555f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2555f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2555f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2555fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2555fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x255600: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x255600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x255604: 0x3e00008  jr          $ra
    ctx->pc = 0x255604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25560Cu;
    // 0x25560c: 0x0  nop
    ctx->pc = 0x25560cu;
    // NOP
    ctx->pc = 0x255610u;
}
