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

// Function: sub_00478BC0
// Address: 0x478bc0 - 0x478c60
void sub_00478BC0_0x478bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00478BC0_0x478bc0");
#endif

    switch (ctx->pc) {
        case 0x478c1cu: goto label_478c1c;
        case 0x478c34u: goto label_478c34;
        case 0x478c50u: goto label_478c50;
        default: break;
    }

    ctx->pc = 0x478bc0u;

    // 0x478bc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x478bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x478bc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x478bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x478bc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x478bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x478bcc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x478bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x478bd0: 0xa3a60030  sb          $a2, 0x30($sp)
    ctx->pc = 0x478bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 6));
    // 0x478bd4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x478bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x478bd8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x478bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x478bdc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x478bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x478be0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x478be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x478be4: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x478be4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
    // 0x478be8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x478BE8u;
    {
        const bool branch_taken_0x478be8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x478be8) {
            ctx->pc = 0x478BF8u;
            goto label_478bf8;
        }
    }
    ctx->pc = 0x478BF0u;
    // 0x478bf0: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x478bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x478bf4: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x478bf4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_478bf8:
    // 0x478bf8: 0x28410011  slti        $at, $v0, 0x11
    ctx->pc = 0x478bf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x478bfc: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x478BFCu;
    {
        const bool branch_taken_0x478bfc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x478bfc) {
            ctx->pc = 0x478C3Cu;
            goto label_478c3c;
        }
    }
    ctx->pc = 0x478C04u;
    // 0x478c04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x478c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x478c08: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x478c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x478c0c: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x478c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x478c10: 0x83a60030  lb          $a2, 0x30($sp)
    ctx->pc = 0x478c10u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x478c14: 0xc11e490  jal         func_479240
    ctx->pc = 0x478C14u;
    SET_GPR_U32(ctx, 31, 0x478C1Cu);
    ctx->pc = 0x479240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x479240u, 0x478C14u, 0x478C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478C1Cu;
label_478c1c:
    // 0x478c1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x478c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x478c20: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x478c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x478c24: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x478c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x478c28: 0x83a60030  lb          $a2, 0x30($sp)
    ctx->pc = 0x478c28u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x478c2c: 0xc11e318  jal         func_478C60
    ctx->pc = 0x478C2Cu;
    SET_GPR_U32(ctx, 31, 0x478C34u);
    ctx->pc = 0x478C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x478C60u, 0x478C2Cu, 0x478C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478C34u;
label_478c34:
    // 0x478c34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x478C34u;
    {
        const bool branch_taken_0x478c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x478c34) {
            ctx->pc = 0x478C50u;
            goto label_478c50;
        }
    }
    ctx->pc = 0x478C3Cu;
label_478c3c:
    // 0x478c3c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x478c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x478c40: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x478c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x478c44: 0x83a60030  lb          $a2, 0x30($sp)
    ctx->pc = 0x478c44u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x478c48: 0xc11e490  jal         func_479240
    ctx->pc = 0x478C48u;
    SET_GPR_U32(ctx, 31, 0x478C50u);
    ctx->pc = 0x479240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x479240u, 0x478C48u, 0x478C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478C50u;
label_478c50:
    // 0x478c50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x478c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x478c54: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x478c54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x478c58: 0x3e00008  jr          $ra
    ctx->pc = 0x478C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x478C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x478C60u;
}
