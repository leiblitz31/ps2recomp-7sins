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

// Function: sub_0020ED40
// Address: 0x20ed40 - 0x20ee30
void sub_0020ED40_0x20ed40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020ED40_0x20ed40");
#endif

    switch (ctx->pc) {
        case 0x20ed70u: goto label_20ed70;
        case 0x20ed90u: goto label_20ed90;
        case 0x20eda0u: goto label_20eda0;
        case 0x20edb8u: goto label_20edb8;
        case 0x20edd0u: goto label_20edd0;
        case 0x20ede4u: goto label_20ede4;
        case 0x20ee0cu: goto label_20ee0c;
        default: break;
    }

    ctx->pc = 0x20ed40u;

    // 0x20ed40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20ed40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20ed44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20ed44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20ed48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20ed48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20ed4c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x20ed4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x20ed50: 0xa7a50030  sh          $a1, 0x30($sp)
    ctx->pc = 0x20ed50u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 5));
    // 0x20ed54: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20ed54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ed58: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x20ED58u;
    {
        const bool branch_taken_0x20ed58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ed58) {
            ctx->pc = 0x20EE0Cu;
            goto label_20ee0c;
        }
    }
    ctx->pc = 0x20ED60u;
    // 0x20ed60: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20ed60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ed64: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x20ed64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x20ed68: 0xc1217b4  jal         func_485ED0
    ctx->pc = 0x20ED68u;
    SET_GPR_U32(ctx, 31, 0x20ED70u);
    ctx->pc = 0x485ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485ED0u, 0x20ED68u, 0x20ED70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ED70u;
label_20ed70:
    // 0x20ed70: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20ed70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ed74: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x20ed74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x20ed78: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x20ED78u;
    {
        const bool branch_taken_0x20ed78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ed78) {
            ctx->pc = 0x20EDA8u;
            goto label_20eda8;
        }
    }
    ctx->pc = 0x20ED80u;
    // 0x20ed80: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20ed80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ed84: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x20ed84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x20ed88: 0xc083b8c  jal         func_20EE30
    ctx->pc = 0x20ED88u;
    SET_GPR_U32(ctx, 31, 0x20ED90u);
    ctx->pc = 0x20EE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EE30u, 0x20ED88u, 0x20ED90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ED90u;
label_20ed90:
    // 0x20ed90: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20ed90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ed94: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x20ed94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x20ed98: 0xc119c5c  jal         func_467170
    ctx->pc = 0x20ED98u;
    SET_GPR_U32(ctx, 31, 0x20EDA0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x20ED98u, 0x20EDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EDA0u;
label_20eda0:
    // 0x20eda0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20eda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20eda4: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x20eda4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_20eda8:
    // 0x20eda8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20eda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20edac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x20edacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20edb0: 0xc0e6f1a  jal         func_39BC68
    ctx->pc = 0x20EDB0u;
    SET_GPR_U32(ctx, 31, 0x20EDB8u);
    ctx->pc = 0x39BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC68u, 0x20EDB0u, 0x20EDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EDB8u;
label_20edb8:
    // 0x20edb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20edb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20edbc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20edbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20edc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20edc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20edc4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20edc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20edc8: 0xc0e6ee0  jal         func_39BB80
    ctx->pc = 0x20EDC8u;
    SET_GPR_U32(ctx, 31, 0x20EDD0u);
    ctx->pc = 0x39BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BB80u, 0x20EDC8u, 0x20EDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EDD0u;
label_20edd0:
    // 0x20edd0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20edd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20edd4: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x20edd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x20edd8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20edd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20eddc: 0xc08a614  jal         func_229850
    ctx->pc = 0x20EDDCu;
    SET_GPR_U32(ctx, 31, 0x20EDE4u);
    ctx->pc = 0x229850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229850u, 0x20EDDCu, 0x20EDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EDE4u;
label_20ede4:
    // 0x20ede4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ede8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x20ede8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x20edec: 0x87a20030  lh          $v0, 0x30($sp)
    ctx->pc = 0x20edecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20edf0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x20edf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20edf4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x20edf4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x20edf8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20EDF8u;
    {
        const bool branch_taken_0x20edf8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x20edf8) {
            ctx->pc = 0x20EE0Cu;
            goto label_20ee0c;
        }
    }
    ctx->pc = 0x20EE00u;
    // 0x20ee00: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x20ee00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ee04: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x20EE04u;
    SET_GPR_U32(ctx, 31, 0x20EE0Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x20EE04u, 0x20EE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EE0Cu;
label_20ee0c:
    // 0x20ee0c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20ee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ee10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20ee10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20ee14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20ee14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ee18: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x20ee18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20ee1c: 0x3e00008  jr          $ra
    ctx->pc = 0x20EE1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EE1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20EE24u;
    // 0x20ee24: 0x0  nop
    ctx->pc = 0x20ee24u;
    // NOP
    // 0x20ee28: 0x0  nop
    ctx->pc = 0x20ee28u;
    // NOP
    // 0x20ee2c: 0x0  nop
    ctx->pc = 0x20ee2cu;
    // NOP
    ctx->pc = 0x20ee30u;
}
