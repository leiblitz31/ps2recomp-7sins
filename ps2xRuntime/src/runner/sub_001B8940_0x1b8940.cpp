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

// Function: sub_001B8940
// Address: 0x1b8940 - 0x1b89b0
void sub_001B8940_0x1b8940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8940_0x1b8940");
#endif

    switch (ctx->pc) {
        case 0x1b8964u: goto label_1b8964;
        case 0x1b899cu: goto label_1b899c;
        default: break;
    }

    ctx->pc = 0x1b8940u;

    // 0x1b8940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b8940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b8944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b8948: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1b8948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1b894c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1b894cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8950: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b8950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8954: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1b8954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b8958: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1b8958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b895c: 0xc06bbb8  jal         func_1AEEE0
    ctx->pc = 0x1B895Cu;
    SET_GPR_U32(ctx, 31, 0x1B8964u);
    ctx->pc = 0x1AEEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEEE0u, 0x1B895Cu, 0x1B8964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8964u;
label_1b8964:
    // 0x1b8964: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b8964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8968: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1b8968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b896c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b896cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8970: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1b8970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b8974: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b8974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8978: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b8978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b897c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1b897cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b8980: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1b8980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b8984: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b8984u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b8988: 0x3012  mflo        $a2
    ctx->pc = 0x1b8988u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1b898c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1b898cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1b8990: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1b8990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b8994: 0xc06de98  jal         func_1B7A60
    ctx->pc = 0x1B8994u;
    SET_GPR_U32(ctx, 31, 0x1B899Cu);
    ctx->pc = 0x1B7A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A60u, 0x1B8994u, 0x1B899Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B899Cu;
label_1b899c:
    // 0x1b899c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b899cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b89a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1b89a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b89a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B89A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B89A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B89ACu;
    // 0x1b89ac: 0x0  nop
    ctx->pc = 0x1b89acu;
    // NOP
    ctx->pc = 0x1b89b0u;
}
