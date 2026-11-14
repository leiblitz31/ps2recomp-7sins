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

// Function: sub_00479610
// Address: 0x479610 - 0x479690
void sub_00479610_0x479610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00479610_0x479610");
#endif

    switch (ctx->pc) {
        case 0x47962cu: goto label_47962c;
        case 0x479648u: goto label_479648;
        default: break;
    }

    ctx->pc = 0x479610u;

    // 0x479610: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x479610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x479614: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x479614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x479618: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x479618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x47961c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x47961cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x479620: 0xa3a60030  sb          $a2, 0x30($sp)
    ctx->pc = 0x479620u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 6));
    // 0x479624: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x479624u;
    {
        const bool branch_taken_0x479624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x479624) {
            ctx->pc = 0x479648u;
            goto label_479648;
        }
    }
    ctx->pc = 0x47962Cu;
label_47962c:
    // 0x47962c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x47962cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x479630: 0x24a2fff8  addiu       $v0, $a1, -0x8
    ctx->pc = 0x479630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
    // 0x479634: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x479634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x479638: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x479638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47963c: 0x83a60030  lb          $a2, 0x30($sp)
    ctx->pc = 0x47963cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x479640: 0xc11e64c  jal         func_479930
    ctx->pc = 0x479640u;
    SET_GPR_U32(ctx, 31, 0x479648u);
    ctx->pc = 0x479930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x479930u, 0x479640u, 0x479648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x479648u;
label_479648:
    // 0x479648: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x479648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47964c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x47964cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x479650: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x479650u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x479654: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x479654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x479658: 0x418c3  sra         $v1, $a0, 3
    ctx->pc = 0x479658u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
    // 0x47965c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x47965Cu;
    {
        const bool branch_taken_0x47965c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x47965c) {
            ctx->pc = 0x47966Cu;
            goto label_47966c;
        }
    }
    ctx->pc = 0x479664u;
    // 0x479664: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x479664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x479668: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x479668u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_47966c:
    // 0x47966c: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x47966cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x479670: 0x1020ffee  beqz        $at, . + 4 + (-0x12 << 2)
    ctx->pc = 0x479670u;
    {
        const bool branch_taken_0x479670 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x479670) {
            ctx->pc = 0x47962Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47962c;
        }
    }
    ctx->pc = 0x479678u;
    // 0x479678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x479678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47967c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x47967cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x479680: 0x3e00008  jr          $ra
    ctx->pc = 0x479680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x479680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x479688u;
    // 0x479688: 0x0  nop
    ctx->pc = 0x479688u;
    // NOP
    // 0x47968c: 0x0  nop
    ctx->pc = 0x47968cu;
    // NOP
    ctx->pc = 0x479690u;
}
