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

// Function: sub_0045CF20
// Address: 0x45cf20 - 0x45cfe0
void sub_0045CF20_0x45cf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045CF20_0x45cf20");
#endif

    switch (ctx->pc) {
        case 0x45cf20u: goto label_45cf20;
        case 0x45cf24u: goto label_45cf24;
        case 0x45cf28u: goto label_45cf28;
        case 0x45cf2cu: goto label_45cf2c;
        case 0x45cf30u: goto label_45cf30;
        case 0x45cf34u: goto label_45cf34;
        case 0x45cf38u: goto label_45cf38;
        case 0x45cf3cu: goto label_45cf3c;
        case 0x45cf40u: goto label_45cf40;
        case 0x45cf44u: goto label_45cf44;
        case 0x45cf48u: goto label_45cf48;
        case 0x45cf4cu: goto label_45cf4c;
        case 0x45cf50u: goto label_45cf50;
        case 0x45cf54u: goto label_45cf54;
        case 0x45cf58u: goto label_45cf58;
        case 0x45cf5cu: goto label_45cf5c;
        case 0x45cf60u: goto label_45cf60;
        case 0x45cf64u: goto label_45cf64;
        case 0x45cf68u: goto label_45cf68;
        case 0x45cf6cu: goto label_45cf6c;
        case 0x45cf70u: goto label_45cf70;
        case 0x45cf74u: goto label_45cf74;
        case 0x45cf78u: goto label_45cf78;
        case 0x45cf7cu: goto label_45cf7c;
        case 0x45cf80u: goto label_45cf80;
        case 0x45cf84u: goto label_45cf84;
        case 0x45cf88u: goto label_45cf88;
        case 0x45cf8cu: goto label_45cf8c;
        case 0x45cf90u: goto label_45cf90;
        case 0x45cf94u: goto label_45cf94;
        case 0x45cf98u: goto label_45cf98;
        case 0x45cf9cu: goto label_45cf9c;
        case 0x45cfa0u: goto label_45cfa0;
        case 0x45cfa4u: goto label_45cfa4;
        case 0x45cfa8u: goto label_45cfa8;
        case 0x45cfacu: goto label_45cfac;
        case 0x45cfb0u: goto label_45cfb0;
        case 0x45cfb4u: goto label_45cfb4;
        case 0x45cfb8u: goto label_45cfb8;
        case 0x45cfbcu: goto label_45cfbc;
        case 0x45cfc0u: goto label_45cfc0;
        case 0x45cfc4u: goto label_45cfc4;
        case 0x45cfc8u: goto label_45cfc8;
        case 0x45cfccu: goto label_45cfcc;
        case 0x45cfd0u: goto label_45cfd0;
        case 0x45cfd4u: goto label_45cfd4;
        case 0x45cfd8u: goto label_45cfd8;
        case 0x45cfdcu: goto label_45cfdc;
        default: break;
    }

    ctx->pc = 0x45cf20u;

label_45cf20:
    // 0x45cf20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x45cf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_45cf24:
    // 0x45cf24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x45cf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_45cf28:
    // 0x45cf28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45cf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45cf2c:
    // 0x45cf2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45cf2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45cf30:
    // 0x45cf30: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x45cf30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_45cf34:
    // 0x45cf34: 0x8fb00060  lw          $s0, 0x60($sp)
    ctx->pc = 0x45cf34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_45cf38:
    // 0x45cf38: 0xc0f0c58  jal         func_3C3160
label_45cf3c:
    if (ctx->pc == 0x45CF3Cu) {
        ctx->pc = 0x45CF40u;
        goto label_45cf40;
    }
    ctx->pc = 0x45CF38u;
    SET_GPR_U32(ctx, 31, 0x45CF40u);
    ctx->pc = 0x3C3160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C3160u, 0x45CF38u, 0x45CF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45CF40u;
label_45cf40:
    // 0x45cf40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x45cf40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45cf44:
    // 0x45cf44: 0x26260028  addiu       $a2, $s1, 0x28
    ctx->pc = 0x45cf44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_45cf48:
    // 0x45cf48: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x45cf48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_45cf4c:
    // 0x45cf4c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x45cf4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_45cf50:
    // 0x45cf50: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x45cf50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_45cf54:
    // 0x45cf54: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x45cf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_45cf58:
    // 0x45cf58: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x45cf58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_45cf5c:
    // 0x45cf5c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x45cf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_45cf60:
    // 0x45cf60: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x45cf60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_45cf64:
    // 0x45cf64: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x45cf64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_45cf68:
    // 0x45cf68: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x45cf68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_45cf6c:
    // 0x45cf6c: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
