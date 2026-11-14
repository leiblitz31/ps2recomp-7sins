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

// Function: sub_002AC690
// Address: 0x2ac690 - 0x2ac740
void sub_002AC690_0x2ac690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC690_0x2ac690");
#endif

    switch (ctx->pc) {
        case 0x2ac700u: goto label_2ac700;
        case 0x2ac720u: goto label_2ac720;
        default: break;
    }

    ctx->pc = 0x2ac690u;

    // 0x2ac690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ac690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ac694: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ac694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ac698: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2ac698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2ac69c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2ac69cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2ac6a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ac6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac6a4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2AC6A4u;
    {
        const bool branch_taken_0x2ac6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac6a4) {
            ctx->pc = 0x2AC720u;
            goto label_2ac720;
        }
    }
    ctx->pc = 0x2AC6ACu;
    // 0x2ac6ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ac6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac6b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ac6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ac6b4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2AC6B4u;
    {
        const bool branch_taken_0x2ac6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac6b4) {
            ctx->pc = 0x2AC700u;
            goto label_2ac700;
        }
    }
    ctx->pc = 0x2AC6BCu;
    // 0x2ac6bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2ac6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac6c0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2ac6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac6c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ac6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac6c8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2ac6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2ac6cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ac6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac6d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ac6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ac6d4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2ac6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ac6d8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2ac6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ac6dc: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x2ac6dcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2ac6e0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC6E0u;
    {
        const bool branch_taken_0x2ac6e0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2ac6e0) {
            ctx->pc = 0x2AC6F0u;
            goto label_2ac6f0;
        }
    }
    ctx->pc = 0x2AC6E8u;
    // 0x2ac6e8: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2ac6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2ac6ec: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2ac6ecu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_2ac6f0:
    // 0x2ac6f0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2ac6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2ac6f4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2ac6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ac6f8: 0xc0ac27c  jal         func_2B09F0
    ctx->pc = 0x2AC6F8u;
    SET_GPR_U32(ctx, 31, 0x2AC700u);
    ctx->pc = 0x2B09F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B09F0u, 0x2AC6F8u, 0x2AC700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC700u;
label_2ac700:
    // 0x2ac700: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2ac700u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac704: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2ac704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2ac708: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ac708u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2ac70c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AC70Cu;
    {
        const bool branch_taken_0x2ac70c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ac70c) {
            ctx->pc = 0x2AC720u;
            goto label_2ac720;
        }
    }
    ctx->pc = 0x2AC714u;
    // 0x2ac714: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2ac714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac718: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2AC718u;
    SET_GPR_U32(ctx, 31, 0x2AC720u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2AC718u, 0x2AC720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC720u;
label_2ac720:
    // 0x2ac720: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ac720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac724: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ac724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac728: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2ac728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ac72c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC72Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC734u;
    // 0x2ac734: 0x0  nop
    ctx->pc = 0x2ac734u;
    // NOP
    // 0x2ac738: 0x0  nop
    ctx->pc = 0x2ac738u;
    // NOP
    // 0x2ac73c: 0x0  nop
    ctx->pc = 0x2ac73cu;
    // NOP
    ctx->pc = 0x2ac740u;
}
