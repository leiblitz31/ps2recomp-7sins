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

// Function: sub_00233710
// Address: 0x233710 - 0x2337b0
void sub_00233710_0x233710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233710_0x233710");
#endif

    switch (ctx->pc) {
        case 0x233774u: goto label_233774;
        case 0x233794u: goto label_233794;
        default: break;
    }

    ctx->pc = 0x233710u;

    // 0x233710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x233710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x233714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x233718: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x233718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23371c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x23371cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x233720: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x233720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233724: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x233724u;
    {
        const bool branch_taken_0x233724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233724) {
            ctx->pc = 0x233794u;
            goto label_233794;
        }
    }
    ctx->pc = 0x23372Cu;
    // 0x23372c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23372cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233730: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x233730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x233734: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x233734u;
    {
        const bool branch_taken_0x233734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233734) {
            ctx->pc = 0x233774u;
            goto label_233774;
        }
    }
    ctx->pc = 0x23373Cu;
    // 0x23373c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23373cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233740: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x233740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233744: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x233744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233748: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x233748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23374c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23374cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233750: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x233750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x233754: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x233754u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x233758: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x233758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x23375c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x23375cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x233760: 0x3012  mflo        $a2
    ctx->pc = 0x233760u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x233764: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x233764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x233768: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x233768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23376c: 0xc08cf30  jal         func_233CC0
    ctx->pc = 0x23376Cu;
    SET_GPR_U32(ctx, 31, 0x233774u);
    ctx->pc = 0x233CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233CC0u, 0x23376Cu, 0x233774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233774u;
label_233774:
    // 0x233774: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x233774u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233778: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x233778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23377c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23377cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x233780: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x233780u;
    {
        const bool branch_taken_0x233780 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x233780) {
            ctx->pc = 0x233794u;
            goto label_233794;
        }
    }
    ctx->pc = 0x233788u;
    // 0x233788: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x233788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23378c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x23378Cu;
    SET_GPR_U32(ctx, 31, 0x233794u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x23378Cu, 0x233794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233794u;
label_233794:
    // 0x233794: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x233794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233798: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23379c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23379cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2337a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2337A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2337A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2337A8u;
    // 0x2337a8: 0x0  nop
    ctx->pc = 0x2337a8u;
    // NOP
    // 0x2337ac: 0x0  nop
    ctx->pc = 0x2337acu;
    // NOP
    ctx->pc = 0x2337b0u;
}
