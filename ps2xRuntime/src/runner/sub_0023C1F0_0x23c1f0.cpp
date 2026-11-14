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

// Function: sub_0023C1F0
// Address: 0x23c1f0 - 0x23c290
void sub_0023C1F0_0x23c1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C1F0_0x23c1f0");
#endif

    switch (ctx->pc) {
        case 0x23c254u: goto label_23c254;
        case 0x23c274u: goto label_23c274;
        default: break;
    }

    ctx->pc = 0x23c1f0u;

    // 0x23c1f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23c1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23c1f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23c1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23c1f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23c1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23c1fc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x23c1fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x23c200: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23c200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c204: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x23C204u;
    {
        const bool branch_taken_0x23c204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c204) {
            ctx->pc = 0x23C274u;
            goto label_23c274;
        }
    }
    ctx->pc = 0x23C20Cu;
    // 0x23c20c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23c20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c210: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23c210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23c214: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x23C214u;
    {
        const bool branch_taken_0x23c214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c214) {
            ctx->pc = 0x23C254u;
            goto label_23c254;
        }
    }
    ctx->pc = 0x23C21Cu;
    // 0x23c21c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23c21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c220: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x23c220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c224: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23c224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c228: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x23c228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23c22c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23c22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c230: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23c230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23c234: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x23c234u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23c238: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x23c238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x23c23c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x23c23cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x23c240: 0x3012  mflo        $a2
    ctx->pc = 0x23c240u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x23c244: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x23c244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x23c248: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x23c248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23c24c: 0xc08f8d8  jal         func_23E360
    ctx->pc = 0x23C24Cu;
    SET_GPR_U32(ctx, 31, 0x23C254u);
    ctx->pc = 0x23E360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E360u, 0x23C24Cu, 0x23C254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C254u;
label_23c254:
    // 0x23c254: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x23c254u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c258: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23c258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23c25c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23c25cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x23c260: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23C260u;
    {
        const bool branch_taken_0x23c260 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23c260) {
            ctx->pc = 0x23C274u;
            goto label_23c274;
        }
    }
    ctx->pc = 0x23C268u;
    // 0x23c268: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23c268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c26c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x23C26Cu;
    SET_GPR_U32(ctx, 31, 0x23C274u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x23C26Cu, 0x23C274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C274u;
label_23c274:
    // 0x23c274: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23c274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c27c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23c27cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23c280: 0x3e00008  jr          $ra
    ctx->pc = 0x23C280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C288u;
    // 0x23c288: 0x0  nop
    ctx->pc = 0x23c288u;
    // NOP
    // 0x23c28c: 0x0  nop
    ctx->pc = 0x23c28cu;
    // NOP
    ctx->pc = 0x23c290u;
}
