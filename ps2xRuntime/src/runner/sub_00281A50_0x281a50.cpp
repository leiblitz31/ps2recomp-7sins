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

// Function: sub_00281A50
// Address: 0x281a50 - 0x281b20
void sub_00281A50_0x281a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281A50_0x281a50");
#endif

    switch (ctx->pc) {
        case 0x281a8cu: goto label_281a8c;
        case 0x281aa4u: goto label_281aa4;
        case 0x281ab0u: goto label_281ab0;
        case 0x281ac0u: goto label_281ac0;
        case 0x281ad4u: goto label_281ad4;
        case 0x281aecu: goto label_281aec;
        case 0x281afcu: goto label_281afc;
        case 0x281b08u: goto label_281b08;
        default: break;
    }

    ctx->pc = 0x281a50u;

    // 0x281a50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x281a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x281a54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x281a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x281a58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x281a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x281a5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x281a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x281a60: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x281a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x281a64: 0xa3a50040  sb          $a1, 0x40($sp)
    ctx->pc = 0x281a64u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 5));
    // 0x281a68: 0x93a20040  lbu         $v0, 0x40($sp)
    ctx->pc = 0x281a68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x281a6c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x281a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x281a70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x281a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281a74: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x281A74u;
    {
        const bool branch_taken_0x281a74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x281a74) {
            ctx->pc = 0x281AF4u;
            goto label_281af4;
        }
    }
    ctx->pc = 0x281A7Cu;
    // 0x281a7c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x281a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x281a80: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x281a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x281a84: 0xc0a06c8  jal         func_281B20
    ctx->pc = 0x281A84u;
    SET_GPR_U32(ctx, 31, 0x281A8Cu);
    ctx->pc = 0x281B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281B20u, 0x281A84u, 0x281A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281A8Cu;
label_281a8c:
    // 0x281a8c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x281A8Cu;
    {
        const bool branch_taken_0x281a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x281a8c) {
            ctx->pc = 0x281B08u;
            goto label_281b08;
        }
    }
    ctx->pc = 0x281A94u;
    // 0x281a94: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x281a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x281a98: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x281a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x281a9c: 0xc041db8  jal         func_1076E0
    ctx->pc = 0x281A9Cu;
    SET_GPR_U32(ctx, 31, 0x281AA4u);
    ctx->pc = 0x1076E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1076E0u, 0x281A9Cu, 0x281AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281AA4u;
label_281aa4:
    // 0x281aa4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x281aa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281aa8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x281AA8u;
    {
        const bool branch_taken_0x281aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281aa8) {
            ctx->pc = 0x281AC4u;
            goto label_281ac4;
        }
    }
    ctx->pc = 0x281AB0u;
label_281ab0:
    // 0x281ab0: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x281ab0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x281ab4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x281ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x281ab8: 0xc10822c  jal         func_4208B0
    ctx->pc = 0x281AB8u;
    SET_GPR_U32(ctx, 31, 0x281AC0u);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x281AB8u, 0x281AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281AC0u;
label_281ac0:
    // 0x281ac0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x281ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_281ac4:
    // 0x281ac4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x281ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x281ac8: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x281ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x281acc: 0xc041db0  jal         func_1076C0
    ctx->pc = 0x281ACCu;
    SET_GPR_U32(ctx, 31, 0x281AD4u);
    ctx->pc = 0x1076C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1076C0u, 0x281ACCu, 0x281AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281AD4u;
label_281ad4:
    // 0x281ad4: 0x1602fff6  bne         $s0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x281AD4u;
    {
        const bool branch_taken_0x281ad4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x281ad4) {
            ctx->pc = 0x281AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_281ab0;
        }
    }
    ctx->pc = 0x281ADCu;
    // 0x281adc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x281adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x281ae0: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x281ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x281ae4: 0xc041d6c  jal         func_1075B0
    ctx->pc = 0x281AE4u;
    SET_GPR_U32(ctx, 31, 0x281AECu);
    ctx->pc = 0x1075B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1075B0u, 0x281AE4u, 0x281AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281AECu;
label_281aec:
    // 0x281aec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x281AECu;
    {
        const bool branch_taken_0x281aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281aec) {
            ctx->pc = 0x281B08u;
            goto label_281b08;
        }
    }
    ctx->pc = 0x281AF4u;
label_281af4:
    // 0x281af4: 0xc12246c  jal         func_4891B0
    ctx->pc = 0x281AF4u;
    SET_GPR_U32(ctx, 31, 0x281AFCu);
    ctx->pc = 0x4891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891B0u, 0x281AF4u, 0x281AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281AFCu;
label_281afc:
    // 0x281afc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x281afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281b00: 0xc120160  jal         func_480580
    ctx->pc = 0x281B00u;
    SET_GPR_U32(ctx, 31, 0x281B08u);
    ctx->pc = 0x480580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480580u, 0x281B00u, 0x281B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281B08u;
label_281b08:
    // 0x281b08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x281b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281b0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x281b0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281b10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x281b10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281b14: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x281b14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x281b18: 0x3e00008  jr          $ra
    ctx->pc = 0x281B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281B20u;
}