label_45cf70:
    if (ctx->pc == 0x45CF70u) {
        ctx->pc = 0x45CF74u;
        goto label_45cf74;
    }
    ctx->pc = 0x45CF6Cu;
    {
        const bool branch_taken_0x45cf6c = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x45cf6c) {
            ctx->pc = 0x45CF50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45cf50;
        }
    }
    ctx->pc = 0x45CF74u;
label_45cf74:
    // 0x45cf74: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x45cf74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_45cf78:
    // 0x45cf78: 0x3c024b43  lui         $v0, 0x4B43
    ctx->pc = 0x45cf78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19267 << 16));
label_45cf7c:
    // 0x45cf7c: 0x34424150  ori         $v0, $v0, 0x4150
    ctx->pc = 0x45cf7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16720);
label_45cf80:
    // 0x45cf80: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_45cf84:
    if (ctx->pc == 0x45CF84u) {
        ctx->pc = 0x45CF88u;
        goto label_45cf88;
    }
    ctx->pc = 0x45CF80u;
    {
        const bool branch_taken_0x45cf80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x45cf80) {
            ctx->pc = 0x45CFA0u;
            goto label_45cfa0;
        }
    }
    ctx->pc = 0x45CF88u;
label_45cf88:
    // 0x45cf88: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x45cf88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_45cf8c:
    // 0x45cf8c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x45cf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_45cf90:
    // 0x45cf90: 0x40f809  jalr        $v0
label_45cf94:
    if (ctx->pc == 0x45CF94u) {
        ctx->pc = 0x45CF98u;
        goto label_45cf98;
    }
    ctx->pc = 0x45CF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45CF98u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45CF90u, 0x45CF98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45CF98u;
label_45cf98:
    // 0x45cf98: 0x10000008  b           . + 4 + (0x8 << 2)
label_45cf9c:
    if (ctx->pc == 0x45CF9Cu) {
        ctx->pc = 0x45CFA0u;
        goto label_45cfa0;
    }
    ctx->pc = 0x45CF98u;
    {
        const bool branch_taken_0x45cf98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45cf98) {
            ctx->pc = 0x45CFBCu;
            goto label_45cfbc;
        }
    }
    ctx->pc = 0x45CFA0u;
label_45cfa0:
    // 0x45cfa0: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x45cfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_45cfa4:
    // 0x45cfa4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_45cfa8:
    if (ctx->pc == 0x45CFA8u) {
        ctx->pc = 0x45CFACu;
        goto label_45cfac;
    }
    ctx->pc = 0x45CFA4u;
    {
        const bool branch_taken_0x45cfa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45cfa4) {
            ctx->pc = 0x45CFB8u;
            goto label_45cfb8;
        }
    }
    ctx->pc = 0x45CFACu;
label_45cfac:
    // 0x45cfac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x45cfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45cfb0:
    // 0x45cfb0: 0x10000002  b           . + 4 + (0x2 << 2)
label_45cfb4:
    if (ctx->pc == 0x45CFB4u) {
        ctx->pc = 0x45CFB8u;
        goto label_45cfb8;
    }
    ctx->pc = 0x45CFB0u;
    {
        const bool branch_taken_0x45cfb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45cfb0) {
            ctx->pc = 0x45CFBCu;
            goto label_45cfbc;
        }
    }
    ctx->pc = 0x45CFB8u;
label_45cfb8:
    // 0x45cfb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x45cfb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45cfbc:
    // 0x45cfbc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x45cfbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_45cfc0:
    // 0x45cfc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45cfc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_45cfc4:
    // 0x45cfc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45cfc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_45cfc8:
    // 0x45cfc8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x45cfc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_45cfcc:
    // 0x45cfcc: 0x3e00008  jr          $ra
label_45cfd0:
    if (ctx->pc == 0x45CFD0u) {
        ctx->pc = 0x45CFD4u;
        goto label_45cfd4;
    }
    ctx->pc = 0x45CFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45CFCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45CFD4u;
label_45cfd4:
    // 0x45cfd4: 0x0  nop
    ctx->pc = 0x45cfd4u;
    // NOP
label_45cfd8:
    // 0x45cfd8: 0x0  nop
    ctx->pc = 0x45cfd8u;
    // NOP
label_45cfdc:
    // 0x45cfdc: 0x0  nop
    ctx->pc = 0x45cfdcu;
    // NOP
    ctx->pc = 0x45cfe0u;
}
