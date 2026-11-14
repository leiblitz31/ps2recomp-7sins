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

// Function: sub_00290800
// Address: 0x290800 - 0x2908b0
void sub_00290800_0x290800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290800_0x290800");
#endif

    switch (ctx->pc) {
        case 0x290870u: goto label_290870;
        case 0x290890u: goto label_290890;
        default: break;
    }

    ctx->pc = 0x290800u;

    // 0x290800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x290800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x290804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x290804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x290808: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x290808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x29080c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x29080cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x290810: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x290810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290814: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x290814u;
    {
        const bool branch_taken_0x290814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x290814) {
            ctx->pc = 0x290890u;
            goto label_290890;
        }
    }
    ctx->pc = 0x29081Cu;
    // 0x29081c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29081cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290820: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x290820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x290824: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x290824u;
    {
        const bool branch_taken_0x290824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x290824) {
            ctx->pc = 0x290870u;
            goto label_290870;
        }
    }
    ctx->pc = 0x29082Cu;
    // 0x29082c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x29082cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290830: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x290830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290834: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x290834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290838: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x290838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x29083c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29083cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290840: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x290840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x290844: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x290844u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x290848: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x290848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29084c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x29084cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x290850: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x290850u;
    {
        const bool branch_taken_0x290850 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x290850) {
            ctx->pc = 0x290860u;
            goto label_290860;
        }
    }
    ctx->pc = 0x290858u;
    // 0x290858: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x290858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x29085c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x29085cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_290860:
    // 0x290860: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x290860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x290864: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x290864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x290868: 0xc0a4608  jal         func_291820
    ctx->pc = 0x290868u;
    SET_GPR_U32(ctx, 31, 0x290870u);
    ctx->pc = 0x291820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291820u, 0x290868u, 0x290870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290870u;
label_290870:
    // 0x290870: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x290870u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290874: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x290874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x290878: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x290878u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x29087c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29087Cu;
    {
        const bool branch_taken_0x29087c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29087c) {
            ctx->pc = 0x290890u;
            goto label_290890;
        }
    }
    ctx->pc = 0x290884u;
    // 0x290884: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x290884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290888: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x290888u;
    SET_GPR_U32(ctx, 31, 0x290890u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x290888u, 0x290890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290890u;
label_290890:
    // 0x290890: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x290890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290894: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x290894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290898: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x290898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29089c: 0x3e00008  jr          $ra
    ctx->pc = 0x29089Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29089Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2908A4u;
    // 0x2908a4: 0x0  nop
    ctx->pc = 0x2908a4u;
    // NOP
    // 0x2908a8: 0x0  nop
    ctx->pc = 0x2908a8u;
    // NOP
    // 0x2908ac: 0x0  nop
    ctx->pc = 0x2908acu;
    // NOP
    ctx->pc = 0x2908b0u;
}
