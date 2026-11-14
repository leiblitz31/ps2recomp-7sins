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

// Function: sub_001200F0
// Address: 0x1200f0 - 0x1201a0
void sub_001200F0_0x1200f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001200F0_0x1200f0");
#endif

    switch (ctx->pc) {
        case 0x120160u: goto label_120160;
        case 0x120180u: goto label_120180;
        default: break;
    }

    ctx->pc = 0x1200f0u;

    // 0x1200f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1200f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1200f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1200f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1200f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1200f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1200fc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1200fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x120100: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x120100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120104: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x120104u;
    {
        const bool branch_taken_0x120104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x120104) {
            ctx->pc = 0x120180u;
            goto label_120180;
        }
    }
    ctx->pc = 0x12010Cu;
    // 0x12010c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12010cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120110: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x120110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x120114: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x120114u;
    {
        const bool branch_taken_0x120114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x120114) {
            ctx->pc = 0x120160u;
            goto label_120160;
        }
    }
    ctx->pc = 0x12011Cu;
    // 0x12011c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12011cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120120: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x120120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120124: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x120124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120128: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x120128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x12012c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12012cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120130: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x120130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x120134: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x120134u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x120138: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x120138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12013c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x12013cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x120140: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x120140u;
    {
        const bool branch_taken_0x120140 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x120140) {
            ctx->pc = 0x120150u;
            goto label_120150;
        }
    }
    ctx->pc = 0x120148u;
    // 0x120148: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x120148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x12014c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x12014cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_120150:
    // 0x120150: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x120150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x120154: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x120154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x120158: 0xc048104  jal         func_120410
    ctx->pc = 0x120158u;
    SET_GPR_U32(ctx, 31, 0x120160u);
    ctx->pc = 0x120410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120410u, 0x120158u, 0x120160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120160u;
label_120160:
    // 0x120160: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x120160u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x120164: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x120164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x120168: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x120168u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x12016c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12016Cu;
    {
        const bool branch_taken_0x12016c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x12016c) {
            ctx->pc = 0x120180u;
            goto label_120180;
        }
    }
    ctx->pc = 0x120174u;
    // 0x120174: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x120174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120178: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x120178u;
    SET_GPR_U32(ctx, 31, 0x120180u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x120178u, 0x120180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120180u;
label_120180:
    // 0x120180: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x120180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x120184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120188: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x120188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12018c: 0x3e00008  jr          $ra
    ctx->pc = 0x12018Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12018Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120194u;
    // 0x120194: 0x0  nop
    ctx->pc = 0x120194u;
    // NOP
    // 0x120198: 0x0  nop
    ctx->pc = 0x120198u;
    // NOP
    // 0x12019c: 0x0  nop
    ctx->pc = 0x12019cu;
    // NOP
    ctx->pc = 0x1201a0u;
}
