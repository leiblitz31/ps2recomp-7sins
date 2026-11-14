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

// Function: sub_001C4700
// Address: 0x1c4700 - 0x1c4770
void sub_001C4700_0x1c4700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4700_0x1c4700");
#endif

    switch (ctx->pc) {
        case 0x1c4724u: goto label_1c4724;
        case 0x1c475cu: goto label_1c475c;
        default: break;
    }

    ctx->pc = 0x1c4700u;

    // 0x1c4700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c4700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c4704: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c4704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c4708: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c4708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1c470c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1c470cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4710: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c4710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4714: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c4714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c4718: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1c4718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c471c: 0xc06e564  jal         func_1B9590
    ctx->pc = 0x1C471Cu;
    SET_GPR_U32(ctx, 31, 0x1C4724u);
    ctx->pc = 0x1B9590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9590u, 0x1C471Cu, 0x1C4724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4724u;
label_1c4724:
    // 0x1c4724: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c4724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4728: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1c4728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c472c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c472cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4730: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c4730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c4734: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c4734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4738: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c4738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c473c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1c473cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c4740: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1c4740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c4744: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c4744u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c4748: 0x3012  mflo        $a2
    ctx->pc = 0x1c4748u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1c474c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1c474cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1c4750: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1c4750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c4754: 0xc070e44  jal         func_1C3910
    ctx->pc = 0x1C4754u;
    SET_GPR_U32(ctx, 31, 0x1C475Cu);
    ctx->pc = 0x1C3910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3910u, 0x1C4754u, 0x1C475Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C475Cu;
label_1c475c:
    // 0x1c475c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c475cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4760: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1c4760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c4764: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C476Cu;
    // 0x1c476c: 0x0  nop
    ctx->pc = 0x1c476cu;
    // NOP
    ctx->pc = 0x1c4770u;
}
