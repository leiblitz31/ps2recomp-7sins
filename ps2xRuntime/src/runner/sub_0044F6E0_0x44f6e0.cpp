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

// Function: sub_0044F6E0
// Address: 0x44f6e0 - 0x44f790
void sub_0044F6E0_0x44f6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044F6E0_0x44f6e0");
#endif

    switch (ctx->pc) {
        case 0x44f750u: goto label_44f750;
        case 0x44f770u: goto label_44f770;
        default: break;
    }

    ctx->pc = 0x44f6e0u;

    // 0x44f6e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44f6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x44f6e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44f6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x44f6e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x44f6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x44f6ec: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x44f6ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x44f6f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44f6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f6f4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x44F6F4u;
    {
        const bool branch_taken_0x44f6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44f6f4) {
            ctx->pc = 0x44F770u;
            goto label_44f770;
        }
    }
    ctx->pc = 0x44F6FCu;
    // 0x44f6fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44f6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f700: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x44f700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x44f704: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x44F704u;
    {
        const bool branch_taken_0x44f704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44f704) {
            ctx->pc = 0x44F750u;
            goto label_44f750;
        }
    }
    ctx->pc = 0x44F70Cu;
    // 0x44f70c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44f70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f710: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x44f710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f714: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44f714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f718: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x44f718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x44f71c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44f71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f720: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x44f720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x44f724: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x44f724u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x44f728: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x44f728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x44f72c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x44f72cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x44f730: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x44F730u;
    {
        const bool branch_taken_0x44f730 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x44f730) {
            ctx->pc = 0x44F740u;
            goto label_44f740;
        }
    }
    ctx->pc = 0x44F738u;
    // 0x44f738: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x44f738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x44f73c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x44f73cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_44f740:
    // 0x44f740: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x44f740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x44f744: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x44f744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44f748: 0xc114830  jal         func_4520C0
    ctx->pc = 0x44F748u;
    SET_GPR_U32(ctx, 31, 0x44F750u);
    ctx->pc = 0x4520C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4520C0u, 0x44F748u, 0x44F750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44F750u;
label_44f750:
    // 0x44f750: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x44f750u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44f754: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x44f754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x44f758: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x44f758u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x44f75c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x44F75Cu;
    {
        const bool branch_taken_0x44f75c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x44f75c) {
            ctx->pc = 0x44F770u;
            goto label_44f770;
        }
    }
    ctx->pc = 0x44F764u;
    // 0x44f764: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44f764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f768: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x44F768u;
    SET_GPR_U32(ctx, 31, 0x44F770u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x44F768u, 0x44F770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44F770u;
label_44f770:
    // 0x44f770: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44f770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f774: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44f774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44f778: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x44f778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x44f77c: 0x3e00008  jr          $ra
    ctx->pc = 0x44F77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44F77Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44F784u;
    // 0x44f784: 0x0  nop
    ctx->pc = 0x44f784u;
    // NOP
    // 0x44f788: 0x0  nop
    ctx->pc = 0x44f788u;
    // NOP
    // 0x44f78c: 0x0  nop
    ctx->pc = 0x44f78cu;
    // NOP
    ctx->pc = 0x44f790u;
}
