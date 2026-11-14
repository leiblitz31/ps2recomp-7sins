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

// Function: sub_00268830
// Address: 0x268830 - 0x2688e0
void sub_00268830_0x268830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268830_0x268830");
#endif

    switch (ctx->pc) {
        case 0x2688a0u: goto label_2688a0;
        case 0x2688c0u: goto label_2688c0;
        default: break;
    }

    ctx->pc = 0x268830u;

    // 0x268830: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x268830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x268834: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x268834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x268838: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x268838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x26883c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x26883cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x268840: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x268840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268844: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x268844u;
    {
        const bool branch_taken_0x268844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268844) {
            ctx->pc = 0x2688C0u;
            goto label_2688c0;
        }
    }
    ctx->pc = 0x26884Cu;
    // 0x26884c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26884cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268850: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x268850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x268854: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x268854u;
    {
        const bool branch_taken_0x268854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268854) {
            ctx->pc = 0x2688A0u;
            goto label_2688a0;
        }
    }
    ctx->pc = 0x26885Cu;
    // 0x26885c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x26885cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268860: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x268860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268864: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x268864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268868: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x268868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x26886c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26886cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268870: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x268870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x268874: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x268874u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x268878: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x268878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x26887c: 0x330c3  sra         $a2, $v1, 3
    ctx->pc = 0x26887cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 3));
    // 0x268880: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x268880u;
    {
        const bool branch_taken_0x268880 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x268880) {
            ctx->pc = 0x268890u;
            goto label_268890;
        }
    }
    ctx->pc = 0x268888u;
    // 0x268888: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x268888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x26888c: 0x230c3  sra         $a2, $v0, 3
    ctx->pc = 0x26888cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 3));
label_268890:
    // 0x268890: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x268890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x268894: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x268894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x268898: 0xc09abec  jal         func_26AFB0
    ctx->pc = 0x268898u;
    SET_GPR_U32(ctx, 31, 0x2688A0u);
    ctx->pc = 0x26AFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26AFB0u, 0x268898u, 0x2688A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2688A0u;
label_2688a0:
    // 0x2688a0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2688a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2688a4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2688a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2688a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2688a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2688ac: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2688ACu;
    {
        const bool branch_taken_0x2688ac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2688ac) {
            ctx->pc = 0x2688C0u;
            goto label_2688c0;
        }
    }
    ctx->pc = 0x2688B4u;
    // 0x2688b4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2688b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2688b8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2688B8u;
    SET_GPR_U32(ctx, 31, 0x2688C0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2688B8u, 0x2688C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2688C0u;
label_2688c0:
    // 0x2688c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2688c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2688c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2688c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2688c8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2688c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2688cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2688CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2688CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2688D4u;
    // 0x2688d4: 0x0  nop
    ctx->pc = 0x2688d4u;
    // NOP
    // 0x2688d8: 0x0  nop
    ctx->pc = 0x2688d8u;
    // NOP
    // 0x2688dc: 0x0  nop
    ctx->pc = 0x2688dcu;
    // NOP
    ctx->pc = 0x2688e0u;
}
