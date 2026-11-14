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

// Function: sub_001E8240
// Address: 0x1e8240 - 0x1e82b0
void sub_001E8240_0x1e8240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8240_0x1e8240");
#endif

    switch (ctx->pc) {
        case 0x1e8264u: goto label_1e8264;
        case 0x1e829cu: goto label_1e829c;
        default: break;
    }

    ctx->pc = 0x1e8240u;

    // 0x1e8240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e8240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e8244: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e8244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e8248: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e8248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e824c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e824cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8250: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e8250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8254: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e8254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e8258: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1e8258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e825c: 0xc075904  jal         func_1D6410
    ctx->pc = 0x1E825Cu;
    SET_GPR_U32(ctx, 31, 0x1E8264u);
    ctx->pc = 0x1D6410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6410u, 0x1E825Cu, 0x1E8264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8264u;
label_1e8264:
    // 0x1e8264: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e8264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8268: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1e8268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e826c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e826cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8270: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1e8270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e8274: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e8274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8278: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e8278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e827c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1e827cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e8280: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1e8280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1e8284: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e8284u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1e8288: 0x3012  mflo        $a2
    ctx->pc = 0x1e8288u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1e828c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1e828cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1e8290: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1e8290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e8294: 0xc079c60  jal         func_1E7180
    ctx->pc = 0x1E8294u;
    SET_GPR_U32(ctx, 31, 0x1E829Cu);
    ctx->pc = 0x1E7180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7180u, 0x1E8294u, 0x1E829Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E829Cu;
label_1e829c:
    // 0x1e829c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e829cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e82a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1e82a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e82a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E82A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E82A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E82ACu;
    // 0x1e82ac: 0x0  nop
    ctx->pc = 0x1e82acu;
    // NOP
    ctx->pc = 0x1e82b0u;
}
