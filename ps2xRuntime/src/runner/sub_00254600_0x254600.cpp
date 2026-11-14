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

// Function: sub_00254600
// Address: 0x254600 - 0x2546b0
void sub_00254600_0x254600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254600_0x254600");
#endif

    switch (ctx->pc) {
        case 0x254670u: goto label_254670;
        case 0x254690u: goto label_254690;
        default: break;
    }

    ctx->pc = 0x254600u;

    // 0x254600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x254600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x254604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254608: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x254608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25460c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x25460cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x254610: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x254610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254614: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x254614u;
    {
        const bool branch_taken_0x254614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x254614) {
            ctx->pc = 0x254690u;
            goto label_254690;
        }
    }
    ctx->pc = 0x25461Cu;
    // 0x25461c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25461cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254620: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x254620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x254624: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x254624u;
    {
        const bool branch_taken_0x254624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x254624) {
            ctx->pc = 0x254670u;
            goto label_254670;
        }
    }
    ctx->pc = 0x25462Cu;
    // 0x25462c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25462cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254630: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x254630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254634: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x254634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254638: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x254638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x25463c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25463cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254640: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x254640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x254644: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x254644u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x254648: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x254648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25464c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x25464cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x254650: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x254650u;
    {
        const bool branch_taken_0x254650 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x254650) {
            ctx->pc = 0x254660u;
            goto label_254660;
        }
    }
    ctx->pc = 0x254658u;
    // 0x254658: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x254658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x25465c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x25465cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_254660:
    // 0x254660: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x254660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x254664: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x254664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x254668: 0xc095cb0  jal         func_2572C0
    ctx->pc = 0x254668u;
    SET_GPR_U32(ctx, 31, 0x254670u);
    ctx->pc = 0x2572C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2572C0u, 0x254668u, 0x254670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254670u;
label_254670:
    // 0x254670: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x254670u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254674: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x254674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x254678: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x254678u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x25467c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25467Cu;
    {
        const bool branch_taken_0x25467c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x25467c) {
            ctx->pc = 0x254690u;
            goto label_254690;
        }
    }
    ctx->pc = 0x254684u;
    // 0x254684: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x254684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254688: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x254688u;
    SET_GPR_U32(ctx, 31, 0x254690u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x254688u, 0x254690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254690u;
label_254690:
    // 0x254690: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x254690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254694: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254698: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x254698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25469c: 0x3e00008  jr          $ra
    ctx->pc = 0x25469Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25469Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2546A4u;
    // 0x2546a4: 0x0  nop
    ctx->pc = 0x2546a4u;
    // NOP
    // 0x2546a8: 0x0  nop
    ctx->pc = 0x2546a8u;
    // NOP
    // 0x2546ac: 0x0  nop
    ctx->pc = 0x2546acu;
    // NOP
    ctx->pc = 0x2546b0u;
}
