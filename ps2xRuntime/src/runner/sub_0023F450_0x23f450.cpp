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

// Function: sub_0023F450
// Address: 0x23f450 - 0x23f500
void sub_0023F450_0x23f450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F450_0x23f450");
#endif

    switch (ctx->pc) {
        case 0x23f4c0u: goto label_23f4c0;
        case 0x23f4e0u: goto label_23f4e0;
        default: break;
    }

    ctx->pc = 0x23f450u;

    // 0x23f450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23f450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23f454: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23f454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23f458: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23f458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23f45c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x23f45cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x23f460: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23f460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f464: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x23F464u;
    {
        const bool branch_taken_0x23f464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f464) {
            ctx->pc = 0x23F4E0u;
            goto label_23f4e0;
        }
    }
    ctx->pc = 0x23F46Cu;
    // 0x23f46c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23f46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f470: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23f470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23f474: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x23F474u;
    {
        const bool branch_taken_0x23f474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f474) {
            ctx->pc = 0x23F4C0u;
            goto label_23f4c0;
        }
    }
    ctx->pc = 0x23F47Cu;
    // 0x23f47c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23f47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f480: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x23f480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f484: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23f484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f488: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x23f488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23f48c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23f48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f490: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23f490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23f494: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x23f494u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23f498: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x23f498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x23f49c: 0x33103  sra         $a2, $v1, 4
    ctx->pc = 0x23f49cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 4));
    // 0x23f4a0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23F4A0u;
    {
        const bool branch_taken_0x23f4a0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x23f4a0) {
            ctx->pc = 0x23F4B0u;
            goto label_23f4b0;
        }
    }
    ctx->pc = 0x23F4A8u;
    // 0x23f4a8: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x23f4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x23f4ac: 0x23103  sra         $a2, $v0, 4
    ctx->pc = 0x23f4acu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
label_23f4b0:
    // 0x23f4b0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x23f4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x23f4b4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x23f4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23f4b8: 0xc090048  jal         func_240120
    ctx->pc = 0x23F4B8u;
    SET_GPR_U32(ctx, 31, 0x23F4C0u);
    ctx->pc = 0x240120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240120u, 0x23F4B8u, 0x23F4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F4C0u;
label_23f4c0:
    // 0x23f4c0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x23f4c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f4c4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23f4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23f4c8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23f4c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x23f4cc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F4CCu;
    {
        const bool branch_taken_0x23f4cc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23f4cc) {
            ctx->pc = 0x23F4E0u;
            goto label_23f4e0;
        }
    }
    ctx->pc = 0x23F4D4u;
    // 0x23f4d4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23f4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f4d8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x23F4D8u;
    SET_GPR_U32(ctx, 31, 0x23F4E0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x23F4D8u, 0x23F4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F4E0u;
label_23f4e0:
    // 0x23f4e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23f4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f4e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23f4e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f4e8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23f4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23f4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x23F4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F4F4u;
    // 0x23f4f4: 0x0  nop
    ctx->pc = 0x23f4f4u;
    // NOP
    // 0x23f4f8: 0x0  nop
    ctx->pc = 0x23f4f8u;
    // NOP
    // 0x23f4fc: 0x0  nop
    ctx->pc = 0x23f4fcu;
    // NOP
    ctx->pc = 0x23f500u;
}
