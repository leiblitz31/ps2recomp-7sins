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

// Function: sub_00189150
// Address: 0x189150 - 0x1891f0
void sub_00189150_0x189150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189150_0x189150");
#endif

    switch (ctx->pc) {
        case 0x1891b4u: goto label_1891b4;
        case 0x1891d4u: goto label_1891d4;
        default: break;
    }

    ctx->pc = 0x189150u;

    // 0x189150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x189150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x189154: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189158: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x189158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18915c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x18915cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x189160: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x189160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189164: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x189164u;
    {
        const bool branch_taken_0x189164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189164) {
            ctx->pc = 0x1891D4u;
            goto label_1891d4;
        }
    }
    ctx->pc = 0x18916Cu;
    // 0x18916c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18916cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189170: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x189170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189174: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x189174u;
    {
        const bool branch_taken_0x189174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189174) {
            ctx->pc = 0x1891B4u;
            goto label_1891b4;
        }
    }
    ctx->pc = 0x18917Cu;
    // 0x18917c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18917cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189180: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x189180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189184: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x189184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189188: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x189188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18918c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18918cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189190: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x189190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189194: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x189194u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x189198: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x189198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18919c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x18919cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1891a0: 0x3012  mflo        $a2
    ctx->pc = 0x1891a0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1891a4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1891a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1891a8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1891a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1891ac: 0xc062bdc  jal         func_18AF70
    ctx->pc = 0x1891ACu;
    SET_GPR_U32(ctx, 31, 0x1891B4u);
    ctx->pc = 0x18AF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AF70u, 0x1891ACu, 0x1891B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1891B4u;
label_1891b4:
    // 0x1891b4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1891b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1891b8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1891b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1891bc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1891bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1891c0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1891C0u;
    {
        const bool branch_taken_0x1891c0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1891c0) {
            ctx->pc = 0x1891D4u;
            goto label_1891d4;
        }
    }
    ctx->pc = 0x1891C8u;
    // 0x1891c8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1891c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1891cc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1891CCu;
    SET_GPR_U32(ctx, 31, 0x1891D4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1891CCu, 0x1891D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1891D4u;
label_1891d4:
    // 0x1891d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1891d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1891d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1891d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1891dc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1891dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1891e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1891E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1891E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1891E8u;
    // 0x1891e8: 0x0  nop
    ctx->pc = 0x1891e8u;
    // NOP
    // 0x1891ec: 0x0  nop
    ctx->pc = 0x1891ecu;
    // NOP
    ctx->pc = 0x1891f0u;
}
