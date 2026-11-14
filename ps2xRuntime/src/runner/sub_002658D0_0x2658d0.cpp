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

// Function: sub_002658D0
// Address: 0x2658d0 - 0x265980
void sub_002658D0_0x2658d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002658D0_0x2658d0");
#endif

    switch (ctx->pc) {
        case 0x265940u: goto label_265940;
        case 0x265960u: goto label_265960;
        default: break;
    }

    ctx->pc = 0x2658d0u;

    // 0x2658d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2658d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2658d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2658d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2658d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2658d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2658dc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2658dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2658e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2658e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2658e4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2658E4u;
    {
        const bool branch_taken_0x2658e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2658e4) {
            ctx->pc = 0x265960u;
            goto label_265960;
        }
    }
    ctx->pc = 0x2658ECu;
    // 0x2658ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2658ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2658f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2658f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2658f4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2658F4u;
    {
        const bool branch_taken_0x2658f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2658f4) {
            ctx->pc = 0x265940u;
            goto label_265940;
        }
    }
    ctx->pc = 0x2658FCu;
    // 0x2658fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2658fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265900: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x265900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265904: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x265904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265908: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x265908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x26590c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26590cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265910: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x265910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x265914: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x265914u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x265918: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x265918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26591c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x26591cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x265920: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x265920u;
    {
        const bool branch_taken_0x265920 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x265920) {
            ctx->pc = 0x265930u;
            goto label_265930;
        }
    }
    ctx->pc = 0x265928u;
    // 0x265928: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x265928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x26592c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x26592cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_265930:
    // 0x265930: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x265930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x265934: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x265934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x265938: 0xc09a120  jal         func_268480
    ctx->pc = 0x265938u;
    SET_GPR_U32(ctx, 31, 0x265940u);
    ctx->pc = 0x268480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268480u, 0x265938u, 0x265940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265940u;
label_265940:
    // 0x265940: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x265940u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265944: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x265944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x265948: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x265948u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x26594c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26594Cu;
    {
        const bool branch_taken_0x26594c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x26594c) {
            ctx->pc = 0x265960u;
            goto label_265960;
        }
    }
    ctx->pc = 0x265954u;
    // 0x265954: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x265954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265958: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x265958u;
    SET_GPR_U32(ctx, 31, 0x265960u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x265958u, 0x265960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265960u;
label_265960:
    // 0x265960: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x265960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265964: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x265964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265968: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x265968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26596c: 0x3e00008  jr          $ra
    ctx->pc = 0x26596Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26596Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265974u;
    // 0x265974: 0x0  nop
    ctx->pc = 0x265974u;
    // NOP
    // 0x265978: 0x0  nop
    ctx->pc = 0x265978u;
    // NOP
    // 0x26597c: 0x0  nop
    ctx->pc = 0x26597cu;
    // NOP
    ctx->pc = 0x265980u;
}
