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

// Function: sub_001BE440
// Address: 0x1be440 - 0x1be500
void sub_001BE440_0x1be440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE440_0x1be440");
#endif

    switch (ctx->pc) {
        case 0x1be4b0u: goto label_1be4b0;
        case 0x1be4c4u: goto label_1be4c4;
        case 0x1be4e4u: goto label_1be4e4;
        default: break;
    }

    ctx->pc = 0x1be440u;

    // 0x1be440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1be440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1be444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be448: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1be448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1be44c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1be44cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1be450: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1be450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be454: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1BE454u;
    {
        const bool branch_taken_0x1be454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be454) {
            ctx->pc = 0x1BE4E4u;
            goto label_1be4e4;
        }
    }
    ctx->pc = 0x1BE45Cu;
    // 0x1be45c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1be45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be460: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1be460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be464: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BE464u;
    {
        const bool branch_taken_0x1be464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be464) {
            ctx->pc = 0x1BE4B0u;
            goto label_1be4b0;
        }
    }
    ctx->pc = 0x1BE46Cu;
    // 0x1be46c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1be46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be470: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1be470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be474: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1be474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be478: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1be478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1be47c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1be47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be480: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1be480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be484: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1be484u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1be488: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1be488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1be48c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x1be48cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1be490: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE490u;
    {
        const bool branch_taken_0x1be490 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1be490) {
            ctx->pc = 0x1BE4A0u;
            goto label_1be4a0;
        }
    }
    ctx->pc = 0x1BE498u;
    // 0x1be498: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1be498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1be49c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x1be49cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_1be4a0:
    // 0x1be4a0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1be4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1be4a4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1be4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1be4a8: 0xc06f958  jal         func_1BE560
    ctx->pc = 0x1BE4A8u;
    SET_GPR_U32(ctx, 31, 0x1BE4B0u);
    ctx->pc = 0x1BE560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE560u, 0x1BE4A8u, 0x1BE4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE4B0u;
label_1be4b0:
    // 0x1be4b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1be4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be4b4: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1be4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1be4b8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1be4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1be4bc: 0xc06f940  jal         func_1BE500
    ctx->pc = 0x1BE4BCu;
    SET_GPR_U32(ctx, 31, 0x1BE4C4u);
    ctx->pc = 0x1BE500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE500u, 0x1BE4BCu, 0x1BE4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE4C4u;
label_1be4c4:
    // 0x1be4c4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1be4c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be4c8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1be4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1be4cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1be4ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1be4d0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE4D0u;
    {
        const bool branch_taken_0x1be4d0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1be4d0) {
            ctx->pc = 0x1BE4E4u;
            goto label_1be4e4;
        }
    }
    ctx->pc = 0x1BE4D8u;
    // 0x1be4d8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1be4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be4dc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1BE4DCu;
    SET_GPR_U32(ctx, 31, 0x1BE4E4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1BE4DCu, 0x1BE4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE4E4u;
label_1be4e4:
    // 0x1be4e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1be4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be4e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be4ec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1be4ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1be4f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE4F8u;
    // 0x1be4f8: 0x0  nop
    ctx->pc = 0x1be4f8u;
    // NOP
    // 0x1be4fc: 0x0  nop
    ctx->pc = 0x1be4fcu;
    // NOP
    ctx->pc = 0x1be500u;
}
