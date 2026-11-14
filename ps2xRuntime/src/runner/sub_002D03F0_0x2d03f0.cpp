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

// Function: sub_002D03F0
// Address: 0x2d03f0 - 0x2d04a0
void sub_002D03F0_0x2d03f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D03F0_0x2d03f0");
#endif

    switch (ctx->pc) {
        case 0x2d0460u: goto label_2d0460;
        case 0x2d0480u: goto label_2d0480;
        default: break;
    }

    ctx->pc = 0x2d03f0u;

    // 0x2d03f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d03f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d03f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d03f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d03f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d03f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2d03fc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2d03fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2d0400: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d0400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0404: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D0404u;
    {
        const bool branch_taken_0x2d0404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0404) {
            ctx->pc = 0x2D0480u;
            goto label_2d0480;
        }
    }
    ctx->pc = 0x2D040Cu;
    // 0x2d040c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d040cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0410: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d0410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d0414: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D0414u;
    {
        const bool branch_taken_0x2d0414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0414) {
            ctx->pc = 0x2D0460u;
            goto label_2d0460;
        }
    }
    ctx->pc = 0x2D041Cu;
    // 0x2d041c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d041cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0420: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2d0420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0424: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d0424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0428: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2d0428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d042c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d042cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0430: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d0430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d0434: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2d0434u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d0438: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2d0438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d043c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x2d043cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2d0440: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0440u;
    {
        const bool branch_taken_0x2d0440 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2d0440) {
            ctx->pc = 0x2D0450u;
            goto label_2d0450;
        }
    }
    ctx->pc = 0x2D0448u;
    // 0x2d0448: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2d0448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2d044c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2d044cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_2d0450:
    // 0x2d0450: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2d0450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2d0454: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2d0454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d0458: 0xc0b6350  jal         func_2D8D40
    ctx->pc = 0x2D0458u;
    SET_GPR_U32(ctx, 31, 0x2D0460u);
    ctx->pc = 0x2D8D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8D40u, 0x2D0458u, 0x2D0460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0460u;
label_2d0460:
    // 0x2d0460: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2d0460u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0464: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2d0464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d0468: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d0468u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d046c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D046Cu;
    {
        const bool branch_taken_0x2d046c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d046c) {
            ctx->pc = 0x2D0480u;
            goto label_2d0480;
        }
    }
    ctx->pc = 0x2D0474u;
    // 0x2d0474: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d0474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0478: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2D0478u;
    SET_GPR_U32(ctx, 31, 0x2D0480u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2D0478u, 0x2D0480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0480u;
label_2d0480:
    // 0x2d0480: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d0480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0484: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d0484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0488: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d0488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d048c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D048Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D048Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0494u;
    // 0x2d0494: 0x0  nop
    ctx->pc = 0x2d0494u;
    // NOP
    // 0x2d0498: 0x0  nop
    ctx->pc = 0x2d0498u;
    // NOP
    // 0x2d049c: 0x0  nop
    ctx->pc = 0x2d049cu;
    // NOP
    ctx->pc = 0x2d04a0u;
}
